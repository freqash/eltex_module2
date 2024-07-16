#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PERSON 100
#define MAX_SYMBOLS 30
#define MAX_SOCIALS 5

typedef struct
{
    char *WorkEmail[MAX_SYMBOLS];
    char *HomeEmail[MAX_SYMBOLS];
} Email;

typedef struct
{
    char *Name[MAX_SYMBOLS];
    char *Link[MAX_SYMBOLS];
}Socials;

typedef struct
{
    short *ID;
    char *FirstName[MAX_SYMBOLS];
    char *SecondName[MAX_SYMBOLS];
    char *PhoneNumber[MAX_SYMBOLS];
    Email email;
    Socials socials[MAX_SOCIALS];
} Person;

void fillAllPersons(Person* p)
{

    for(int i = 0; i < MAX_PERSON; i++)
    {
        // Инициализируем строки символами '-'
        memset(p[i].FirstName, '-', MAX_SYMBOLS - 1);
        p[i].FirstName[MAX_SYMBOLS - 1] = '\0'; // Добавляем нулевой символ в конце строки

        memset(p[i].SecondName, '-', MAX_SYMBOLS - 1);
        p[i].SecondName[MAX_SYMBOLS - 1] = '\0'; 

        memset(p[i].PhoneNumber, '-', MAX_SYMBOLS - 1);
        p[i].PhoneNumber[MAX_SYMBOLS - 1] = '\0'; 

        memset(p[i].email.WorkEmail, '-', MAX_SYMBOLS - 1);
        p[i].email.WorkEmail[MAX_SYMBOLS - 1] = '\0'; 

        memset(p[i].email.HomeEmail, '-', MAX_SYMBOLS - 1);
        p[i].email.HomeEmail[MAX_SYMBOLS - 1] = '\0'; 

        // Инициализируем структуры-соцсети
        for(int j = 0; j < MAX_SOCIALS; j++)
        {
            memset(p[i].socials[j].Name, '-', MAX_SYMBOLS - 1);
            p[i].socials[j].Name[MAX_SYMBOLS - 1] = '\0'; 

            memset(p[i].socials[j].Link, '-', MAX_SYMBOLS - 1);
            p[i].socials[j].Link[MAX_SYMBOLS - 1] = '\0'; 
        }
    }
}

void addPerson(Person* p)
{
    char firstname[MAX_SYMBOLS];
    char secondname[MAX_SYMBOLS];
    char phonenumber[MAX_SYMBOLS];
    char homeemail[MAX_SYMBOLS];
    char workemail[MAX_SYMBOLS];
    short *id;
    char ch;
    short socail_slot;
    printf("Input FirstName: ");
    scanf("%s", firstname);
    printf("\nInput SecondName: ");
    scanf("%s", secondname);
    printf("\nInput Phone Number: ");
    scanf("%s", phonenumber);
    do
    {
        ch = getchar();
        switch (ch)
        {
        case '1':
            printf("Input home email: ");
            scanf("%s", homeemail);
            printf("\nInput work email: ");
            scanf("%s", workemail);
            continue;;
        case '2':
            do
            {
                printf("\nChoice social's slot:\n");
                for(int i = 0; i < MAX_SOCIALS; i++)
                {
                    printf("Slot [%d]: Name: %s Link: %s\n", i, p->socials->Name[i], p->socials->Link[i]);
                }
                scanf("%d", socail_slot);
                printf("Press [q] for exit\n");
            }while (ch != 'q');
            
            continue;
        case '3':

            break;
        default:
            break;
        }
    }while (ch != '3');
    
}

int main()
{
    Person person[MAX_PERSON];
    fillAllPersons(person);
    addPerson(person);
}
