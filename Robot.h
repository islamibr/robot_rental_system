#ifndef ROBOT_H
#define ROBOT_H

#include <string>
#include <vector>

class Robot {
private:
    std::string name;
    std::vector<int> function_ids;
    double price_per_day;
    bool rented;
    std::vector<std::string> dates_rented;

public:
    Robot(std::string name, std::vector<int> function_ids, double price_per_day);

    // Getter methods
    std::string getName() const;
    std::vector<int> getFunctionIds() const;
    double getPricePerDay() const;
    bool isRented() const;
    std::vector<std::string> getDatesRented() const;

    // Setter method
    void setRented(bool status);

    // Other methods
    void addDateRented(const std::string& date);
};

#endif
