#include "Utilities.h"
#include <regex>

// Function to check if a date is in the format day/month/year
bool isValidDate(const std::string& date) {
    // Regular expression for date format validation
    std::regex dateRegex(R"(\d{1,2}/\d{1,2}/\d{4})");

    return std::regex_match(date, dateRegex);
}
