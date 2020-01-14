#include "Rungame.h"

void Print()
{
// Background storie about what's going on here.
std::cout<<std::endl;
std::cout<<"You are a secret agent breaking into secret room ... "<<std::endl;
std::cout<<"Enter the correct code to continiue..." <<std::endl;
}


int main()
{
    
while (true)
{
    bool bLevelComplite = RunGame();
    RunGame();
    std::cin.clear();
    std::cin.ignore(); // discards the buffer
}

 

    return 0;
}