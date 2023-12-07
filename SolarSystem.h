#ifndef SOLARSYSTEM_H
#define SOLARSYSTEM_H
#include <string>
using namespace std;

class SolarSystem
{
public:
    static const int num_planets = 8;
    static const string planets[num_planets];

    // Function to set the current planet name
    void setPlanetName(const string& planet_name);

    // Function to get the current planet name
    string getPlanetName() const;

    // Function to simulate the distance between Earth and the given planet
    void simulateDistance(const string& planet_name);

    // Function to get the distance
    int getDistance() const;

    // Function to get the date when the planet is closest to Earth
    void getClosestDate();

    // Function to get the orbital period of the planet
    int getOrbit(int planet_index) const;

    // Function to print the information about the planet and the closest date
    void printInfo() const;

    // Default constructor
    SolarSystem();

private:
    string planetName;
    int distance;
    int orbitalCal;
    string closestDate;
};

#endif
