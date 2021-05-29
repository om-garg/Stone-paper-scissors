#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int player,computer;
int choice()
{
    int ch;
    printf("\nPress 1 for Stone.");
    printf("\nPress 2 for Secissor.");
    printf("\nPress 3 for Paper.");
    printf("\nPress 4 for exit.");
    printf("\n\n\nEnter your choice:- ");
    fflush(stdin);
    scanf("%d",&ch);
    return(ch);
}
void Setup()
{
    start:
    computer=rand()%4;
    if(computer==0)
    {
        goto start;
    }
    player=choice();
}
void Logic()
{
    switch(player)
    {
        case 1:if(computer==1)
                {
                    printf("\nDraw!!!!!!!");
                    printf("\nPlayer = Stone\nComputer = Stone");
                }
                else if(computer==3)
                {
                    printf("\nComputer Wins!!!!!!!!!");
                    printf("\nPlayer = Stone\nComputer = Paper");
                }
                else
                {
                    printf("\nPlayer Wins!!!!!!!!!!");
                    printf("\nPlayer = Stone\nComputer = Secissor");
                }
        break;
        case 2:if(computer==2)
                {
                    printf("\nDraw!!!!!!!");
                    printf("\nPlayer = Secissor\nComputer = Secissor");
                }
                else if(computer==1)
                {
                    printf("\nComputer Wins!!!!!!!!!");
                    printf("\nPlayer = Secissor\nComputer = Stone");
                }
                else
                {
                    printf("\nPlayer Wins!!!!!!!!!!");
                    printf("\nPlayer = Secissor\nComputer = Paper");
                }
        break;
        case 3:if(computer==3)
                {
                    printf("\nDraw!!!!!!!");
                    printf("\nPlayer = Paper\nComputer = Paper");
                }
                else if(computer==2)
                {
                    printf("\nComputer Wins!!!!!!!!!");
                    printf("\nPlayer = Paper\nComputer = Secissor");
                }
                else
                {
                    printf("\nPlayer Wins!!!!!!!!!!");
                    printf("\nPlayer = Paper\nComputer = Stone");
                }
        break;
        case 4:exit(0);
        break;
        default:printf("\nInvalid user choice");
        break;
    }
}
int main()
{
    while(1)
    {
        system("cls");
        printf("************************************************************************************************************************");
        printf("\n\t\t\t\t\t\tStone Paper Secissor Game");
        Setup();
        Logic();
        getch();
    }
    return 0;
}
