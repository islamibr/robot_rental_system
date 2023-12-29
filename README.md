# Robot Rental System

## Overview

The Robot Rental System is a simple command-line application designed to manage the rental of robots to users for various tasks. The system allows the addition of robots and users, displays information about users and robots, and facilitates the rental process.

## Table of Contents

- [Features](#features)
- [Files](#files)
- [Compilation](#compilation)
- [Usage](#usage)
- [Code Structure and Algorithms](#code-structure-and-algorithms)

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

# Code Structure and Algorithms

## Code Structure

### 1. Main Components

The system is composed of the following main components:

- **Robot Class (`Robot.h`, `Robot.cpp`):** Represents individual robots with attributes such as name, function IDs, price per day, rental status, and dates rented.

- **User Class (`User.h`, `User.cpp`):** Represents users with attributes including name, telephone number, email, and a list of rented robots.

- **Menu Functions (`MenuFunctions.h`, `MenuFunctions.cpp`):** Implements functions related to the main menu options, including adding robots, adding users, displaying information, and handling rentals.

- **Utilities (`Utilities.h`, `Utilities.cpp`):** Contains utility functions, such as date validation.

- **Main (`main.cpp`):** The entry point of the program that uses the above components to create a functional robot rental system.

### 2. Object-Oriented Design

The code follows the principles of Object-Oriented Programming (OOP), encapsulating data and functionality into classes. This enhances code organization, promotes code reuse, and makes the system more modular.

## Algorithms

### 1. Renting a Robot to a User

```plaintext
Function rentRobotToUser(users, robots):
    Display All Users
    admin_choice_user = GetUserChoice()

    Display Available Robots
    available_robots = GetAvailableRobots(robots)
    admin_choice_robot = GetUserChoice()

    GetRentalDateFromAdmin()
    if IsValidDate(rental_date):
        selected_user = users[admin_choice_user]
        selected_robot = available_robots[admin_choice_robot]

        RentRobot(selected_robot, selected_user, rental_date)

        Display SuccessMessage("Robot rented successfully to", selected_user.getName(), "on", rental_date)
    else:
        DisplayErrorMessage("Invalid date format")

Function RentRobot(robot, user, rental_date):
    SetRobotAsRented(robot)
    AddDateToRobotRentHistory(robot, rental_date)
    AddRobotToUserRentedList(user, robot.getName())
```

### 2. Search by Name

```plaintext
Function searchRobotByName(robots):
    GetSearchNameFromAdmin()
    found = False

    for robot in robots:
        if robot.getName() == search_name:
            DisplayRobotDetails(robot)
            found = True
            break

    if not found:
        DisplayErrorMessage("Robot not found")

Function searchUserByName(users):
    GetSearchNameFromAdmin()
    found = False

    for user in users:
        if user.getName() == search_name:
            DisplayUserDetails(user)
            found = True
            break

    if not found:
        DisplayErrorMessage("User not found")
```

### 3. User Robot Rental

```plaintext
Function User.rentRobot(robot_name):
    AddRobotToUserRentedList(this, robot_name)
    DisplaySuccessMessage("Robot", robot_name, "rented successfully to", this.getName())
```
