#include <iostream>
#include <fstream>
#include <exception>
using namespace std;

int main() {
    string filename;
    cout << "Enter filename to open: ";
    cin >> filename;

    try {
        ifstream file(filename);
        if (!file.is_open()) {
            throw runtime_error("Failed to open file: " + filename);
        }

        cout << "File opened successfully. Contents:\n";
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } catch (const runtime_error& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
