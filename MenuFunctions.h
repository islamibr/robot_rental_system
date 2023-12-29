#ifndef MENU_FUNCTIONS_H
#define MENU_FUNCTIONS_H

#include <vector>
#include "Robot.h"
#include "User.h"

void displayMenu();
void addRobot(std::vector<Robot>& robots);
void addUser(std::vector<User>& users);
void displayAllUsers(const std::vector<User>& users);
void displayAllRobots(const std::vector<Robot>& robots);
void searchRobotByName(const std::vector<Robot>& robots);
void searchUserByName(const std::vector<User>& users);
void rentRobotToUser(std::vector<User>& users, std::vector<Robot>& robots);

#endif
