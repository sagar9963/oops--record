#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    float price;

    // Function to input book details
    void getData() {
        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        cout << "Enter Price: ";
        cin >> price;
    }

    // Function to display book details
    void displayData() {
        cout << "\n--- Book Details ---\n";
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book b;

    // To avoid getline skip issue
    cin.ignore();

    b.getData();
    b.displayData();

    return 0;
}
