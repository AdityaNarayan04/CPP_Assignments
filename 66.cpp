#include <iostream>
#include <string>
using namespace std;

class Media {
public:
    virtual void displayInfo() const {
        cout << "This is a media item." << endl;
    }

    virtual ~Media() {}
};

class Book : public Media {
private:
    string title;
    string author;

public:
    Book(const string& t, const string& a) : title(t), author(a) {}

    void displayInfo() const override {
        cout << "Book Title: " << title << ", Author: " << author << endl;
    }
};

class DVD : public Media {
private:
    string title;
    int duration; // in minutes

public:
    DVD(const string& t, int d) : title(t), duration(d) {}

    void displayInfo() const override {
        cout << "DVD Title: " << title << ", Duration: " << duration << " minutes" << endl;
    }
};

int main() {
    Media* items[2];
    items[0] = new Book("The Great Gatsby", "F. Scott Fitzgerald");
    items[1] = new DVD("Inception", 148);

    for (int i = 0; i < 2; ++i) {
        items[i]->displayInfo();
    }

    for (int i = 0; i < 2; ++i) {
        delete items[i];
    }

    return 0;
}
