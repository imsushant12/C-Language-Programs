#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
    int number,guess,nguess=0;  //number will contain random number chosen by computer.
                                //guess will contain the number guessed by the user.
                                //nguess will count the number of times user has taken to guess the correct number.
    srand(time(0));             //srand function will choose random number every time.
    number=rand()%100;               //to make the random number under 100, divided it by 100.

    do                          //using a do-while loop which will work until user guesses the correct number.
    {
        printf("\n\n\t\t\t\t\tGuess the number between 1 and 100\n\t\t\t\t\t\t\t");

        scanf("%d",&guess);      //input by user

        if(guess>number)          //when user guess is lower than actual number.
            printf("\n\t\t\t\t\tLower number please!\n");

        else if(number>guess)      //when user guess is higher than actual number.
            printf("\n\t\t\t\t\tHigher number please!\n");

        else
            printf("\n\t\t\t\t\tYou guessed in %d attempts!\n",nguess);  //No of times user has taken to guess the number.

        nguess++;

    }while(guess!=number);
}

