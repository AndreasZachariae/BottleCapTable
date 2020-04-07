#include <string>
#include "KoalaWorld.h"

using namespace std;

const int height = 40;
const int length = 20;
int spawnPercentage = 10;

int main(){

    
    vector<vector<Koala>> koalaMatrix;

    KoalaWorld *kw=new KoalaWorld(height,length);

    kw->spawnKoalas(koalaMatrix, spawnPercentage);

    

    
    
    
    koalaMatrix[39][19] = *(new Koala);
    koalaMatrix[39][19].setAge(99);

    kw->displayWorld(koalaMatrix);

    //cout<<koalaMatrix[39][19].age<<endl;


    cout<<Koala::count<<endl;
    delete kw;
}