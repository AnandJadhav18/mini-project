#include <iostream>
#include <string>
using namespace std;


// ===============================
// CLASS 1 : Book
// ===============================
class Book
{
private:
    int bookId;
    string title;
    string author;
    bool issued;

public:

    // Constructor
    Book()
    {
        bookId = 0;
        title = "Unknown";
        author = "Unknown";
        issued = false;
        cout << "Book Constructor Called\n";
    }

    // Parameterized Constructor
    Book(int id, string t, string a)
    {
        bookId = id;
        title = t;
        author = a;
        issued = false;
        cout << "Book Parameterized Constructor Called\n";
    }

    void displayBook()
    {
        cout << "\nBook ID: " << bookId;
        cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author;

        if (issued)
            cout << "\nStatus: Issued\n";
        else
            cout << "\nStatus: Available\n";
    }

    void issueBook()
    {
        if (!issued)
        {
            issued = true;
            cout << "\nBook issued successfully.\n";
        }
        else
        {
            cout << "\nBook is already issued.\n";
        }
    }

    void returnBook()
    {
        if (issued)
        {
            issued = false;
            cout << "\nBook returned successfully.\n";
        }
        else
        {
            cout << "\nBook was not issued.\n";
        }
    }

    // Destructor
    ~Book()
    {
        cout << "Book Destructor Called\n";
    }
};


// ===============================
// CLASS 2 : Member
// ===============================
class Member
{
private:
    int memberId;
    string name;

public:

    // Constructor
    Member()
    {
        memberId = 0;
        name = "Unknown";
        cout << "Member Constructor Called\n";
    }

    // Parameterized Constructor
    Member(int id, string n)
    {
        memberId = id;
        name = n;
        cout << "Member Parameterized Constructor Called\n";
    }

    void displayMember()
    {
        cout << "\nMember ID: " << memberId;
        cout << "\nMember Name: " << name << endl;
    }

    // Destructor
    ~Member()
    {
        cout << "Member Destructor Called\n";
    }
};


// ===============================
// CLASS 3 : Librarian
// ===============================
class Librarian
{
private:
    int librarianId;
    string name;

public:

    // Constructor
    Librarian(int id, string n)
    {
        librarianId = id;
        name = n;
        cout << "Librarian Constructor Called\n";
    }

    void displayLibrarian()
    {
        cout << "\nLibrarian ID: " << librarianId;
        cout << "\nLibrarian Name: " << name << endl;
    }

    // Destructor
    ~Librarian()
    {
        cout << "Librarian Destructor Called\n";
    }
};


// ===============================
// CLASS 4 : Library
// ===============================
class Library
{
private:
    string libraryName;
    int totalBooks;

public:

    // Constructor
    Library(string name, int books)
    {
        libraryName = name;
        totalBooks = books;
        cout << "Library Constructor Called\n";
    }

    void displayLibrary()
    {
        cout << "\nLibrary Name: " << libraryName;
        cout << "\nTotal Books: " << totalBooks << endl;
    }

    // Destructor
    ~Library()
    {
        cout << "Library Destructor Called\n";
    }
};


// ===============================
// MAIN FUNCTION
// ===============================
int main()
{
    // Creating Library object
    Library lib("DY Patil Central Library", 5000);

    // Creating Librarian object
    Librarian l1(101, "Mr. Patil");

    // Creating Member objects
    Member m1(201, "Anand");
    Member m2(202, "Rahul");

    // Creating Book objects
    Book b1(301, "C++ Programming", "Bjarne Stroustrup");
    Book b2(302, "Data Structures", "Seymour Lipschutz");
    Book b3(303, "Python Programming", "Mark Lutz");

    // Display Library
    cout << "\n===== LIBRARY DETAILS =====";
    lib.displayLibrary();

    // Display Librarian
    cout << "\n===== LIBRARIAN DETAILS =====";
    l1.displayLibrarian();

    // Display Members
    cout << "\n===== MEMBER DETAILS =====";
    m1.displayMember();
    m2.displayMember();

    // Display Books
    cout << "\n===== BOOK DETAILS =====";
    b1.displayBook();
    b2.displayBook();
    b3.displayBook();

    // Issue and return book
    cout << "\n===== BOOK TRANSACTION =====";

    b1.issueBook();
    b1.displayBook();

    b1.returnBook();
    b1.displayBook();

    return 0;
}