#include <iostream>
#include <vector>
#include "Task.h"
using namespace std;

int main() {
    vector<Task> tasks;
    int choice;

    do {
        cout << "\n=== TO-DO LIST MENU ===\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Delete Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                displayTasks(tasks);
                break;
            case 3:
                completeTask(tasks);
                break;
            case 4:
                deleteTask(tasks);
                break;
            case 5:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}
