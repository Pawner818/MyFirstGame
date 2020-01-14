
#include "RunGame.h"

int main()
{
    int MaxLevel = 10;
    int LevelDifficulty = 1;
    
    //Game loop
    while (LevelDifficulty<=MaxLevel)
{

    bool bLevelComplete = RunGame(LevelDifficulty);
    std::cin.clear();
    std::cin.ignore(); // discards the buffer

    //Increase our difficulty every stage
    if (bLevelComplete)
    {
        ++LevelDifficulty;
    }
    
}

//Final Message
std::cout<<"*** Good job, agent! You got all the files! Now get out of there! ***"<<std::endl;

    return 0;

}