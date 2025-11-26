#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    float price;

    // Function to input book details
    void getData() {
        cin.ignore();
        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        cout << "Enter Book Price: ";
        cin >> price;
    }

    // Function to display book details
    void displayData() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
        cout << "-----------------------\n";
    }
};

int main() {
    int n;
    cout << "Enter number of books: ";
    cin >> n;

    Book b[n];   // Array of objects

    // Input
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Book " << i + 1 << ":\n";
        b[i].getData();
    }

    // Output
    cout << "\n========= Library Books =========\n";
    for (int i = 0; i < n; i++) {
        cout << "\nBook " << (i + 1) << " Details:\n";
        b[i].displayData();
    }

    return 0;
}
