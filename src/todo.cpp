// src/todo.cpp
#include "todo.h"
#include <iostream>

void ToDoList::showMenu() {
    int choice;
    do {
        std::cout << "\n1. Add Task\n2. View Tasks\n3. Remove Task\n4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::cin.ignore();  // Clear the newline character from the buffer
                std::string task;
                std::cout << "Enter task: ";
                std::getline(std::cin, task);
                addTask(task);
                break;
            }
            case 2:
                viewTasks();
                break;
            case 3: {
                int index;
                std::cout << "Enter task number to remove: ";
                std::cin >> index;
                removeTask(index);
                break;
            }
            case 4:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
}

void ToDoList::addTask(const std::string& task) {
    tasks.push_back(task);
    std::cout << "Task added.\n";
}

void ToDoList::removeTask(int index) {
    if (index > 0 && index <= tasks.size()) {
        tasks.erase(tasks.begin() + index - 1);
        std::cout << "Task removed.\n";
    } else {
        std::cout << "Invalid index. No task removed.\n";
    }
}

void ToDoList::viewTasks() const {
    if (tasks.empty()) {
        std::cout << "No tasks available.\n";
    } else {
        std::cout << "Your tasks:\n";
        for (size_t i = 0; i < tasks.size(); ++i) {
            std::cout << i + 1 << ". " << tasks[i] << '\n';
        }
    }
}
