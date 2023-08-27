#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));  // Seed the random number generator with current time
    int randomNumber = rand() % 100 + 1;  // Generate a random number between 1 and 100
    int userGuess;
    int numberOfGuesses = 0;

    std::cout << "Welcome to the Guess the Number Game!" << std::endl;

    do {
        std::cout << "Guess a number between 1 and 100: ";
        std::cin >> userGuess;

        numberOfGuesses++;

        if (userGuess < randomNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (userGuess > randomNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number " << randomNumber << " in " << numberOfGuesses << " guesses." << std::endl;
        }

    } while (userGuess != randomNumber);

    return 0;
}
