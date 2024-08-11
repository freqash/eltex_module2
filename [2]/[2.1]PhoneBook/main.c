#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SYMBOLS 100
#define MAX_VARIANTS 3
#define MAX_PERSON 100

typedef struct
{
    char Name[MAX_SYMBOLS];
    char Link[MAX_SYMBOLS];
} Socials;

typedef struct
{
    char Full_name[MAX_SYMBOLS];
    char Job[MAX_SYMBOLS];
    char Job_title[MAX_SYMBOLS];
    char PhoneNumbers[MAX_VARIANTS][MAX_SYMBOLS];
    char Emails[MAX_VARIANTS][MAX_SYMBOLS];
    Socials socials[MAX_VARIANTS];
} Person;

int personCount = 0;
Person person[MAX_PERSON];

void addPerson()
{
    Person newPerson;
    printf("Input Full name: ");
    scanf("%s", newPerson.Full_name);
    getchar();
    while(1)
    {
        printf("Add contact menu\n1. Add emails\n2. Add job and job title\n3. Add Phonenumbers\n4. Add socials\n5. Exit\n");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Choice slot for email(0-2) or input '3' for exit\n");
            int choice;
            scanf("%d", &choice);
            switch (choice)
            {
            case 0:
                printf("Input email: ");
                getchar();
                fgets(newPerson.Emails[choice], MAX_SYMBOLS, stdin);
                newPerson.Emails[choice][strcspn(newPerson.Job_title, "\n")] = 0;
                continue;
            case 1:
                printf("Input email: ");
                getchar();
                fgets(newPerson.Emails[choice], MAX_SYMBOLS, stdin);
                newPerson.Emails[choice][strcspn(newPerson.Job_title, "\n")] = 0;
                continue;
            case 2:
                printf("Input email: ");
                getchar();
                fgets(newPerson.Emails[choice], MAX_SYMBOLS, stdin);
                newPerson.Emails[choice][strcspn(newPerson.Job_title, "\n")] = 0;
                continue;
            case 3:
                printf("Exit\n");
                break;
            default:
                printf("Invalid input\n");
                continue;
            }
            continue;
        case 2:
            printf("Input your job: ");
            getchar();
            fgets(newPerson.Job, MAX_SYMBOLS, stdin);
            newPerson.Job[strcspn(newPerson.Job, "\n")] = 0;
            printf("Input your job title: ");
            getchar();
            fgets(newPerson.Job_title, MAX_SYMBOLS, stdin);
            newPerson.Job_title[strcspn(newPerson.Job_title, "\n")] = 0;
            continue;
        case 3:
            printf("Choice slot for phonenumber(0-2) or input '3' for exit\n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 0:
                printf("Input phonenumber: ");
                getchar();
                fgets(newPerson.PhoneNumbers[choice], MAX_SYMBOLS, stdin);
                newPerson.PhoneNumbers[choice][strcspn(newPerson.Job_title, "\n")] = 0;
                continue;
            case 1:
                printf("Input phonenumber: ");
                getchar();
                fgets(newPerson.PhoneNumbers[choice], MAX_SYMBOLS, stdin);
                newPerson.PhoneNumbers[choice][strcspn(newPerson.Job_title, "\n")] = 0;
                continue;
            case 2:
                printf("Input phonenumber: ");
                getchar();
                fgets(newPerson.PhoneNumbers[choice], MAX_SYMBOLS, stdin);
                newPerson.PhoneNumbers[choice][strcspn(newPerson.Job_title, "\n")] = 0;
                continue;
            case 3:
                printf("Exit\n");
                break;
            default:
                printf("Invalid input");
                continue;
            }
            continue;
        case 4: 
            printf("Choice slot for socials(0-2) or input '3' for exit\n");
            scanf("%d", &choice);
            switch (choice)
            {
            case 0:
                printf("Input social name: ");
                getchar();
                fgets(newPerson.socials->Name[choice], MAX_SYMBOLS, stdin);
                newPerson.Emails[choice][strcspn(newPerson.Job_title, "\n")] = 0;
                printf("Input social link: ");
                getchar();
                fgets(newPerson.socials->Link[choice], MAX_SYMBOLS, stdin);
                newPerson.Emails[choice][strcspn(newPerson.Job_title, "\n")] = 0;
                continue;
            case 1:
                printf("Input social name: ");
                getchar();
                fgets(newPerson.socials->Name[choice], MAX_SYMBOLS, stdin);
                newPerson.Emails[choice][strcspn(newPerson.Job_title, "\n")] = 0;
                printf("Input social link: ");
                getchar();
                fgets(newPerson.socials->Link[choice], MAX_SYMBOLS, stdin);
                newPerson.Emails[choice][strcspn(newPerson.Job_title, "\n")] = 0;
                continue;
            case 2:
                printf("Input social name: ");
                getchar();
                fgets(newPerson.socials->Name[choice], MAX_SYMBOLS, stdin);
                newPerson.Emails[choice][strcspn(newPerson.Job_title, "\n")] = 0;
                printf("Input social link: ");
                getchar();
                fgets(newPerson.socials->Link[choice], MAX_SYMBOLS, stdin);
                newPerson.Emails[choice][strcspn(newPerson.Job_title, "\n")] = 0;
                continue;
            case 3:
                printf("Exit\n");
                break;
            default:
                printf("Invalid input\n");
                continue;
            }
            continue;
        case 5:
            printf("Exit from extra menu\n");
            break;
        default:
            printf("Invalid argument\n");
            continue;;
        }
    }
    person[personCount] = newPerson;
}
void viewList()
{
    printf("");
}

void menu()
{
    printf("Phonebook menu\n1. Check all contact\n2. Add new contact\n3. Delete contact\n4. Change contact\n5. Exit\n>");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:

        break;
    case 2:
        addPerson();
        personCount++;
        break;
    case 3:
        
        break;
    case 4:

        break;
    case 5:

        break;
    default:
        break;
    }
}
 int main()
 {
    menu(person);
    return 0;
 }