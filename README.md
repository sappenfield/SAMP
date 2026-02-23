# Space Probe Adjacency Prediction Model (SPAPM)

## Overview
The Space Probe Adjacency Prediction Model (SPAPM) is a command-line application designed to assist users in determining optimal communication windows with various space probes sent to planets within our solar system. The application facilitates user input for planet names and provides simulated information regarding their proximity to Earth.

## Key Features
- **User Input Handling**: Validates user inputs to ensure they do not contain integers.
- **Planet Simulation**: Simulates the distance of chosen planets from Earth.
- **Date Calculation**: Determines the closest date for data retrieval from each planet.
- **User-Friendly Interface**: Clear prompts and instructions.

## Installation
To build and run this application, ensure that you have a C++ compiler installed. You can follow these steps to clone and compile the project:

1. Clone the repository:
   ```bash
   git clone <repository-url>
   cd <repository-directory>
   ```

2. Open the project in your terminal or preferred IDE.

3. Compile the project using:
   ```bash
   g++ -o SPAPM2 SPAPM2.cpp SolarSystem.cpp
   ```

4. Run the application:
   ```bash
   ./SPAPM2
   ```

## Usage
When running the application, you will be prompted to enter your name and a planet name (other than Earth). The program will display simulated distance data and the closest date available for communication. You can enter another planet name or exit the program.

## Project Structure
```plaintext
.
├── SolarSystem.cpp
├── SolarSystem.h
└── SPAPM2.cpp
```

## Design Notes
- The application is designed with an emphasis on modularity—planet-related functionalities are encapsulated within the `SolarSystem` class.
- Custom exceptions are implemented to handle input validation seamlessly.

## Limitations
- The distance simulation is purely random and does not reflect real astronomical data.
- The program requires restarting for a new session, as it does not retain user data between executions.

## Roadmap (Next Steps)
- Implement a graphical user interface (GUI) for enhanced user experience.
- Integrate real-time astronomical data for accurate distance calculations.
- Support additional features such as history tracking of used planet names and retrieval windows.

---

For any issues or enhancements, please open an issue or submit a pull request. Your feedback is greatly appreciated!