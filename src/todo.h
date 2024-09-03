// src/todo.h
#ifndef TODO_H
#define TODO_H

#include <vector>
#include <string>

class ToDoList {
private:
    std::vector<std::string> tasks;

public:
    void showMenu();
    void addTask(const std::string& task);
    void removeTask(int index);
    void viewTasks() const;
};

#endif
