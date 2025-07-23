#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int number,guess,attempts = 0;
    char playagain;

    do {
        srand(time(0));
        number = rand() % 100 + 1;
        attempts = 0;

        printf("🎮WELCOME TO THE NUMBER GUESSING GAME!\n");
        printf("I have picked a number between 1 and 100. Can you guess it?\n");

        do {
            printf("Enter your guess:");
            scanf("%d",&guess);
            attempts++;

            if (guess > number) {
                printf("Too high! Try again\n");
            }
                else if (guess < number) {
                    printf("Too low! Try again.\n");
            }   
                 else {
                    printf("Congratulations!🎉 You guessed it in %d attempts!\n",attempts);
            }
        }
        while(guess!=number);

        printf("Do you want to play again?(y/n):");
        scanf(" %c",&playagain);

    } while (playagain =='y' || playagain =='Y');

    printf("Thanks for playing!👋\n");

    return 0;

}
