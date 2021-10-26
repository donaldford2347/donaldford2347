#include <iostream>
#include "time.h"
using namespace std;

int getPosition()
{
    int position = 1 + (rand() % 26);
    return position;
}

//function for getletter
char getLetter()
{
    //getiing the postion from  the getposition function
    int position = getPosition();
    //generting a capital letter from the position
    char letter = 64 + position;
    return letter;
}

//rungame function to run the game
void runGame()
{
    cout << "I am thinking of a letter. What is your guess?" << endl;
    char letter = getLetter();
    char guess;
    //taking three gusses
    for (int i = 0; i < 3; i++) {
        cin >> guess;
        if (guess > 90)
            guess = guess - 32;
        if (guess == letter)
        {
            cout << "Congratulations you guessed my letter." << endl;
            break;
        }
        else if (guess < letter)
        {
            cout << "Your guess is too low" << endl;
        }
        else
        {
            cout << "Your guess is too highs" << endl;
        }
    }
}

int main(void)
{
    srand((unsigned)time(NULL));
    char choice = 'y';
    while (choice == 'Y' || choice == 'y')
    {
        runGame();
        cout << "Do you want to play again Y/N?";
        cin >> choice;
    }
    cout << "Goodbye !" << endl;
    return 0;
}