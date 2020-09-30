#include <iostream>

void PrintIntroduction()
{
    // Print Welcome Messages;
    std::cout << "You are a secret agent breaking into a secure server room...\n";
    std::cout << "Enter the correct code to continue...\n";
}

void PlayGame() 
{
    PrintIntroduction();
    
    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;


    // Print sum and product to the terminal
    std::cout << std::endl;
    std::cout << "There are 3 numbers in the code";
    std::cout << "\nThe codes add-up to: ";
    std::cout << "\nThe codes multiple to give: " << CodeProduct << std::endl;

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the players guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct) 
    {
        std::cout << "Good job, you have broken the code!\n";
    }
    else {
        std::cout << "No, that is not correct.\n";
    }
}

int main()
{
    PlayGame();
    return 0;
}