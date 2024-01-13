// Import necessary libraries
#include "SolarSystem.h"
#include <iostream>
#include <string>
#include <limits>
 using namespace std;
// Declare a variable for user's name
string name;

// Define a custom exception class for invalid planet names that contain integers
class InvalidNameException : public exception {
public:
string name;
string validateName();
    // Override the what function to provide a custom error message
    const char* what() const noexcept override   {
    return "Invalid name exception";
    }   

    // Function that checks if the name contains integers
    static bool containsInteger(const string& name) {
        for (char c : name) {
            if (isdigit(c)) {
                return true;
            }
        }
        return false;
    }

    // Function that validates the name and throws an exception if it contains integers
    void validateName(const string& name) {
        if (containsInteger(name)) {
            throw InvalidNameException();
        }
    }
};

// Main function
int main() {
    // Create a SolarSystem object
    SolarSystem solar_system;
    string planet_name;

    // Prompt the user for their name and validate it using the InvalidNameException class
    cout << "**********INITIALIZING**********" << endl;
    InvalidNameException validator;
    while (true) {
        cout << "Enter your name here: ";
        cin >> name;

        try {
            validator.validateName(name);
            break;
        }
        catch (const InvalidNameException& e) {
            cout << e.what() << " Please try again." << endl;
        }
    }

    // Output welcome message and program instructions
    cout << "Logging in to Space Probe Adjacency Prediction Model......." << endl;
    cout << "Login Complete.....\n" << endl;
    cout << "Welcome: " << name;
    cout << endl;
    cout << "\n \n \n";
    cout << "This program is designed to help us determine the best possible time to retrieve data from \n"
        << "each one of the space probes we've sent to the planets in our solar system.\n" << endl;
    cout << "Your asignment is to retrieve the next best communication window\nfor each "
        << "planet and any data sets currently avaliable for transmission.\n" << endl;
    cout << "If you do retrieve any data sets, please submit them so we can begin our research.\n" << endl;
    cout << endl;

    // Prompt the user to enter a planet name and simulate its distance from Earth
    char continue_input;
    while (true) {
        cout << "Enter a planet name (other than Earth): ";
        cin >> planet_name;

        // Set the planet name, simulate the distance, calculate the closest date, and print the planet information
        solar_system.setPlanetName(planet_name);
        solar_system.simulateDistance(planet_name);
        solar_system.getClosestDate();
        solar_system.printInfo();

        // Prompt the user to continue or exit the program
        cout << "Press 'n' to exit or any other key to enter another planet name: ";
        cin >> continue_input;
        if (continue_input == 'n')
        {
            break;
        }
    }

    // End of program
    return 0;
}
