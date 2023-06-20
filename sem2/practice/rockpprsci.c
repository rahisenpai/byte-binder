#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rps(char you, char comp){
    // 0 for draw, 1 for win, -1 for lose
    if (you == comp){
        return 0;
    }
    else if ((you=='r' && comp=='s') || (you=='s' && comp=='p') || (you=='p' && comp=='r')){
        return 1;
    }
    else{
        return -1;
    }
}

int main(){
    char you,comp;
    srand(time(0));
    int number = rand() % 100 + 1;
    if (number < 33){
        comp = 'r';
    }
    else if (number < 66){
        comp = 's';
    }
    else{
        comp = 'p';
    }
    //printf("%c\n",comp); 
    printf("Enter r/p/s: ");
    scanf("%c",&you);   
    int result = rps(you,comp);
    if (result == 0){
        printf("game drawn\n");
    }
    else if (result == 1){
        printf("you win\n");
    }
    else{
        printf("computer wins\n");
    }
    //printf("You chose %c and the computer chose %c\n", you, comp);

    return 0;
}