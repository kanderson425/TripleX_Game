#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    // Print Welcome Messages;
    std::cout << "\n\nYou are a secret agent breaking into a level " << Difficulty;
    std::cout << " secure server room...\nEnter the correct code to continue...\n";
}

bool PlayGame(int Difficulty) 
{
    PrintIntroduction(Difficulty);
    
    // Declare 3 number code
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;


    // Print sum and product to the terminal
    std::cout << std::endl;
    std::cout << "There are 3 numbers in the code";
    std::cout << "\nThe codes add-up to: " << CodeSum;
    std::cout << "\nThe codes multiple to give: " << CodeProduct << std::endl;

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the players guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct) 
    {
        std::cout << "/n*** Well done agent! you have extracted a file! Keep going! ***";
        std::cout << "/n*** You entered the wrong code! Carefeul agent! Try again! ***";
        return true;
    }
    else {
        std::cout << "No, that is not correct.\n";
        std::cout << "Try again on this level.\n";
        return false;
    }
}

int main()
{
    srand(time(NULL)); // creates new sequence based on time of day

    int LevelDifficulty = 1;
    int const MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty) // our while loop is to play game until all 11 levels are played
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        
    }
    std::cout << "\n*** Great work agent! You got all the files! Now get out of there! ***\n";
    return 0;
}