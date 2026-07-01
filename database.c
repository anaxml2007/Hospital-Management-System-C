#include <stdio.h>
#include <stdlib.h>

// Structures
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

// Function to save a patient record
void savePatientToFile(struct Patient p) {
    FILE *file = fopen("hospital_records.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    fprintf(file, "%d, %s, %d, %s\n", p.id, p.name, p.age, p.disease);
    fclose(file);
    printf("\nPatient record safely written to hospital_records.txt\n");
}

// Function to save a doctor record
void saveDoctorToFile(struct Doctor d) {
    FILE *file = fopen("doctor_records.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    fprintf(file, "%d, %s, %s\n", d.id, d.name, d.specialization);
    fclose(file);
    printf("\nDoctor profile safely written to doctor_records.txt\n");
}
