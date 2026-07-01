#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure declaration (Same as in patient.c)
struct Patient {
    int id;
    char name[50];
    int age;
    char disease[50];
};

int main() {
    struct Patient p1;
    int choice;

    printf("=========================================\n");
    printf("   HOSPITAL MANAGEMENT SYSTEM IN C       \n");
    printf("=========================================\n");
    
    printf("\n1. Add Patient Details\n");
    printf("2. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Taking patient details from user
        printf("\nEnter Patient ID: ");
        scanf("%d", &p1.id);
        getchar(); // To clear the buffer
        
        printf("Enter Patient Name: ");
        fgets(p1.name, sizeof(p1.name), stdin);
        p1.name[strcspn(p1.name, "\n")] = 0; // Remove newline character
        
        printf("Enter Patient Age: ");
        scanf("%d", &p1.age);
        getchar();
        
        printf("Enter Disease/Illness: ");
        fgets(p1.disease, sizeof(p1.disease), stdin);
        p1.disease[strcspn(p1.disease, "\n")] = 0;

        // Displaying the entered information
        printf("\n--- Patient Added Successfully! ---");
        printf("\nID: %d", p1.id);
        printf("\nName: %s", p1.name);
        printf("\nAge: %d", p1.age);
        printf("\nDisease: %s\n", p1.disease);
        
    } else {
        printf("\nExiting Program. Thank you!\n");
    }

    return 0;
}
