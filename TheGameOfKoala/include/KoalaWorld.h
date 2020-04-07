#include <vector>
#include "Koala.h"

class KoalaWorld{
    private:
        int height;
        int length;
    public:
        KoalaWorld(){} //default Konstruktor

        KoalaWorld(const int& height,const int& length): height(height), length(length){  //Konstruktor
            std::cout << "Koala world created with dimensions: "<<height<<", "<<length<<std::endl;
        }          
        //Koala(Koala& k);    //Copy-Konstruktor

        ~KoalaWorld(){  //Destruktor
            std::cout << "Koala world destroyed!"<<std::endl;
        }         

        void spawnKoalas(std::vector<std::vector<Koala>>&, int);

        void displayWorld(std::vector<std::vector<Koala>>&) const;
};