#include<stdio.h>
#include<string.h>
int play_scrabble(char player[100]);

int main()
{
    char player1[100];
    char player2[100];
    char player[100];


    printf ("PLAYER 1 : \n");
    scanf ("%s",player1);
    strupr (player1);


    printf ("PLAYER 2 : \n");
    scanf ("%s",player2);
    strupr (player2);


    int result1 = play_scrabble(player1);
    int result2 = play_scrabble(player2);

    
    if(result1 > result2)
        printf("PLAYER 1 WON!: %d points \n",result1);
       

    else if(result1 < result2)
        printf("PLAYER 2 WON!: %d points \n",result2);
       

    else
        printf("TIE player 1: %d points player 2:%d points",result1,result2);
       

}

int play_scrabble(char player[100])
{
    int i, result=0;
    int n = strlen(player);

    for(i = 0 ; i < n ; i++){
        switch(player[i]){
            case 'A' :  result+= 1; break;
            case 'B' :  result+= 3; break;
            case 'C' :  result+= 3; break;
            case 'D' :  result+= 2; break;
            case 'E' :  result+= 1; break;
            case 'F' :  result+= 4; break;
            case 'G' :  result+= 2; break;
            case 'H' :  result+= 4; break;
            case 'I' :  result+= 1; break;
            case 'J' :  result+= 8; break;
            case 'K' :  result+= 5; break;
            case 'L' :  result+= 1; break;
            case 'M' :  result+= 3; break;
            case 'N' :  result+= 1; break;
            case 'O' :  result+= 1; break;
            case 'P' :  result+= 3; break;
            case 'Q' :  result+= 10; break;
            case 'R' :  result+= 1; break;
            case 'S' :  result+= 1; break;
            case 'T' :  result+= 1; break;
            case 'U' :  result+= 1; break;
            case 'V' :  result+= 4; break;
            case 'W' :  result+= 4; break;
            case 'X' :  result+= 8; break;
            case 'Y' :  result+= 4; break;
            case 'Z' :  result+= 10; break;
        }

    }
    return  result;
}

     

