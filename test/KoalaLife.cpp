#include <experimental/random>
#include <iostream>
#include <string>
#include "Koala.h"
#include <array>

using namespace std;

const int height = 40;
const int length = 20;
const int spawnPercentage = 50;

//int field[length][height];

bool** initPopulation(array<array<Koala,height>,length> koalaMatrix){ //argument type zeiger auf zeiger

    bool** field = new bool*[length]; //Zeiger auf Zeiger field wird initialisiert mit einem Array aus Zeigern

    for (int i = 0; i < length; i++)
    {
        field[i]=new bool [height]; //Zeiger an Stelle i zeigt auf ein Array der länge height
        for (int j = 0; j < height; j++)
        {
            int random = std::experimental::randint(1,100);
            if(random<=spawnPercentage){
                field[i][j]=true;
                
                //koalaMatrix[i][j]=Koala();
                Koala tempKoala = koalaMatrix[i][j];
                tempKoala.setAge(7);
            }else{
                field[i][j]=false;
            }
            
        }
        
    }
    return field;
}
void nextGeneration(){

}
void printGeneration(bool** field,array<array<Koala,height>,length> koalaMatrix){
    cout<<"Koala Population: "<<Koala::count<<endl;
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < height; j++)
        {
            cout << field[i][j]<<"/"<<koalaMatrix[i][j].age<<" ";
        }
        cout << std::endl;
    }
}

int main()
{

    
    array<array<Koala,height>,length> koalaMatrix;
    bool** field;
    field = initPopulation(koalaMatrix);
    nextGeneration();
    printGeneration(field,koalaMatrix);

    return 0;
}

