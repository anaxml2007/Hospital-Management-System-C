#include <stdio.h>
#include <string.h>

// Structure to hold patient records
struct Patient {
    int id;
    char name[50];
    int age;
    char disease[50];
};

// Function to print patient details
void displayPatient(struct Patient p) {
    printf("\n--- Patient Record ---\n");
    printf("Patient ID: %d\n", p.id);
    printf("Name      : %s\n", p.name);
    printf("Age       : %d\n", p.age);
    printf("Disease   : %s\n", p.disease);
    printf("---------------------\n");
}
