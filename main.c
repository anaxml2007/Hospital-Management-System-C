#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structures for Patient and Doctor
struct Patient {
    int id;
    char name[50];
    int age;
    char disease[50];
};

struct Doctor {
    int id;
    char name[50];
    char specialization[50];
};

int main() {
    struct Patient p1;
    struct Doctor d1;
    int choice;

    printf("=========================================\n");
    printf("   HOSPITAL MANAGEMENT SYSTEM IN C       \n");
    printf("=========================================\n");
    
    printf("\n1. Add Patient Details\n");
    printf("2. Add Doctor Details\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Patient Entry Logic
        printf("\nEnter Patient ID: ");
        scanf("%d", &p1.id);
        getchar(); 
        
        printf("Enter Patient Name: ");
        fgets(p1.name, sizeof(p1.name), stdin);
        p1.name[strcspn(p1.name, "\n")] = 0; 
        
        printf("Enter Patient Age: ");
        scanf("%d", &p1.age);
        getchar();
        
        printf("Enter Disease/Illness: ");
        fgets(p1.disease, sizeof(p1.disease), stdin);
        p1.disease[strcspn(p1.disease, "\n")] = 0;

        printf("\n--- Patient Added Successfully! ---\n");
        printf("ID: %d | Name: %s | Age: %d | Disease: %s\n", p1.id, p1.name, p1.age, p1.disease);
        
    } else if (choice == 2) {
        // Doctor Entry Logic
        printf("\nEnter Doctor ID: ");
        scanf("%d", &d1.id);
        getchar(); 
        
        printf("Enter Doctor Name: ");
        fgets(d1.name, sizeof(d1.name), stdin);
        d1.name[strcspn(d1.name, "\n")] = 0; 
        
        printf("Enter Specialization (e.g. Cardiology): ");
        fgets(d1.specialization, sizeof(d1.specialization), stdin);
        d1.specialization[strcspn(d1.specialization, "\n")] = 0;

        printf("\n--- Doctor Profile Created! ---\n");
        printf("ID: %d | Doctor: %s | Specialization: %s\n", d1.id, d1.name, d1.specialization);

    } else {
        printf("\nExiting Program. Thank you!\n");
    }

    return 0;
}
