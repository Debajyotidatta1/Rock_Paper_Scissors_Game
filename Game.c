//This Code is written by Debajyoti Datta

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rock_paper_scissors(char you, char comp)
{
    //if computer returns 0 then the game is drawn. If computer returns 1 then you win or if it returns -1 then you lose.
    // 'r'=rock; 'p'= paper; 's'= scissors;

    // conditions for Draw
    // i.e, rr,pp,ss
    if (you == comp)
    {
        return 0;
    }

    // coditions for win and lose
    //i.e, r<p; r>s; s>p
    if (you == 'r' && comp == 'p')
    {
        return -1;
    }
    else if (you == 'p' && comp == 'r')
    {
        return 1;
    }

    if (you == 'r' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'r')
    {
        return -1;
    }

    if (you == 's' && comp == 'p')
    {
        return 1;
    }
    else if (you == 'p' && comp == 's')
    {
        return -1;
    }
}
int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1;

    if (number <= 33)
    {
        comp = 'r';
    }
    else if (number > 33 && number <= 66)
    {
        comp = 'p';
    }
    else
    {
        comp = 's';
    }

    printf("enter 'r' for rock,'p' fpr paper and 's' for scissors\n");
    scanf("%c", &you);

    int result = rock_paper_scissors(you, comp);

    if (result == 1)
    {
        printf("you win!!\n");
    }
    if (result == -1)
    {
        printf("you lose!!\n");
    }
    if (result == 0)
    {
        printf("Game is tie!!\n");
    }
    printf("you choosed %c and computer choosed %c\n", you, comp);
    return 0;
}
