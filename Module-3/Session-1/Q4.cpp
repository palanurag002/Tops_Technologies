#include <iostream>
#include <string>
using namespace std;

// Task class
class Task {
public:
    string title;
    bool isDone;

    // Constructor
    Task(string taskTitle) {
        title = taskTitle;
        isDone = false;
    }
};

// TaskList class
class TaskList {
public:
    Task tasks[10];
    int taskCount;

    // Constructor
    TaskList() : taskCount(0), tasks{
        Task(""),
        Task(""),
        Task(""),
        Task(""),
        Task(""),
        Task(""),
        Task(""),
        Task(""),
        Task(""),
        Task("")
    } {}

    // Add a new task
    void addTask(string title) {
        tasks[taskCount] = Task(title);
        taskCount++;
    }

    // Mark task as DONE
    void markTaskDone(int index) {
        tasks[index].isDone = true;
    }

    // Display all tasks
    void showTasks() {
        cout << "\nTask List:\n";

        for (int i = 0; i < taskCount; i++) {
            cout << i + 1 << ". " << tasks[i].title;

            if (tasks[i].isDone) {
                cout << " - DONE";
            } else {
                cout << " - NOT DONE";
            }

            cout << endl;
        }
    }
};

int main() {

    // Create TaskList object
    TaskList myTasks;

    // Add 3 tasks
    myTasks.addTask("Complete C++ assignment");
    myTasks.addTask("Study OOP");
    myTasks.addTask("Go to gym");

    // Mark second task as DONE
    myTasks.markTaskDone(1);

    // Display all tasks
    myTasks.showTasks();

    return 0;
}

