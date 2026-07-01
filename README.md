# Hospital Management System in C

A structured and efficient Hospital Management System built using the C programming language. This project demonstrates core programming concepts like Structures, Functions, and File Handling to manage patient records securely.

## 🚀 Features
* **Patient Management:** Easily input and view patient details (ID, Name, Age, Disease).
* **File Handling (Database):** All entered records are automatically saved to a `hospital_records.txt` file, ensuring data is not lost when the program closes.
* **Modular Code:** Separated into `main.c`, `patient.c`, and `database.c` for clean and readable code structure.

## 🛠️ Concepts Used
* **Structures (`struct`):** To define and group patient attributes.
* **File I/O (`fopen`, `fprintf`, `fclose`):** To create a local text-based database.
* **Functions:** For modularity and reusability of code.

## 📂 Project Structure
* `main.c` - Contains the main menu and user interaction logic.
* `patient.c` - Handles patient profile layout and display functions.
* `database.c` - Manages reading from and writing data to the text file.

## 💻 How to Run (Locally)
1. Clone this repository or download the files.
2. Compile all the files together using a C compiler (e.g., GCC):
   ```bash
   gcc main.c patient.c database.c -o hospital_system
