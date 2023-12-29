# Robot Rental System

## Overview

The Robot Rental System is a simple command-line application designed to manage the rental of robots to users for various tasks. The system allows the addition of robots and users, displays information about users and robots, and facilitates the rental process.

## Table of Contents

- [Features](#features)
- [Files](#files)
- [Compilation](#compilation)
- [Usage](#usage)

## Features

- **Add Robot:** Add new robots with different functions, names, and daily rental prices.
- **Add User:** Add new users with names, telephone numbers, and emails.
- **Display Users and Robots:** View details of all users and robots, including rental information.
- **Search by Name:** Search for robots and users by their names.
- **Rent Robot to User:** Rent a robot to a specific user for a specified date.
- **Clean and Commented Code:** Follows best practices for code structure, readability, and documentation.
- **Object-Oriented Design:** Utilizes principles of Object-Oriented Programming (OOP).

## Files

- `main.cpp`: Entry point of the program containing the main function.
- `Robot.h` and `Robot.cpp`: Define the `Robot` class with its attributes and methods.
- `User.h` and `User.cpp`: Define the `User` class with its attributes and methods.
- `MenuFunctions.h` and `MenuFunctions.cpp`: Implement functions related to the main menu options.
- `Utilities.h` and `Utilities.cpp`: Provide utility functions, such as date validation.

## Compilation

To compile the project, use a C++ compiler such as g++:

```bash
g++ main.cpp Robot.cpp User.cpp MenuFunctions.cpp Utilities.cpp -o RobotRentalSystem
```

## Usage

1. Compile the project as described in the Compilation section.
2. Run the executable:

```bash
./RobotRentalSystem
```

3. Follow the on-screen instructions to navigate the menu and interact with the Robot Rental System.
