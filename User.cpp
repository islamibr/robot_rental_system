#include "User.h"

User::User(std::string name, std::string telephone_number, std::string email)
    : name(name), telephone_number(telephone_number), email(email) {}

std::string User::getName() const {
    return name;
}

std::string User::getTelephoneNumber() const {
    return telephone_number;
}

std::string User::getEmail() const {
    return email;
}

std::vector<std::string> User::getRobotsRented() const {
    return robots_rented;
}

void User::rentRobot(const std::string& robot_name) {
    robots_rented.push_back(robot_name);
}
