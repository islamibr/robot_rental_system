# Robot Rental System

## Overview

The Robot Rental System is a simple command-line application designed to manage the rental of robots to users for various tasks. The system allows the addition of robots and users, displays information about users and robots, and facilitates the rental process.

## Table of Contents

- [Features](#features)
- [Files](#files)
- [Structure and Algorithms](#code-structure-and-algorithms)

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

# Structure and Algorithms

## Structure

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

The `rentRobotToUser` function in `MenuFunctions.cpp` implements the algorithm for renting a robot to a user. Here is a high-level overview:

1. **Display All Users:** The function begins by displaying a list of all users, allowing the admin to choose a user.

2. **Display Available Robots:** It then displays a list of available robots that are not currently rented.

3. **User and Robot Selection:** The admin is prompted to choose a user and a robot for the rental.

4. **Date Entry:** The function prompts the admin to enter the rental date.

5. **Date Validation:** The entered date is validated using the `isValidDate` function from `Utilities.cpp` to ensure it follows the correct format.

6. **Rent Robot:** If the user and robot selections are valid, and the date is valid, the robot is marked as rented, and the rental information is updated for the user.

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
Functions like `searchRobotByName` and `searchUserByName` in `MenuFunctions.cpp` implement the search algorithm. The algorithm involves iterating through the list of robots or users, comparing names, and displaying details if a match is found.

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
The `rentRobot` method in the `User` class (`User.cpp`) is responsible for adding a rented robot to the user's list of rented robots. It is a simple function that appends the robot's name to the user's list.

```plaintext
Function User.rentRobot(robot_name):
    AddRobotToUserRentedList(this, robot_name)
    DisplaySuccessMessage("Robot", robot_name, "rented successfully to", this.getName())
```
