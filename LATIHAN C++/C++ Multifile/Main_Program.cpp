#include <iostream>
#include "Natural_Number.hpp"

//template <typename _mass, typename _vol>
class Planet
{   private:
        std::string Name;
        double Massa;
        double Volume;
        std::string initial_number;
        std::string satelite;

    public:
        Planet(std::string name, double massa , double volume, std::string Initial_Number, std::string Satelite)
        {   
            this -> Name = name;
            this -> Massa = massa;
            this -> Volume = volume;
            this -> initial_number = Initial_Number;
            this -> satelite = Satelite;
        }
        ~Planet(){
            std::cout << "the planet has destructed !";
        }
        void display_planet_data() {
            std::cout << "Name of Planet : " << this -> Name << std::endl;
            std::cout << "Mass           : " << this -> Massa << " Kg" << std::endl;
            std::cout << "Volume         : " << this -> Volume <<" M3" << std::endl;
            std::cout << "Number Planet  : " << this -> initial_number << std::endl;
            std::cout << "Satelite       : " << this -> satelite      << std::endl;
        }   
};

int main (){
    Planet Bumi = Planet("Bumi", 68966507.6d, 89087313.78d , "3", "Bulan");

    Bumi.display_planet_data();

    
    return 0;
}