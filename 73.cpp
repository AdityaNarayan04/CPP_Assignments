#include <iostream>
#include <stdexcept>
using namespace std;

void testExceptions(int choice) {
    if (choice == 1) {
        throw runtime_error("Runtime error occurred");
    } else if (choice == 2) {
        throw invalid_argument("Invalid argument error");
    } else if (choice == 3) {
        throw out_of_range("Out of range error");
    } else {
        cout << "No exception thrown" << endl;
    }
}

int main() {
    for (int i = 1; i <= 4; ++i) {
        try {
            cout << "Test case " << i << ": ";
            testExceptions(i);
        } catch (const invalid_argument& e) {
            cout << "Caught invalid_argument: " << e.what() << endl;
        } catch (const out_of_range& e) {
            cout << "Caught out_of_range: " << e.what() << endl;
        } catch (const runtime_error& e) {
            cout << "Caught runtime_error: " << e.what() << endl;
        } catch (...) {
            cout << "Caught unknown exception" << endl;
        }
    }

    return 0;
}
