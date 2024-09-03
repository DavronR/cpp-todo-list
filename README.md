# To-Do List Application

This is a simple command-line To-Do List application written in C++. It allows users to add, view, and remove tasks.

## Features

- Add new tasks to your to-do list
- View existing tasks with a simple command
- Remove tasks by specifying their index
- Simple and intuitive command-line interface

## Project Structure

cpp-todo-list/ ├── .vscode/ # VS Code configuration files │ ├── tasks.json # Build tasks configuration │ └── launch.json # Debug configuration ├── src/ # Source files │ ├── main.cpp │ ├── todo.cpp │ └── todo.h ├── include/ # Header files (if any) ├── tests/ # Test files (if any) ├── build/ # Directory for build output ├── .gitignore # Git ignore file └── README.md # Project documentation


## Setup and Compilation

Follow these steps to set up and compile the project on your local machine:

1. **Clone the Repository:**

   git clone https://github.com/DavronR/cpp-todo-list.git
   cd cpp-todo-list

2. Install the Required Tools:

   Ensure you have g++ installed. If not, install MinGW on Windows or GCC on Linux.

3. Compile the Application:

   g++ src/*.cpp -o build/todo

4. Run the Application:

   ./build/todo

Usage

Once the application is running, you can use the following commands:

Add Task: Enter 1 to add a new task.
View Tasks: Enter 2 to view all tasks.
Remove Task: Enter 3 to remove a task by its index.
Exit: Enter 4 to exit the application.