#include <iostream>
#include <exception>
using namespace std;

class Resource {
public:
    Resource() {
        cout << "Resource acquired." << endl;
    }

    ~Resource() {
        cout << "Resource released." << endl;
    }

    void use() {
        cout << "Using resource." << endl;
    }
};

int main() {
    try {
        Resource res;
        res.use();

        // Simulate an exception
        throw runtime_error("An error occurred during processing.");

        // This line won't be executed
        cout << "Processing completed successfully." << endl;
    } catch (const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    // Resource destructor is called here, simulating finally block behavior
    cout << "Program continues after exception handling." << endl;

    return 0;
}