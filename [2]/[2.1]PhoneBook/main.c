#include <stdio.h>

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

void addPerson(person)
{
    char firstname[MAX_SYMBOLS];
    char secondname[MAX_SYMBOLS];
    char phonenumber[MAX_SYMBOLS];
    char homeemail[MAX_SYMBOLS];
    char workemail[MAX_SYMBOLS];
    short *id;
    char ch;
    printf("Input FirstName: ");
    scanf("%s", firstname);
    printf("\nInput SecondName: ");
    scanf("%s", secondname);
    printf("\nInput Phone Number: ");
    scanf("%s", phonenumber);
    ch = getche();
    while (1)
    {
        printf("\nPress [1] to add email\nPress[2] to add socials\nPress [3] for skip\n")
        switch (ch)
        {
        case 1:
            printf("Input home email: ");
            scanf("%s", homeemail);
            printf("\nInput work email: ");
            scanf("%s", workemail);
            continue;;
        case 2:

            continue;;
        case 3;

            break;
        default:
            break;
        }
    }
}

int main()
{
    Person person[MAX_PERSON];
}