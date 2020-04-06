#include <iostream>
#include <Koala.h>
#include <vector>

int main(){

    int x = 1;
    int *zeiger = &x;

    std::cout<<"Inhalt von Zeiger: "<<zeiger<<" Adresse von Zeiger: "<<&zeiger <<" Inhalt von x: "<<x<<" Adresse von x: "<<&x<<std::endl;

    *zeiger=2;

    std::cout<<"Inhalt von Zeiger: "<<zeiger<<" Adresse von Zeiger: "<<&zeiger <<" Inhalt von x: "<<x<<" Adresse von x: "<<&x<<std::endl;


    //create new objects
    // on the stack
    Koala k;
    k.setAge; // ok

    // or on the heap
    Koala *ptrK = new Koala;
    ptrK->setAge; // ok
    delete ptrK;

    //(*p).f == p->f


    int arr[10];
    // or 
    int *ptrarr = new int[10];
    // use x, then reclaim memory
    delete[] arr;


    std::vector<int> myVec;
    for ( std::vector<int>::iterator itr = myVec.begin();
          itr != myVec.end();
          ++itr )
    {
        std::cout << *itr;
    }
}