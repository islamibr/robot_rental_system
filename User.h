#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

class User {
private:
    std::string name;
    std::string telephone_number;
    std::string email;
    std::vector<std::string> robots_rented;

public:
    User(std::string name, std::string telephone_number, std::string email);

    // Getter methods
    std::string getName() const;
    std::string getTelephoneNumber() const;
    std::string getEmail() const;
    std::vector<std::string> getRobotsRented() const;

    // Other methods
    void rentRobot(const std::string& robot_name);
};

#endif
