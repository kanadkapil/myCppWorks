#include <bits/stdc++.h>
using namespace std;

class Book {
public:
    int id;
    string title, author;
    bool isIssued;

    Book(int id, string title, string author) {
        this->id = id;
        this->title = title;
        this->author = author;
        this->isIssued = false;
    }
};

class Library {
private:
    vector<Book> books;
public:
    void addBook(int id, string title, string author) {
        for (auto &book : books) {
            if (book.id == id) {
                cout << "Invalid book ID, previously registered.\n";
                return;
            }
        }
        books.push_back(Book(id, title, author));
        cout << "Book added successfully!\n";
    }

    void displayBooks() {
        if (books.empty()) {
            cout << "No books available.\n";
            return;
        }
        for (auto &book : books) {
            cout << "ID: " << book.id << ", Title: " << book.title 
                 << ", Author: " << book.author << ", Issued: " 
                 << (book.isIssued ? "Yes" : "No") << "\n";
        }
    }

    void issueBook(int id) {
        for (auto &book : books) {
            if (book.id == id) {
                if (!book.isIssued) {
                    book.isIssued = true;
                    cout << "Book issued successfully!\n";
                } else {
                    cout << "Book is already issued.\n";
                }
                return;
            }
        }
        cout << "Book not found!\n";
    }

    void returnBook(int id) {
        for (auto &book : books) {
            if (book.id == id) {
                if (book.isIssued) {
                    book.isIssued = false;
                    cout << "Book returned successfully!\n";
                } else {
                    cout << "Book was not issued.\n";
                }
                return;
            }
        }
        cout << "Book not found!\n";
    }
};

int main() {
    Library lib;
    int choice, id;
    string title, author;

    while (true) {
        cout << "\nLibrary Management System\n";
        cout << "1. Add Book\n2. Display Books\n3. Issue Book\n4. Return Book\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                while (true) {
                    cout << "Enter Book ID, Title, and Author: ";
                    cin >> id;
                    cin.ignore();
                    getline(cin, title);
                    getline(cin, author);
                    bool exists = false;
                    for (auto &book : lib.books) {
                        if (book.id == id) {
                            cout << "Invalid book ID, previously registered. Please enter a new book ID.\n";
                            exists = true;
                            break;
                        }
                    }
                    if (!exists) {
                        lib.addBook(id, title, author);
                        break;
                    }
                }
                break;
            case 2:
                lib.displayBooks();
                break;
            case 3:
                cout << "Enter Book ID to issue: ";
                cin >> id;
                lib.issueBook(id);
                break;
            case 4:
                cout << "Enter Book ID to return: ";
                cin >> id;
                lib.returnBook(id);
                break;
            case 5:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice!\n";
        }
    }
}
