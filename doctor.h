#ifndef DOCTOR_H
#define DOCTOR_H

// Structure definition for Doctor
struct Doctor {
    int id;
    char name[50];
    char specialization[50];
};

// Function declaration
void displayDoctor(struct Doctor d);

#endif
