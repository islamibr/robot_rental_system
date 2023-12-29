#include "MenuFunctions.h"
#include "Utilities.h"

#include <iostream>
#include <sstream>
#include <iomanip>

void displayMenu() {
    std::cout << "\n--- Robot Rental System Menu ---\n";
    std::cout << "1. Add Robot\n";
    std::cout << "2. Add User\n";
    std::cout << "3. Display All Users\n";
    std::cout << "4. Display All Robots\n";
    std::cout << "5. Search for Robot by Name\n";
    std::cout << "6. Search for User by Name\n";
    std::cout << "7. Rent Robot to User\n";
    std::cout << "8. Exit\n";
}

void addRobot(std::vector<Robot>& robots) {
    std::string name;
    std::vector<int> function_ids;
    double price_per_day;

    std::cout << "Enter the name of the robot: ";
    std::getline(std::cin, name);

    std::cout << "Enter function_ids (comma-separated): ";
    std::string function_ids_str;
    std::getline(std::cin, function_ids_str);
    std::stringstream ss(function_ids_str);
    int function_id;
    while (ss >> function_id) {
        function_ids.push_back(function_id);
        if (ss.peek() == ',')
            ss.ignore();
    }

    std::cout << "Enter the price per day: ";
    std::cin >> price_per_day;

    Robot new_robot(name, function_ids, price_per_day);
    robots.push_back(new_robot);

    std::cout << "Robot added successfully.\n";
}

void addUser(std::vector<User>& users) {
    std::string name, telephone_number, email;

    std::cout << "Enter the name of the user: ";
    std::getline(std::cin, name);

    std::cout << "Enter the telephone number: ";
    std::getline(std::cin, telephone_number);

    std::cout << "Enter the email: ";
    std::getline(std::cin, email);

    User new_user(name, telephone_number, email);
    users.push_back(new_user);

    std::cout << "User added successfully.\n";
}

void displayAllUsers(const std::vector<User>& users) {
    std::cout << "\n--- All Users ---\n";
    for (const auto& user : users) {
        std::cout << "Name: " << user.getName() << "\n";
        std::cout << "Telephone Number: " << user.getTelephoneNumber() << "\n";
        std::cout << "Email: " << user.getEmail() << "\n";
        const auto rented_robots = user.getRobotsRented();
        if (!rented_robots.empty()) {
            std::cout << "Rented Robots:\n";
            for (const auto& robot : rented_robots) {
                std::cout << "  - " << robot << "\n";
            }
        }
        std::cout << "-------------------\n";
    }
}

void displayAllRobots(const std::vector<Robot>& robots) {
    std::cout << "\n--- All Robots ---\n";
    for (const auto& robot : robots) {
        std::cout << "Name: " << robot.getName() << "\n";
        std::cout << "Function IDs: ";
        for (const auto& function_id : robot.getFunctionIds()) {
            std::cout << function_id << " ";
        }
        std::cout << "\nPrice per Day: $" << std::fixed << std::setprecision(2) << robot.getPricePerDay() << "\n";
        std::cout << "Rented: " << (robot.isRented() ? "Yes" : "No") << "\n";
        const auto dates_rented = robot.getDatesRented();
        if (!dates_rented.empty()) {
            std::cout << "Dates Rented:\n";
            for (const auto& date : dates_rented) {
                std::cout << "  - " << date << "\n";
            }
        }
        std::cout << "-------------------\n";
    }
}

void searchRobotByName(const std::vector<Robot>& robots) {
    std::string search_name;
    std::cout << "Enter the name of the robot to search: ";
    std::getline(std::cin, search_name);

    bool found = false;
    for (const auto& robot : robots) {
        if (robot.getName() == search_name) {
            std::cout << "Robot found!\n";
            // Display robot details
            std::cout << "Details: " << robot.getName() << ", Function IDs: ";
            for (const auto& function_id : robot.getFunctionIds()) {
                std::cout << function_id << " ";
            }
            std::cout << ", Price per Day: $" << std::fixed << std::setprecision(2) << robot.getPricePerDay() << "\n";
            std::cout << "Rented: " << (robot.isRented() ? "Yes" : "No") << "\n";
            const auto dates_rented = robot.getDatesRented();
            if (!dates_rented.empty()) {
                std::cout << "Dates Rented:\n";
                for (const auto& date : dates_rented) {
                    std::cout << "  - " << date << "\n";
                }
            }
            std::cout << "-------------------\n";
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "Robot not found.\n";
    }
}

void searchUserByName(const std::vector<User>& users) {
    std::string search_name;
    std::cout << "Enter the name of the user to search: ";
    std::getline(std::cin, search_name);

    bool found = false;
    for (const auto& user : users) {
        if (user.getName() == search_name) {
            std::cout << "User found!\n";
            // Display user details
            std::cout << "Details: " << user.getName() << ", Telephone Number: " << user.getTelephoneNumber()
                      << ", Email: " << user.getEmail() << "\n";
            const auto rented_robots = user.getRobotsRented();
            if (!rented_robots.empty()) {
                std::cout << "Rented Robots:\n";
                for (const auto& robot : rented_robots) {
                    std::cout << "  - " << robot << "\n";
                }
            }
            std::cout << "-------------------\n";
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "User not found.\n";
    }
}

void rentRobotToUser(std::vector<User>& users, std::vector<Robot>& robots) {
    // Implementation as before
    // ...
}
