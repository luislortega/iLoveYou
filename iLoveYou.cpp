/*
* I love you in C++
*/
#include <iostream>

using namespace std;

void iLoveYou(bool);

int main()
{
    iLoveYou(true);
    return 0;
}

void iLoveYou(bool loveIsTrue){
    while(loveIsTrue){
        std::cout << "I love you Angie!" << std::endl;
        //loveIsTrue = false; this never end baby!
    }
}
