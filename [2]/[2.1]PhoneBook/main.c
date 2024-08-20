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

void initializePerson(Person *p) 
{
    memset(p->Full_name, 0, sizeof(p->Full_name));
    memset(p->Job, 0, sizeof(p->Job));
    memset(p->Job_title, 0, sizeof(p->Job_title));
    
    for (int i = 0; i < MAX_VARIANTS; i++) {
        memset(p->Emails[i], 0, sizeof(p->Emails[i]));
        memset(p->PhoneNumbers[i], 0, sizeof(p->PhoneNumbers[i]));
        memset(p->socials[i].Name, 0, sizeof(p->socials[i].Name));
        memset(p->socials[i].Link, 0, sizeof(p->socials[i].Link));
    }
}

int personCount = 0;
Person person[MAX_PERSON];

void addPerson()
{
    char none[1] = "-";
    Person newPerson;
    initializePerson(&newPerson);
    strncpy(newPerson.Job, none, 1);
    strncpy(newPerson.Job_title, none, 1);
    for(int j = 0; j < MAX_VARIANTS; j++)
    {
        strncpy(newPerson.Emails[j], none, 1);
        strncpy(newPerson.PhoneNumbers[j], none, 1);
        strncpy(newPerson.socials[j].Link, none, 1);
        strncpy(newPerson.socials[j].Name, none, 1);
    }
    printf("Input Full name: ");
    getchar();
    fgets(newPerson.Full_name, MAX_SYMBOLS, stdin);
    newPerson.Full_name[strcspn(newPerson.Full_name, "\n")] = 0;
    int choice;
    do
    {
        printf("Add contact menu\n1. Add emails\n2. Add job and job title\n3. Add Phonenumbers\n4. Add socials\n5. Exit\n>");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Choice slot for email(0-2) or input '3' for exit\n>");
            int choice;
            scanf("%d", &choice);
            switch (choice)
            {
            case 0:
                printf("Input email: ");
                //getchar();
                fgets(newPerson.Emails[choice], MAX_SYMBOLS, stdin);
                newPerson.Emails[choice][strcspn(newPerson.Emails, "\n")] = 0;
                continue;
            case 1:
                printf("Input email: ");
                //getchar();
                fgets(newPerson.Emails[choice], MAX_SYMBOLS, stdin);
                newPerson.Emails[choice][strcspn(newPerson.Emails, "\n")] = 0;
                continue;
            case 2:
                printf("Input email: ");
                //getchar();
                fgets(newPerson.Emails[choice], MAX_SYMBOLS, stdin);
                newPerson.Emails[choice][strcspn(newPerson.Emails, "\n")] = 0;
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
            fgets(newPerson.Job, MAX_SYMBOLS, stdin);
            newPerson.Job[strcspn(newPerson.Job, "\n")] = 0;
            printf("Input your job title: ");
            fgets(newPerson.Job_title, MAX_SYMBOLS, stdin);
            newPerson.Job_title[strcspn(newPerson.Job_title, "\n")] = 0;
            continue;
        case 3:
            printf("Choice slot for phonenumber(0-2) or input '3' for exit\n>");
            scanf("%d", &choice);
            switch (choice)
            {
            case 0:
                printf("Input phonenumber: ");
                //getchar();
                fgets(newPerson.PhoneNumbers[choice], MAX_SYMBOLS, stdin);
                newPerson.PhoneNumbers[choice][strcspn(newPerson.PhoneNumbers, "\n")] = 0;
                continue;
            case 1:
                printf("Input phonenumber: ");
                //getchar();
                fgets(newPerson.PhoneNumbers[choice], MAX_SYMBOLS, stdin);
                newPerson.PhoneNumbers[choice][strcspn(newPerson.PhoneNumbers, "\n")] = 0;
                //getchar();
                continue;
            case 2:
                printf("Input phonenumber: ");
                //getchar();
                fgets(newPerson.PhoneNumbers[choice], MAX_SYMBOLS, stdin);
                newPerson.PhoneNumbers[choice][strcspn(newPerson.PhoneNumbers, "\n")] = 0;
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
            printf("Choice slot for socials(0-2) or input '3' for exit\n>");
            scanf("%d", &choice);
            switch (choice)
            {
            case 0:
                printf("Input social name: ");
                //getchar();
                fgets(newPerson.socials[choice].Name, MAX_SYMBOLS, stdin);
                newPerson.socials[choice].Name[strcspn(newPerson.socials, "\n")] = 0;
                printf("Input social link: ");
                fgets(newPerson.socials[choice].Link, MAX_SYMBOLS, stdin);
                newPerson.socials[choice].Link[strcspn(newPerson.socials->Link, "\n")] = 0;
                continue;
            case 1:
                printf("Input social name: ");
                //getchar();
                fgets(newPerson.socials[choice].Name, MAX_SYMBOLS, stdin);
                newPerson.socials[choice].Name[strcspn(newPerson.socials, "\n")] = 0;
                printf("Input social link: ");
                fgets(newPerson.socials[choice].Link, MAX_SYMBOLS, stdin);
                newPerson.socials[choice].Link[strcspn(newPerson.socials->Link, "\n")] = 0;
                continue;
            case 2:
                printf("Input social name: ");
                //getchar();
                fgets(newPerson.socials[choice].Name, MAX_SYMBOLS, stdin);
                newPerson.socials[choice].Name[strcspn(newPerson.socials, "\n")] = 0;
                printf("Input social link: ");
                fgets(newPerson.socials[choice].Link, MAX_SYMBOLS, stdin);
                newPerson.socials[choice].Link[strcspn(newPerson.socials->Link, "\n")] = 0;
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
            continue;
        }
    } while(choice != 5);
    person[personCount] = newPerson;
}
void viewList()
{
    for(int id = 0; id < personCount; id++)
        {
            printf("---------------\nPerson ID: %d\nFull name: %s\nJob: %s | Job Title: %s\n", id, person[id].Full_name, person[id].Job, person[id].Job_title);
            for(int jid = 0; jid < MAX_VARIANTS; jid++)
            {
                printf("[%d]Email: %s\n", jid, person[id].Emails[jid]);
            }
            for(int jid = 0; jid < MAX_VARIANTS; jid++)
            {
                printf("[%d]Phone nubmer: %s\n", jid, person[id].PhoneNumbers[jid]);
            }
            for(int jid = 0; jid < MAX_VARIANTS; jid++)
            {
                printf("[%d]Social name: %s | Link: %s\n", jid, person[id].socials[jid].Name, person[id].socials[jid].Link);
            }
        }
}
void deletePerson()
{
    int id;
    printf("Choice ID contact for deleting(0 - %d)\n", personCount);
    scanf("%d", &id);
    if( id < 0 || id >= personCount)
    {
        printf("Invalid ID!\n");
        return;
    }
    for(int i = id; i < personCount; i++)
    {
        person[i] = person[i + 1]; // сдвиг влево
    }
    personCount--;
    printf("Person was deleted\n");
}
void editPerson()
{
    int id;
    printf("Input person ID for edit: ");
    scanf("%d", &id);
    int choice;
    do
    {
        printf("Edit contact menu\n1. Edit Full name\n2. Edit emails\n3. Edit job and job title\n4. Edit Phonenumbers\n5. Edit socials\n6. Exit\n>");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Input new Full name: ");
        getchar();
        fgets(person[id].Full_name, MAX_SYMBOLS, stdin);
        person[id].Full_name[strcspn(person[id].Full_name, "\n")] = 0;
        case 2:
            printf("Choice slot for email(0-2) or input '3' for exit\n>");
            int choice;
            scanf("%d", &choice);
            switch (choice)
            {
            case 0:
                printf("Input email: ");
                getchar();
                fgets(person[id].Emails[choice], MAX_SYMBOLS, stdin);
                person[id].Emails[choice][strcspn(person[id].Emails, "\n")] = 0;
                continue;
            case 1:
                printf("Input email: ");
                getchar();
                fgets(person[id].Emails[choice], MAX_SYMBOLS, stdin);
                person[id].Emails[choice][strcspn(person[id].Emails, "\n")] = 0;
                continue;
            case 2:
                printf("Input email: ");
                getchar();
                fgets(person[id].Emails[choice], MAX_SYMBOLS, stdin);
                person[id].Emails[choice][strcspn(person[id].Emails, "\n")] = 0;
                continue;
            case 3:
                printf("Exit\n");
                break;
            default:
                printf("Invalid input\n");
                continue;
            }
            continue;
        case 3:
            printf("Input your job: ");
            getchar();
            fgets(person[id].Job, MAX_SYMBOLS, stdin);
            person[id].Job[strcspn(person[id].Job, "\n")] = 0;
            printf("Input your job title: ");
            fgets(person[id].Job_title, MAX_SYMBOLS, stdin);
            person[id].Job_title[strcspn(person[id].Job_title, "\n")] = 0;
            continue;
        case 4:
            printf("Choice slot for phonenumber(0-2) or input '3' for exit\n>");
            scanf("%d", &choice);
            switch (choice)
            {
            case 0:
                printf("Input phonenumber: ");
                getchar();
                fgets(person[id].PhoneNumbers[choice], MAX_SYMBOLS, stdin);
                person[id].PhoneNumbers[choice][strcspn(person[id].PhoneNumbers, "\n")] = 0;
                continue;
            case 1:
                printf("Input phonenumber: ");
                getchar();
                fgets(person[id].PhoneNumbers[choice], MAX_SYMBOLS, stdin);
                person[id].PhoneNumbers[choice][strcspn(person[id].PhoneNumbers, "\n")] = 0;
                continue;
            case 2:
                printf("Input phonenumber: ");
                getchar();
                fgets(person[id].PhoneNumbers[choice], MAX_SYMBOLS, stdin);
                person[id].PhoneNumbers[choice][strcspn(person[id].PhoneNumbers, "\n")] = 0;
                continue;
            case 3:
                printf("Exit\n");
                break;
            default:
                printf("Invalid input");
                continue;
            }
            continue;
        case 5: 
            printf("Choice slot for socials(0-2) or input '3' for exit\n>");
            scanf("%d", &choice);
            switch (choice)
            {
            case 0:
                printf("Input social name: ");
                getchar();
                fgets(person[id].socials[choice].Name, MAX_SYMBOLS, stdin);
                person[id].socials[choice].Name[strcspn(person[id].socials, "\n")] = 0;
                printf("Input social link: ");
                fgets(person[id].socials[choice].Link, MAX_SYMBOLS, stdin);
                person[id].socials[choice].Link[strcspn(person[id].socials->Link, "\n")] = 0;
                continue;
            case 1:
                printf("Input social name: ");
                getchar();
                fgets(person[id].socials[choice].Name, MAX_SYMBOLS, stdin);
                person[id].socials[choice].Name[strcspn(person[id].socials, "\n")] = 0;
                printf("Input social link: ");
                fgets(person[id].socials[choice].Link, MAX_SYMBOLS, stdin);
                person[id].socials[choice].Link[strcspn(person[id].socials->Link, "\n")] = 0;
                continue;
            case 2:
                printf("Input social name: ");
                getchar();
                fgets(person[id].socials[choice].Name, MAX_SYMBOLS, stdin);
                person[id].socials[choice].Name[strcspn(person[id].socials, "\n")] = 0;
                printf("Input social link: ");
                fgets(person[id].socials[choice].Link, MAX_SYMBOLS, stdin);
                person[id].socials[choice].Link[strcspn(person[id].socials->Link, "\n")] = 0;
                continue;
            case 3:
                printf("Exit\n");
                break;
            default:
                printf("Invalid input\n");
                continue;
            }
            continue;
        case 6:
            printf("Exit from extra menu\n");
        default:
            printf("Invalid argument\n");
            continue;
        }
    } while(choice != 6);
}
void menu()
{
    int choice;
    do
    {
        printf("Phonebook menu\n1. Check all contact\n2. Add new contact\n3. Delete contact\n4. Edit contact\n5. Exit\n>");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            viewList();
            continue;
        case 2:
            addPerson();
            personCount++;
            continue;
        case 3:
            deletePerson();
            continue;
        case 4:
            editPerson();
            continue;
        case 5:
            printf("Exit\n");
            break;
        default:
            printf("Invalid input\n");
            continue;
        }
    } while(choice != 5);
}
 int main()
 {
    menu(person);
    return 0;
 }