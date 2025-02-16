#include<stdio.h>
#include<string.h>
#include<math.h>


int count_letters(char str[]);
int count_words(char str[]);
int count_sentences(char str[]);
void cal_grade_level(char str[] , int letters , int words , int sentences);


int main()
{
char str[1000];


printf("enter text:\n");
fgets(str , sizeof(str) , stdin);


int letters = count_letters(str);
int words = count_words(str);
int sentences = count_sentences(str);


cal_grade_level(str , letters , words , sentences);
return 0;


}
int count_letters(char str[]){
    int i;
    int count = 0;
    for(i=0;i<strlen(str);i++){
        if( (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i]<='z') ) {
            count++;
    }
}
return count;
}


int count_words(char str[]){
    int i;
    int count = 0;
    for(i=0;i<strlen(str);i++){
        if(str[i] == ' '){
            count += 1;
        }
    }
    return count+1;

}


int count_sentences(char str[]){
    int i;
    int count =0;
    for(i = 0 ; i < strlen(str) ; i++){
        if(str[i] == '.' || str[i] == '?' || str[i] == '!'){

            count += 1;
        }
    }
    return count;
}


void cal_grade_level(char str[] , int letters , int words , int sentences){

    float L = ((float) letters / words) * 100;
    float S = ((float) sentences / words) * 100;


    int index = 0.0588 * L - 0.296 * S - 15.8;


    if (index < 1) {
        printf("Before Grade 1\n");
    } 

    else if (index >= 16) {
        printf("Grade 16+\n");
    } 

    else {
        printf("Grade %.0f \n", round(index)); 
    }
}