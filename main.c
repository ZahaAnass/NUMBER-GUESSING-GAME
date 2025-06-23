#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

int get_integer_input(int min, int max) {
    int input;
    bool valid = false;
    
    while (!valid) {
        if (scanf("%d", &input) != 1) {
            printf("Invalid input. Please enter a number between %d and %d: ", min, max);
            clear_input_buffer();
            continue;
        }
        
        if (input < min || input > max) {
            printf("Please enter a number between %d and %d: ", min, max);
        } else {
            valid = true;
        }
        
        clear_input_buffer();
    }
    
    return input;
}

int main() {
    // Seed the random number generator
    srand(time(NULL));
    
    // Game configuration
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 100;
    const int MAX_ATTEMPTS = 10;
    
    int number = (rand() % (MAX_NUMBER - MIN_NUMBER + 1)) + MIN_NUMBER;
    int guess = 0;
    int attempts = 0;
    bool has_won = false;
    
    printf("=== NUMBER GUESSING GAME ===\n\n");
    printf("I'm thinking of a number between %d and %d.\n", MIN_NUMBER, MAX_NUMBER);
    printf("Can you guess what it is? You have %d attempts.\n\n", MAX_ATTEMPTS);

    while (attempts < MAX_ATTEMPTS && !has_won) {
        printf("Attempt %d/%d - Enter your guess: ", attempts + 1, MAX_ATTEMPTS);
        guess = get_integer_input(MIN_NUMBER, MAX_NUMBER);
        attempts++;

        if (guess < number) {
            printf("\033[0;34mToo low!\033[0m ");
        } else if (guess > number) {
            printf("\033[0;31mToo high!\033[0m ");
        } else {
            has_won = true;
            printf("\n\033[0;32mCONGRATULATIONS!\033[0m\n");
            printf("You guessed the number in %d %s!\n", 
                    attempts, 
                    attempts == 1 ? "attempt" : "attempts");
            break;
        }
        
        // Give a hint if the guess is close
        int difference = abs(guess - number);
        if (difference <= 5) {
            printf("(You're very close!)\n");
        } else if (difference <= 15) {
            printf("(You're getting warmer!)\n");
        } else {
            printf("\n");
        }
    }

    if (!has_won) {
        printf("\n\033[0;33mGAME OVER\033[0m\n");
        printf("The number was %d. Better luck next time!\n", number);
    }

    printf("\nThanks for playing!\n");
    return 0;
}