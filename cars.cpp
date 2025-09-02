#include<iostream>
using namespace std;

class Car {
    private:
        int currentSpeed;    // Private member to store current speed
        int maxSpeedLimit;   // Private member to store maximum speed limit

    public:
        // Constructor to initialize private members
        Car() {
            currentSpeed = 0;
            maxSpeedLimit = 200;
        }

        // Public method to set speed (with safety check)
        bool setSpeed(int speed) {
            if (speed <= maxSpeedLimit && speed >= 0) {
                currentSpeed = speed;
                return true;
            }
            return false;
        }

        // Public method to get current speed
        int getCurrentSpeed() {
            return currentSpeed;
        }

        // Public method to get max speed limit
        int getMaxSpeedLimit() {
            return maxSpeedLimit;
        }
};

int main() {
    Car car1;  // Creates a car with initial speed 0 and max limit 200
    
    // Try to set the speed to 150
    if (car1.setSpeed(150)) {
        cout << "Successfully set speed to: " << car1.getCurrentSpeed() << " km/h" << endl;
    }
    
    // Try to set speed above limit (will fail)
    if (!car1.setSpeed(250)) {
        cout << "Cannot set speed above the limit of " << car1.getMaxSpeedLimit() << " km/h" << endl;
    }
    return 0;
}   