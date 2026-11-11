
#include <stdio.h>

struct Patient
{
    int patientID;
    char name[50];
    int age;
    char disease[50];
};

int main()
{
    struct Patient p;

    printf("Enter Patient ID: ");
    scanf("%d", &p.patientID);

    printf("Enter Patient Name: ");
    scanf("%49s", p.name);

    printf("Enter Age: ");
    scanf("%d", &p.age);

    printf("Enter Disease: ");
    scanf("%49s", p.disease);

    printf("\n--- Patient Details ---\n");

    printf("Patient ID: %d\n", p.patientID);
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Disease: %s\n", p.disease);

    return 0;
}

