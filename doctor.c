#include <stdio.h>

// Structure for Doctor Details
struct Doctor {
    int id;
    char name[50];
    char specialization[50]; // e.g., Cardiology, Pediatrics
};

// Function to display doctor details
void displayDoctor(struct Doctor d) {
    printf("\n--- Doctor Profile ---\n");
    printf("Doctor ID     : %d\n", d.id);
    printf("Doctor Name   : %s\n", d.name);
    printf("Specialization: %s\n", d.specialization);
    printf("---------------------\n");
}
