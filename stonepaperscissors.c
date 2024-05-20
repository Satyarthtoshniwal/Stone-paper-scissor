// Stone Paper Scissor
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char win(char a, char b);
void main()
{
    char comp, play;
    int num;
    // computer turn
    srand(time(0));
    printf("Computer turn: played!!\n");
    num = rand() % 3;
    if (num == 0)
    {
        comp = 's';
    }
    else if (num == 1)
    {
        comp = 'p';
    }
    else
    {
        comp = 'c';
    }
    //printf("%c\n",comp);
    // player turn
    printf("Your turn:Stone(s),Paper(p),Scissors(c)\n");
    scanf("%c", &play);
    win(comp, play);
}
char win(char a, char b)
{
    if (a == b)
    {
        printf("Match is tie");
        exit(0);
    }
    else if (a == 's') 
    {
        if (b == 'p') 
        {
            printf("you win!!! Congrats");
        }
        else 
        {
            printf("You Loss !! Try next time");
        }
    }
    else if (a == 'p') 
    {
        if (b == 'c') 
        {
            printf("you win!!! Congrats");
        }
        else 
        {
            printf("You Loss !! Try next time");
        }
    }
    else 
    {
        if (b == 's') 
        {
            printf("you win!!! Congrats");
        }
        else 
        {
            printf("You Loss !! Try next time");
        }
    }
}