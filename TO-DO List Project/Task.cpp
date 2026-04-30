#include <iostream>
#include "Task.h"
using namespace std;

// Display tasks
void displayTasks(const vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }

    cout << "\n--- Task List ---\n";
    for (int i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << tasks[i].name;
        if (tasks[i].completed)
            cout << " [Completed]";
        cout << endl;
    }
}

// Add task
void addTask(vector<Task>& tasks) {
    Task newTask;
    cout << "Enter task name: ";
    cin.ignore();
    getline(cin, newTask.name);
    newTask.completed = false;

    tasks.push_back(newTask);
    cout << "Task added!\n";
}

// Mark as completed
void completeTask(vector<Task>& tasks) {
    int index;
    displayTasks(tasks);

    cout << "Enter task number to mark as completed: ";
    cin >> index;

    if (index > 0 && index <= tasks.size()) {
        tasks[index - 1].completed = true;
        cout << "Task marked as completed!\n";
    } else {
        cout << "Invalid task number.\n";
    }
}

// Delete task
void deleteTask(vector<Task>& tasks) {
    int index;
    displayTasks(tasks);

    cout << "Enter task number to delete: ";
    cin >> index;

    if (index > 0 && index <= tasks.size()) {
        tasks.erase(tasks.begin() + index - 1);
        cout << "Task deleted!\n";
    } else {
        cout << "Invalid task number.\n";
    }
}
