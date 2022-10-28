#include <stdio.h>



void drawBox(char* Box)
{
    system("clear");
    printf("\n\t\t\t\t\t\t****WELCOME TO TIC TAC TOE GAME****\n");
    printf("\nPlayer 1 --> X & Player 2 --> O\n");
    printf("\n\t     |     |    \n");
    printf("\t  %c  |  %c  |  %c\n", Box[0], Box[1], Box[2]);
    printf("\t_____|_____|_____\n");
    printf("\t     |     |    \n");
    printf("\t  %c  |  %c  |  %c\n", Box[3], Box[4], Box[5]);
    printf("\t_____|_____|_____\n");
    printf("\t     |     |    \n");
    printf("\t  %c  |  %c  |  %c\n", Box[6], Box[7], Box[8]);
    printf("\t     |     |    \n");
    
}

int checkwin(char* Box)
{
    if(Box[0] == Box[1] && Box[1] == Box[2])
    {
        return 1;
    }
    else if(Box[3] == Box[4] && Box[4] == Box[5])
    {
        return 1;
    }
    else if(Box[6] == Box[7] && Box[7] == Box[8])
    {
        return 1;
    }
    else if(Box[0] == Box[3] && Box[3] == Box[6])
    {
        return 1;
    }
    else if(Box[1] == Box[4] && Box[4] == Box[7])
    {
        return 1;
    }
    else if(Box[2] == Box[5] && Box[5] == Box[8])
    {
        return 1;
    }
    else if(Box[0] == Box[4] && Box[4] == Box[8])
    {
        return 1;
    }
    else if(Box[2] == Box[4] && Box[4] == Box[6])
    {
        return 1;
    }
    else if(Box[0] != '1' && Box[1] != '2' && Box[2] != '3' && Box[3] != '4' && Box[4] != '5' && Box[5] != '6' && Box[6] != '7' && Box[7] != '8' && Box[8] != '9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

int main()
{   
    char mark;
    char Box[] = {'1','2','3','4','5','6','7','8','9'};
    int i, choice, player = 1;
    do{
        drawBox(Box);
        player = (player % 2) ? 1 : 2 ;
        printf("Player %d , enter the choice = ", player);
        scanf("%d", &choice);
       
        mark = (player % 2) ? 'X' : 'O';
        
        
        if(choice == 1 && Box[0] == '1')
        {
            Box[0] = mark;
        }
        else if(choice == 2 && Box[1] == '2')
        {
            Box[1] = mark;
        }
        else if(choice == 3 && Box[2] == '3')
        {
            Box[2] = mark;
        }
        else if(choice == 4 && Box[3] == '4')
        {
            Box[3] = mark;
        }
        else if(choice == 5 && Box[4] == '5')
        {
            Box[4] = mark;
        }
        else if(choice == 6 && Box[5] == '6')
        {
            Box[5] = mark;
        }
        else if(choice == 7 && Box[6] == '7')
        {
            Box[6] = mark;
        }else if(choice == 8 && Box[7] == '8')
        {
            Box[7] = mark;
        }
        else if(choice == 9 && Box[8] == '9')
        {
            Box[8] = mark;
        }
        else
        {
            printf("Invalid option !");
            --player;
        }
        ++player;
        i = checkwin(Box);
        
    }while(i == -1);
    
    drawBox(Box);
    if(i == 1)
    {
        printf("==>Player %d Wom the Game ", --player);
    }
    else
    {
        printf("==>Game Draw");
    }
    return 0;
}
