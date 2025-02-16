#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char rotate(char p[100] , int k , char c[100]);


int main(int argc , char *argv[]){

    char p[100];
    char c[100];

    //checking for valid command line arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar.c key \n");
        return 1;
    }  
    
    //checking for correct value of K 
    for(int i=0 ; argv[1][i] != '\0' ; i++ ){

        if(!(argv[1][i] >= '0' && argv[1][i] <= '9') ) 
        {
            printf("Usage: ./caesar.c key \n");
            return 1;
        }

    }

    //converting argv from string to integer after checking if numeric digits were entered
    int k = atoi(argv[1]);


    //handling int overflow of K or wrapping back A to Z
    k %= 26;


    printf("plaintext:  ");
    fgets(p,sizeof(p),stdin);
     

    //calling rotate funtion
    rotate(p,k,c);
    printf("ciphertext: %s\n",c);


}


char rotate(char p[100] , int k , char c[100])
{
    for( int i=0 ; p[i] != '\0' ; i++ )
    {

        if(p[i] >= 'A' && p[i] <= 'Z')
        {
            //uppercases 
            c[i]= 'A' + (p[i] - 'A' + k ) % 26;
        }

        else if (p[i] >= 'a' && p[i] <= 'z')
        {
            //lowercase
            c[i]= 'a' + (p[i] - 'a' + k) % 26;
        }
        
        else
        {
            c[i] = p[i];
        }
    } 
    c[strlen(p)]= '\0';  
}