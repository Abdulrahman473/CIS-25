#ifndef TASK_H
#define TASK_H

#include <string>
#include <vector>
using namespace std;

// Task structure
struct Task {
    string name;
    bool completed;
};

// Function declarations
void displayTasks(const vector<Task>& tasks);
void addTask(vector<Task>& tasks);
void completeTask(vector<Task>& tasks);
void deleteTask(vector<Task>& tasks);
