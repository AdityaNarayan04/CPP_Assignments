#include <iostream>
#include <string>
using namespace std;
class Book {
private:
     string* author;
     string* title;
    float price;
     string* publisher;
    int stock;
    static int successfulTransactions;

    void updatePrice(float newPrice) {
        price = newPrice;
    }

public:
    Book(const  string& auth, const  string& tit, float pr, const  string& pub, int st) {
        author = new  string(auth);
        title = new  string(tit);
        price = pr;
        publisher = new  string(pub);
        stock = st;
    }

    ~Book() {
        delete author;
        delete title;
        delete publisher;
    }

    void displayDetails() const {
         cout << "Title: " << *title <<  endl;
         cout << "Author: " << *author <<  endl;
         cout << "Publisher: " << *publisher <<  endl;
         cout << "Price: $" << price <<  endl;
         cout << "Stock: " << stock << " copies available" <<  endl;
    }

    bool isAvailable(int requestedCopies) const {
        return stock >= requestedCopies;
    }

    void sellCopies(int requestedCopies) {
        if (requestedCopies <= stock) {
            stock -= requestedCopies;
            successfulTransactions++;
        }
    }

    void setPrice(float newPrice) {
        updatePrice(newPrice);
    }

     string getTitle() const { return *title; }
     string getAuthor() const { return *author; }
    float getPrice() const { return price; }

    static int getTransactionCount() {
        return successfulTransactions;
    }
};

int Book::successfulTransactions = 0;

class BookShop {
private:
    Book** inventory;
    int bookCount;

public:
    BookShop(int count) {
        bookCount = count;
        inventory = new Book*[bookCount];
    }

    ~BookShop() {
        for (int i = 0; i < bookCount; ++i) {
            delete inventory[i];
        }
        delete[] inventory;
    }

    void addBook(int index, const  string& author, const  string& title, float price, const  string& publisher, int stock) {
        inventory[index] = new Book(author, title, price, publisher, stock);
    }

    void updateBookPrice(const  string& title, const  string& author, float newPrice) {
        for (int i = 0; i < bookCount; ++i) {
            if (inventory[i]->getTitle() == title && inventory[i]->getAuthor() == author) {
                inventory[i]->setPrice(newPrice);
                 cout << "Price updated for \"" << title << "\" by " << author << " to $" << newPrice <<  endl;
                return;
            }
        }
         cout << "Book not found to update price." <<  endl;
    }

    void searchBook(const  string& title, const  string& author) {
        for (int i = 0; i < bookCount; ++i) {
            if (inventory[i]->getTitle() == title && inventory[i]->getAuthor() == author) {
                inventory[i]->displayDetails();
                int requestedCopies;
                 cout << "Enter the number of copies required: ";
                 cin >> requestedCopies;

                if (inventory[i]->isAvailable(requestedCopies)) {
                    float totalCost = requestedCopies * inventory[i]->getPrice();
                     cout << "Total cost for " << requestedCopies << " copies: $" << totalCost <<  endl;
                    inventory[i]->sellCopies(requestedCopies);
                } else {
                     cout << "Required copies not in stock." <<  endl;
                }
                return;
            }
        }
         cout << "Book not available." <<  endl;
    }

    void displayTransactionCount() const {
         cout << "Total successful transactions: " << Book::getTransactionCount() <<  endl;
    }
};

int main() {
    int numberOfBooks;
     cout << "Enter the number of books in the inventory: ";
     cin >> numberOfBooks;

    BookShop shop(numberOfBooks);

    for (int i = 0; i < numberOfBooks; ++i) {
         string author, title, publisher;
        float price;
        int stock;

         cout << "Enter details for book " << (i + 1) << ":\n";
         cout << "Author: ";
         cin.ignore();
         getline( cin, author);
         cout << "Title: ";
         getline( cin, title);
         cout << "Price: ";
         cin >> price;
         cout << "Publisher: ";
         cin.ignore();
         getline( cin, publisher);
         cout << "Stock: ";
         cin >> stock;

        shop.addBook(i, author, title, price, publisher, stock);
    }

    while (true) {
         cout << "\nMenu:\n1. Search Book\n2. Update Book Price\n3. Show Transaction Count\n4. Exit\nEnter choice: ";
        int choice;
         cin >> choice;

        if (choice == 1) {
             string searchTitle, searchAuthor;
             cout << "Enter the title of the book to search: ";
             cin.ignore();
             getline( cin, searchTitle);
             cout << "Enter the author of the book to search: ";
             getline( cin, searchAuthor);
            shop.searchBook(searchTitle, searchAuthor);
        } else if (choice == 2) {
             string title, author;
            float newPrice;
             cout << "Enter the title of the book to update price: ";
             cin.ignore();
             getline( cin, title);
             cout << "Enter the author of the book to update price: ";
             getline( cin, author);
             cout << "Enter the new price: ";
             cin >> newPrice;
            shop.updateBookPrice(title, author, newPrice);
        } else if (choice == 3) {
            shop.displayTransactionCount();
        } else if (choice == 4) {
            break;
        } else {
             cout << "Invalid choice. Try again." <<  endl;
        }
    }

    return 0;
}
