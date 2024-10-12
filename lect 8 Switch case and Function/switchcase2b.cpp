#include <iostream>

using namespace std;

int main() {
    int choice;

    while (true) { // Infinite loop
        cout << "Enter your choice:" << endl;
        cout << "1. Option 1" << endl;
        cout << "2. Option 2" << endl;
        cout << "3. Option 3" << endl;
        cout << "4. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Option 1 selected" << endl;
                break;
            case 2:
                cout << "Option 2 selected" << endl;
                break;
            case 3:
                cout << "Option 3 selected" << endl;
                break;
            case 4:
                cout << "Exiting..." << endl;
                return 0; // Terminate the program
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}