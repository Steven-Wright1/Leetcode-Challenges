class ParkingSystem {
public:
        ParkingSystem(int big, int medium, int small){
            parking_spaces.push_back(big); 
            parking_spaces.push_back(medium); 
            parking_spaces.push_back(small); 
        }
    
    bool addCar(int carType) {
        if(parking_spaces[carType - 1] > 0){
            parking_spaces[carType - 1] -= 1;
            return true; 
        }
        else
            return false; 
    }

private:
        vector<int> parking_spaces{}; 
};

