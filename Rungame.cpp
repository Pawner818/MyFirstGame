#include "Rungame.h"

int Product(int a, int b, int c){return a*b*c;}
int Sum(int a, int b, int c){return a + b + c;}

bool RunGame()
{

int CodeA = 4;
int CodeB = 3 ;
int CodeC = 2;

std::cout<<std::endl;
std::cout<<"+ There are 3 numbers in the code"<<std::endl;
std::cout<<"+ The codes add-up to: "<< Sum(CodeA,CodeB,CodeC)<<std::endl;
std::cout<<"+ The code multiply to give: "<<Product(CodeA,CodeB,CodeC)<<std::endl;

//Store player guess
int GuessA,GuessB,GuessC;
std::cout<<"Enter your numbers: " << std::endl;
std::cin >> GuessA >> GuessB >> GuessC;
std::cout<<std::endl;

if (Sum(CodeA,CodeB,CodeC) == Sum(GuessA,GuessB,GuessC && Product(CodeA,CodeB,CodeC)==Product(GuessA,GuessB,GuessC)))
{
    std::cout<<"You win!"<<std::endl;
    return true;
}
else
{
    {std::cout<<"You lose! Try again!"<< std::endl;}
    return false;
}

}
