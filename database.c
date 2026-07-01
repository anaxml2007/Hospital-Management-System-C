#include <stdio.h>
#include <stdlib.h>

// Structure representation
struct Patient {
    int id;
    char name[50];
    int age;
    char disease[50];
};

// Function to save a patient record directly into a text file
void savePatientToFile(struct Patient p) {
    FILE *file;
    
    // Opening file in append mode ("a") so new data adds to the end
    file = fopen("hospital_records.txt", "a");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    // Writing structured data into the file
    fprintf(file, "%d, %s, %d, %s\n", p.id, p.name, p.age, p.disease);
    
    // Closing the file to save changes safely
    fclose(file);
    printf("\nRecord safely written to hospital_records.txt\n");
}

// Function to read and display all records from the file
void readPatientsFromFile() {
    FILE *file;
    char ch;
    
    // Opening file in read mode ("r")
    file = fopen("hospital_records.txt", "r");
    
    if (file == NULL) {
        printf("No records found or file does not exist yet!\n");
        return;
    }
    
    printf("\n===== All Patient Records =====\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    printf("===============================\n");
    
    fclose(file);
}
