#include <iostream>
#include <vector>
#include "Robot.h"
#include "User.h"
#include "MenuFunctions.h"
#include "Utilities.h"

int main() {
    std::vector<Robot> robots;
    std::vector<User> users;

    int choice;

    do {
        displayMenu();

        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
            case 1:
                addRobot(robots);
                break;
            case 2:
                addUser(users);
                break;
            case 3:
                displayAllUsers(users);
                break;
            case 4:
                displayAllRobots(robots);
                break;
            case 5:
                searchRobotByName(robots);
                break;
            case 6:
                searchUserByName(users);
                break;
            case 7:
                rentRobotToUser(users, robots);
                break;
            case 8:
                std::cout << "Exiting the program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choice != 8);

    return 0;
}
