#ifndef PATIENT_H
#define PATIENT_H

// Structure definition for Patient
struct Patient {
    int id;
    char name[50];
    int age;
    char disease[50];
};

// Function declaration
void displayPatient(struct Patient p);

#endif
