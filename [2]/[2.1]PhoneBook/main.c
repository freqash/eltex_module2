#include <stdio.h>
#include <string.h>

#define MAX_SYMBOLS 100
#define MAX_VARIANTS 5
#define MAX_PERSON 100

int personCount = 0;
Person person[MAX_PERSON];

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
    char Numbers[MAX_VARIANTS][MAX_SYMBOLS];
    char Emails[MAX_VARIANTS][MAX_SYMBOLS];
    Socials socials[MAX_VARIANTS];
} Person;

void addPerson()
{
    Person newPerson;
    printf("Input Full name: ");
    scanf("%s", newPerson.Full_name);
    getchar();
}

void menu()
{
    printf("Phonebook menu\n1. Check all contact\n2. Add new contact\n3. Delete contact\n4. Change contact\n5. Exit\n>");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Full name: %s\n", p[0]->Full_name);
        printf("Full name: %s\n", p[1]->Full_name);
        break;
    case 2:
        addPerson(*p);
        existperson++;
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
    for (int i = 0; i < MAX_PERSON; i++) 
    {
        person[i] = (Person *)malloc(sizeof(Person));
    }
    menu(person);
    for (int i = 0; i < MAX_PERSON; i++) 
    {
        free(person[i]);
    }
    return 0;
 }