#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
private:
    string name;
    int age;
    string* subjects;  // Dynamic array for subject names
    float* marks;      // Dynamic array for marks
    int numSubjects;   // Number of subjects

public:
    // Constructor to initialize the student with name, age, and subjects
    Student(string studentName, int studentAge, int numSubjects) {
        name = studentName;
        age = studentAge;
        this->numSubjects = numSubjects;
        
        // Allocate memory for subjects and marks
        subjects = new string[numSubjects];
        marks = new float[numSubjects];

        cout << "Enter names of subjects and marks (out of 100) for " << name << ":\n";
        for (int i = 0; i < numSubjects; ++i) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> subjects[i];
            cout << "Marks for " << subjects[i] << ": ";
            cin >> marks[i];
        }
    }

    // Destructor to free dynamically allocated memory
    ~Student() {
        delete[] subjects;
        delete[] marks;
        cout << "Student record for " << name << " deleted.\n";
    }

    // Method to calculate total score
    float totalScore() const {
        float total = 0;
        for (int i = 0; i < numSubjects; ++i) {
            total += marks[i];
        }
        return total;
    }

    // Method to display student details
    void displayDetails() const {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Subjects and Marks:\n";
        for (int i = 0; i < numSubjects; ++i) {
            cout << subjects[i] << ": " << marks[i] << "/100\n";
        }
        cout << "Total Score: " << totalScore() << "/" << numSubjects * 100 << "\n"; // Display total score
    }
};

// Global vector to store student records
vector<Student*> students;

// Function to add a new student
void addStudent() {
    string name;
    int age, numSubjects;

    cout << "Enter student's name: ";
    cin >> name;
    cout << "Enter student's age: ";
    cin >> age;
    cout << "Enter number of subjects: ";
    cin >> numSubjects;

    // Create a new Student object dynamically and add to the list
    Student* newStudent = new Student(name, age, numSubjects);
    students.push_back(newStudent);
}

// Function to display all student records
void displayStudents() {
    if (students.empty()) {
        cout << "No student records available.\n";
        return;
    }

    cout << "Student Records:\n";
    for (size_t i = 0; i < students.size(); ++i) {
        cout << "\nRecord " << i + 1 << ":\n";
        students[i]->displayDetails();
    }
}

// Function to delete a student record by index
void deleteStudent() {
    if (students.empty()) {
        cout << "No student records to delete.\n";
        return;
    }

    int index;
    cout << "Enter the record number to delete: ";
    cin >> index;

    if (index < 1 || index > students.size()) {
        cout << "Invalid record number.\n";
        return;
    }

    // Delete the student object and remove from the list
    delete students[index - 1];
    students.erase(students.begin() + (index - 1));

    cout << "Student record deleted successfully.\n";
}

// Main function to handle the menu-driven interface
int main() {
    int choice;

    do {
        cout << "\nStudent Record System Menu:\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Delete Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                deleteStudent();
                break;
            case 4:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    // Clean up any remaining student records before exiting
    for (Student* student : students) {
        delete student;
    }

    return 0;
}
