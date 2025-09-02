#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to get user input
int get_guess() {
    int guess;
    printf("Enter your guess (1 to 100): ");
    scanf("%d", &guess);
    return guess;
}

// Function to print a welcome message
void print_welcome() {
    printf("====================================\n");
    printf(" 🎲 Welcome to the Guessing Game! 🎲\n");
    printf(" I'm thinking of a number between 1 and 100.\n");
    printf(" Can you guess what it is?\n");
    printf("====================================\n\n");
}

int main() {
    int secret_number, guess, attempts = 0;

    // Seed the random number generator with current time
    srand(time(NULL));
    secret_number = rand() % 100 + 1;  // Random number between 1 and 100

    print_welcome();

    // Main game loop
    while (1) {
        guess = get_guess();
        attempts++;

        if (guess < 1 || guess > 100) {
            printf("❌ That's not between 1 and 100. Try again!\n\n");
        } else if (guess < secret_number) {
            printf("📉 Too low! Try a higher number.\n\n");
        } else if (guess > secret_number) {
            printf("📈 Too high! Try a lower number.\n\n");
        } else {
            printf("🎉 Congratulations! You guessed it in %d tries!\n", attempts);
            break;
        }
    }

    printf("Thanks for playing! 👋\n");
    return 0;
}
