#include <iostream>
#include <string>
using namespace std;

// Global arrays
string tasks[5];
bool taskDone[5] = {false, false, false, false, false};

int taskCount = 0;

// Function to mark a task as DONE
void markTaskDone(int index) {
    taskDone[index] = true;
}

int main() {

    // Add tasks
    cout << "Enter 5 tasks:\n";

    for (int i = 0; i < 5; i++) {
        cout << "Enter task " << i + 1 << ": ";
        getline(cin, tasks[i]);
        taskCount++;
    }

    // Mark task 2 as DONE
    markTaskDone(1);

    // Print updated task list
    cout << "\nUpdated Task List:\n";

    for (int i = 0; i < taskCount; i++) {
        cout << i + 1 << ". " << tasks[i];

        if (taskDone[i]) {
            cout << " - DONE";
        }

        cout << endl;
    }

    return 0;
}
