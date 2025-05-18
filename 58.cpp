#include <iostream>
#include <string>

using namespace std;

class Book {
public:
    string title;
    string author;
    int year;

    void display() {
        cout << "Title: " << title 
             << ", Author: " << author 
             << ", Year: " << year << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of books: ";
    cin >> n;

    // Dynamically allocate array of Book objects
    Book* books = new Book[n];

    // Input book details
    for (int i = 0; i < n; ++i) {
        cout << "Enter details for book " << i + 1 << ":\n";
        cin.ignore(); // to clear newline from previous input
        cout << "Title: ";
        getline(cin, books[i].title);
        cout << "Author: ";
        getline(cin, books[i].author);
        cout << "Year: ";
        cin >> books[i].year;
    }

    // Display book details
    cout << "\nBook details:\n";
    for (int i = 0; i < n; ++i) {
        books[i].display();
    }

    // Free dynamically allocated memory
    delete[] books;

    return 0;
}
