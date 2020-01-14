#include "RunGame.h"


void Print(int Difficulty)
{
// Background storie about what's going on here.

     std::cout<<std::endl;
     std::cout<<"You are a secret agent breaking into a Level "<<Difficulty<<" secure server room ... "<<std::endl;
     std::cout<<"Enter the correct code to continiue..." <<std::endl;
}

bool RunGame(int Difficulty)
{
     srand(time(NULL));

     Print(Difficulty);

//random numbers that increase difficulty with each level
const int CodeA = rand()%Difficulty+Difficulty;
const int CodeB = rand()%Difficulty+Difficulty;
const int CodeC = rand()%Difficulty+Difficulty;

const int CodeSum = CodeA + CodeB + CodeC;
const int CodeProd = CodeA * CodeB * CodeC;

std::cout<<std::endl;
std::cout<<"+ There are 3 numbers in the code"<<std::endl;
std::cout<<"+ The codes add-up to: "<< CodeSum <<std::endl;
std::cout<<"+ The code multiply to give: "<< CodeProd<<std::endl;

//Store player guess
int GuessA,GuessB,GuessC;
std::cout<<"Enter your numbers: " << std::endl;
std::cin >> GuessA >> GuessB >> GuessC;
std::cout<<std::endl;

int GuessSum = GuessA + GuessB + GuessC;
int GuessProd = GuessA * GuessB * GuessC;

//Logic of the game
if (CodeSum==GuessSum && CodeProd == GuessProd)
{
    std::cout<<"*** Well done, agent! You have extracted a file! Keep going! ***"<<std::endl;
    return true;
}
else
{
    std::cout<<"*** You entered the wrong code! Careful, agent! Try again! ***"<< std::endl;
    return false;
}

}

