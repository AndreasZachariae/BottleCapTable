#include <iostream>



class Koala{
    private:
    public:
        int age=0;
        bool isAlive=false;
        static int count;

        void setAge(int);

        Koala(): isAlive{true}{  //Konstruktor
            count++;
            //std::cout << "Koala spawned, Nr: "<<count<<std::endl;
        }          
        //Koala(Koala& k);    //Copy-Konstruktor

        ~Koala(){  //Destruktor
            count--;
            std::cout << "Koala killed, you monster! remaining: "<<count<<std::endl;
        }         
};
