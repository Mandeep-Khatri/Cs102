#include <iostream>
#include <string>

int main() {
    // Declare variables to store the required data
    std::string firstName = "Mandeep";
    std::string lastName = "Khatri";
    char middleInitial = ' ';  // Update with your middle initial if any
    int birthYear = 2001;
    int numberOfCourses = 6;
    double targetedGPA = 4.0;
    std::string birthMonth = "November";

    // Display the stored data
    std::cout << "Full Name: " << firstName << " " << middleInitial << " " << lastName << std::endl;
    std::cout << "Year of Birth: " << birthYear << std::endl;
    std::cout << "Number of Courses: " << numberOfCourses << std::endl;
    std::cout << "Targeted GPA: " << targetedGPA << std::endl;
    std::cout << "Birth Month: " << birthMonth << std::endl;

    return 0;
}
