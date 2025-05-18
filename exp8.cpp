#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string *author;
    string *title;
    float price;
    string *publisher;
    int stock;

public:
    Book(const string &auth, const string &tit, float pr, const string &pub, int st)
    {
        author = new string(auth);
        title = new string(tit);
        price = pr;
        publisher = new string(pub);
        stock = st;
    }

    ~Book()
    {
        delete author;
        delete title;
        delete publisher;
    }

    void displayDetails() const
    {
        cout << "Title: " << *title << endl;
        cout << "Author: " << *author << endl;
        cout << "Publisher: " << *publisher << endl;
        cout << "Price: " << price << endl;
        cout << "Stock: " << stock << " copies available" << endl;
    }

    bool isAvailable(int requestedCopies) const
    {
        return stock >= requestedCopies;
    }

    void sellCopies(int requestedCopies)
    {
        stock -= requestedCopies;
    }

    string getTitle() const { return *title; }
    string getAuthor() const { return *author; }
    float getPrice() const { return price; }
};

class BookShop
{
private:
    Book **inventory;
    int bookCount;

public:
    BookShop(int count)
    {
        bookCount = count;
        inventory = new Book *[bookCount];
    }

    ~BookShop()
    {
        for (int i = 0; i < bookCount; ++i)
        {
            delete inventory[i];
        }
        delete[] inventory;
    }

    void addBook(int index, const string &author, const string &title, float price, const string &publisher, int stock)
    {
        inventory[index] = new Book(author, title, price, publisher, stock);
    }

    void searchBook(const string &title, const string &author)
    {
        for (int i = 0; i < bookCount; ++i)
        {
            if (inventory[i]->getTitle() == title && inventory[i]->getAuthor() == author)
            {
                inventory[i]->displayDetails();
                int requestedCopies;
                cout << "Enter the number of copies required: ";
                cin >> requestedCopies;

                if (inventory[i]->isAvailable(requestedCopies))
                {
                    float totalCost = requestedCopies * inventory[i]->getPrice();
                    cout << "Total cost for " << requestedCopies << " copies: " << totalCost << endl;
                    inventory[i]->sellCopies(requestedCopies);
                }
                else
                {
                    cout << "Required copies not in stock." << endl;
                }
                return;
            }
        }
        cout << "Book not available." << endl;
    }
};

int main()
{
    int numberOfBooks;
    cout << "Enter the number of books in the inventory: ";
    cin >> numberOfBooks;

    BookShop shop(numberOfBooks);

    for (int i = 0; i < numberOfBooks; ++i)
    {
        string author, title, publisher;
        float price;
        int stock;

        cout << "Enter details for book " << (i + 1) << ":"<<endl;
        cout << "Author: ";
        cin.ignore();
        getline(cin, author);
        cout << "Title: ";
        getline(cin, title);
        cout << "Price: ";
        cin >> price;
        cout << "Publisher: ";
        cin.ignore();
        getline(cin, publisher);
        cout << "Stock: ";
        cin >> stock;

        shop.addBook(i, author, title, price, publisher, stock);
    }

    string searchTitle, searchAuthor;
    cout << "Enter the title of the book to search: ";
    cin.ignore();
    getline(cin, searchTitle);
    cout << "Enter the author of the book to search: ";
    getline(cin, searchAuthor);

    shop.searchBook(searchTitle, searchAuthor);

    return 0;
}