#include "Robot.h"

Robot::Robot(std::string name, std::vector<int> function_ids, double price_per_day)
    : name(name), function_ids(function_ids), price_per_day(price_per_day), rented(false) {}

std::string Robot::getName() const {
    return name;
}

std::vector<int> Robot::getFunctionIds() const {
    return function_ids;
}

double Robot::getPricePerDay() const {
    return price_per_day;
}

bool Robot::isRented() const {
    return rented;
}

std::vector<std::string> Robot::getDatesRented() const {
    return dates_rented;
}

void Robot::setRented(bool status) {
    rented = status;
}

void Robot::addDateRented(const std::string& date) {
    dates_rented.push_back(date);
}
