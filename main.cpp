#include <iostream>
#include <string>

using namespace std;

struct Book {
    private: 
        int bookId;
        string bookName;
        string bookAuthor;
        bool borrowStatus;

    public: 
        Book() {
            // default
        }

        Book(int id, string n, string a, bool b) {
            bookId = id;
            bookName = n;
            bookAuthor = a;
            borrowStatus = b;
        }

        string getBookName() {
            return bookName;
        }

        string getAuthorName() {
            return bookAuthor;
        }

        bool getBorrowStatus() {
            return borrowStatus;
        }
};

Book b1 = {1, "First Book", "Author 1", false};
Book b2 = {2, "Second Book", "Author 2", true};
Book b3 = {3, "Third Book", "Author 3", false};

Book booklist[] = {b1, b2, b3};

void printAllAvailableBooks() {
    for(Book b : booklist) {
        if(!b.getBorrowStatus()) {
            cout << b.getBookName() << endl;
        }
    }
}

Book searchBook(string query) {
    Book b;

    for(Book c : booklist) {
        // cout << c.getBookName().find(query) << endl;
        if(c.getBookName() == query) {
            b = c;
            cout << "Found: " << c.getBookName() << endl;
        }
    }

    return b;
}

int main() {

    printAllAvailableBooks();
    searchBook("First Book");

    return 0;
}