// SolarSystem.cpp
#include "SolarSystem.h"
#include <iostream>
#include <cmath>

// Array of planet names
const string SolarSystem::planets[] = { "Mercury", "Venus", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto" };

// Default constructor that initializes private member variables to default values
SolarSystem::SolarSystem() : planetName(""), distance(0), orbitalCal(0), closestDate("") {}

// Setter function that sets the name of the planet
void SolarSystem::setPlanetName(const string& planet_name) {
    planetName = planet_name;
}

// Getter function that returns the name of the planet
string SolarSystem::getPlanetName() const {
    return planetName;
}

// Function that simulates the distance of the planet from Earth
void SolarSystem::simulateDistance(const string& planet_name) {
    // Loop through the array of planet names to find the index of the current planet
    for (int i = 0; i < num_planets; i++) {
        if (planets[i] == planet_name) {
            // Get the orbital period of the planet using the index and calculate a simulated distance
            orbitalCal = getOrbit(i);
            break;
        }
    }
    //random distance
    distance = rand() % 1000 + 1;
}

// Getter function that returns the simulated distance of the planet
int SolarSystem::getDistance() const {
    return distance;
}

// Function that calculates the closest date of the planet to Earth
void SolarSystem::getClosestDate() {
    // Calculate the number of days until the planet is closest to Earth
    int days_until_closest = (orbitalCal - (rand() % orbitalCal)) % 365;
    // Assuming fixed start date of 2023-05-06 (yyyy-mm-dd)
    int start_year = 2023;
    int start_month = 5;
    int start_day = 6;

    int day = start_day + days_until_closest;
    int month = start_month;
    int year = start_year;

    // Adjust the day and month values to keep them within their respective ranges
    while (day > 30) {
        day -= 30;
        month += 1;
        if (month > 12) {
            month = 1;
            year += 1;
        }
    }

    // Format the closest date as a string in the format "yyyy-mm-dd"
    closestDate = to_string(year) + "-" + (month < 10 ? "0" : "") + to_string(month) + "-" + (day < 10 ? "0" : "") + to_string(day);
}

// Getter function that returns the orbital period of a planet based on its index in the planets array
int SolarSystem::getOrbit(int planet_index) const {
    // Orbital periods in Earth days (approximated)
    const int orbital_periods[] = { 88, 225, 365, 687, 4333, 10759, 30687, 60190 };
    return orbital_periods[planet_index];
}

// Function that prints the planet name, simulated distance from Earth, and closest date to Earth
void SolarSystem::printInfo() const {
    cout << "Planet: " << planetName << endl;
    cout << "Distance to Earth (simulated): " << distance << " million km" << endl;
    cout << "Closest date to Earth: " << closestDate << endl;
}

