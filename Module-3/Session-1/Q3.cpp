#include <iostream>
#include <string>
using namespace std;

class Task {
public:
    // Properties
    string title;
    bool isDone;

    // Constructor
    Task(string taskTitle) {
        title = taskTitle;
        isDone = false;
    }

    // Method to mark task as done
    void markDone() {
        isDone = true;
    }

    // Method to display task
    void display() {
        cout << title;

        if (isDone) {
            cout << " - DONE";
        } else {
            cout << " - NOT DONE";
        }

        cout << endl;
    }
};

int main() {

    // Create a Task object
    Task task1("Complete C++ Assignment");

    // Display task
    cout << "Before marking done:" << endl;
    task1.display();

    // Mark task as done
    task1.markDone();

    // Display updated task
    cout << "\nAfter marking done:" << endl;
    task1.display();

    return 0;
}
