#include "KoalaWorld.h"
#include <experimental/random>

using namespace std;


 void KoalaWorld::spawnKoalas(vector<vector<Koala>>& koalaMatrix, int spawnPercentage){

    koalaMatrix.reserve(height);
    for(int i=0;i<height;i++){
        koalaMatrix[i].reserve(length);
    }

    for (int i = 0; i < height; i++){
        for (int j = 0; j < length; j++){
            int random = experimental::randint(1,100);
            if(random<=spawnPercentage){
                koalaMatrix[i][j]=*(new Koala);
            }else{

            }     
        }
    }
    cout<<"Koalas spawned "<<spawnPercentage<<"%"<<endl;
    //return koalaMatrix; //return reference
    
}

void KoalaWorld::displayWorld(std::vector<std::vector<Koala>>& koalaMatrix) const{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if(koalaMatrix[i][j].isAlive){
                cout << "1"<<"/"<<koalaMatrix[i][j].age<<" ";
            }else{
                cout<<"-/- ";
            }
        }
        cout << std::endl;
    }
}

