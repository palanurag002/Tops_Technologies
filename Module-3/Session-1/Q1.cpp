#include <iostream>
#include <string>
using namespace std;

// Global array
string tasks[5];
int taskCount = 0;

int main() {

    // Add tasks
    cout << "Enter up to 5 tasks:\n";

    for (int i = 0; i < 5; i++) {
        cout << "Enter task " << i + 1 << ": ";
        getline(cin, tasks[i]);
        taskCount++;
    }

    // Print all tasks
    cout << "\nYour Tasks:\n";

    for (int i = 0; i < taskCount; i++) {
        cout << i + 1 << ". " << tasks[i] << endl;
    }

    return 0;
}
