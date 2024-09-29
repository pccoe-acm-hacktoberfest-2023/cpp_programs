#include <iostream>
#include <cstring> // For string handling
using namespace std;

// Maximum number of books the library can hold
const int MAX_BOOKS = 100;

// Book class definition
class Book {
private:
    char title[100];
    char author[100];
    char ISBN[20];
    bool availability;

public:
    // Constructor to initialize the book
    Book() {
        availability = true; // By default, the book is available
    }

    // Function to add a new book
    void addBook(const char* t, const char* a, const char* i) {
        strcpy(title, t);
        strcpy(author, a);
        strcpy(ISBN, i);
        availability = true; // When added, the book is available
    }

    // Function to display book details
    void displayBook() {
        cout << "Title: " << title << "\nAuthor: " << author 
             << "\nISBN: " << ISBN << "\nAvailable: " 
             << (availability ? "Yes" : "No") << endl;
    }

    // Function to borrow a book
    void borrowBook() {
        if (availability) {
            availability = false;
            cout << "You have successfully borrowed the book: " << title << endl;
        } else {
            cout << "Sorry, the book is already borrowed.\n";
        }
    }

    // Function to return a book
    void returnBook() {
        if (!availability) {
            availability = true;
            cout << "You have successfully returned the book: " << title << endl;
        } else {
            cout << "The book was not borrowed.\n";
        }
    }

    // Function to check if a book's title matches the search
    bool isTitle(const char* t) {
        return strcmp(title, t) == 0;
    }

    // Function to check if a book is available
    bool isAvailable() {
        return availability;
    }
};

// Function to display the menu
void displayMenu() {
    cout << "\n--- Library Management Menu ---\n";
    cout << "1. Add Book\n";
    cout << "2. Borrow Book\n";
    cout << "3. Return Book\n";
    cout << "4. Display All Books\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    Book library[MAX_BOOKS]; // Array to hold up to 100 books
    int bookCount = 0; // Number of books in the library
    int choice;
    char title[100], author[100], ISBN[20];

    do {
        displayMenu();
        cin >> choice;
        cin.ignore(); // Clear newline from input buffer

        switch (choice) {
            case 1: // Add Book
                if (bookCount < MAX_BOOKS) {
                    cout << "Enter book title: ";
                    cin.getline(title, 100);
                    cout << "Enter book author: ";
                    cin.getline(author, 100);
                    cout << "Enter book ISBN: ";
                    cin.getline(ISBN, 20);

                    library[bookCount].addBook(title, author, ISBN);
                    bookCount++;
                    cout << "Book added successfully!\n";
                } else {
                    cout << "Library is full, cannot add more books.\n";
                }
                break;

            case 2: // Borrow Book
                cout << "Enter the title of the book you want to borrow: ";
                cin.getline(title, 100);
                for (int i = 0; i < bookCount; i++) {
                    if (library[i].isTitle(title)) {
                        library[i].borrowBook();
                        break;
                    }
                }
                break;

            case 3: // Return Book
                cout << "Enter the title of the book you want to return: ";
                cin.getline(title, 100);
                for (int i = 0; i < bookCount; i++) {
                    if (library[i].isTitle(title)) {
                        library[i].returnBook();
                        break;
                    }
                }
                break;

            case 4: // Display All Books
                for (int i = 0; i < bookCount; i++) {
                    cout << "\nBook " << (i + 1) << " details:\n";
                    library[i].displayBook();
                }
                break;

            case 5: // Exit
                cout << "Exiting the system.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}
