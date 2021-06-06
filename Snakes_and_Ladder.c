#include<stdio.h>
#include<stdlib.h>
#include<time.h>
char player1[15];
char player2[15];
int dice,position,newposition,count=0;
void knowposition()
{
    switch(position)
    {
    case 4:
        newposition=14;
        printf("\nWell done, You landed on Ladder, You are now on position %d ",newposition);
        break;
    case 9:
        newposition=31;
        printf("\nWell done, You landed on Ladder, You are now on position %d ",newposition);
        break;
    case 17:
        newposition=7;
        printf("\nOhh ! You landed on Snake, You are now on position %d ",newposition);
        break;
    case 21:
        newposition=42;
        printf("\nWell done, You landed on Ladder, You are now on position %d ",newposition);
        break;
    case 28:
        newposition=84;
        printf("\nWell done, You landed on Ladder, You are now on position %d ",newposition);
        break;
    case 37:
        newposition=61;
        printf("\nWell done, You landed on Ladder, You are now on position %d ",newposition);
        break;
    case 46:
        newposition=13;
        printf("\nOhh ! You landed on Snake, You are now on position %d ",newposition);
        break;
    case 51:
        newposition=67;
        printf("\nWell done, You landed on Ladder, You are now on position %d ",newposition);
        break;
    case 54:
        newposition=25;
        printf("\nOhh ! You landed on Snake, You are now on position %d ",newposition);
        break;
    case 62:
        newposition=19;
        printf("\nOhh ! You landed on Snake, You are now on position %d ",newposition);
        break;
    case 64:
        newposition=44;
        printf("\nOhh ! You landed on Snake, You are now on position %d ",newposition);
        break;
    case 72:
        newposition=91;
        printf("\nWell done, You landed on Ladder, You are now on position %d ",newposition);
        break;
    case 87:
        newposition=36;
        printf("\nOhh ! You landed on Snake, You are now on position %d ",newposition);
        break;
    case 89:
        newposition=53;
        printf("\nOhh ! You landed on Snake, You are now on position %d ",newposition);
        break;
    case 95:
        newposition=75;
        printf("\nOhh ! You landed on Snake, You are now on position %d ",newposition);
        break;
    case 98:
        newposition=79;
        printf("\nOhh ! You landed on Snake, You are now on position %d ",newposition);
        break;
    }
}
int main()
{
    system("color 1F");

    printf("\n");
    printf(" ===========================================================\n");
    printf(" |91 || 92 || 93 || 94 || 95 || 96 || 97 || 98 || 99 || 100|               |::::::::::| > WIN @ 100 < |::::::::::|\n");
    printf(" ===========================================================\n");
    printf(" |81 || 82 || 83 || 84 || 85 || 86 || 87 || 88 || 89 || 90 |          |:::::> 95 Snake to 75    |:::::> 98 snake to 79\n");
    printf(" ===========================================================\n");
    printf(" |71 || 72 || 73 || 74 || 75 || 76 || 77 || 78 || 79 || 80 |          |:::::> 89 snake to 53    |:::::> 72 Ladder to 91\n");
    printf(" ===========================================================\n");
    printf(" |61 || 62 || 63 || 64 || 65 || 66 || 67 || 68 || 69 || 70 |          |:::::> 64 Snake to 44    |:::::> 51 Ladder to 67\n");
    printf(" ===========================================================\n");
    printf(" |51 || 52 || 53 || 54 || 55 || 56 || 57 || 58 || 59 || 60 |          |:::::> 87 Snake to 36    |:::::> 37 Ladder to 61\n");
    printf(" ===========================================================\n");
    printf(" |41 || 42 || 43 || 44 || 45 || 46 || 47 || 48 || 49 || 50 |          |:::::> 54 Snake to 25    |:::::> 28 Ladder to 84\n");
    printf(" ===========================================================\n");
    printf(" |31 || 32 || 33 || 34 || 35 || 36 || 37 || 38 || 39 || 40 |          |:::::> 62 Snake to 19    |:::::> 21 Ladder to 42\n");
    printf(" ===========================================================\n");
    printf(" |21 || 22 || 23 || 24 || 25 || 26 || 27 || 28 || 29 || 30 |          |:::::> 46 Snake to 13    |:::::> 9 Ladder to 31\n");
    printf(" ===========================================================\n");
    printf(" |11 || 12 || 13 || 14 || 15 || 16 || 17 || 18 || 19 || 20 |          |:::::> 17 Snake to 7     |:::::> 4 Ladder to 14\n");
    printf(" ===========================================================\n");
    printf(" |01 || 02 || 03 || 04 || 05 || 06 || 07 || 08 || 09 || 10 |               |::::::::::| > START @ 1 < |::::::::::|\n");
    printf(" ===========================================================\n");

    printf("\nEnter your name player  :  ");
    gets(player1);
    printf("\n\t\tWelcome %s Best of luck!",player1);
    do
    {
        printf("\n\nPress any key to roll the DICE.\n\n");
        dice-=(getch());
        dice=((rand()%6)+1);
        printf(" : You rolled a DICE  ");
        position=position+dice;
        if(dice == 6)
        {
            printf("\n6 came up on the DICE , YAY! you get 1 more DICE throw.\n");
            continue;
        }
        printf("& landed on number : %d\n",position);
        count++;
        knowposition();
        position=newposition;
    }while(position < 100);
    printf("Congratulations you have won the game %s and you took %d DICE throws.\n",player1,count);
    system("pause");
    return 0;
}
