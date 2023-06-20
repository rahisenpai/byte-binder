#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int no, guess, count=1;
    srand(time(0));
    no = rand() % 100 + 1; // random number between 1 and 100
    //printf("the number is %d\n", no);

    do{
        printf("enter your guess bw 1-100: ");
        scanf("%d", &guess);
        if (guess > no){
            printf("try lower number\n");
        }else if (guess < no){
            printf("try upper number\n");
        }else{
            printf("you guessed in %d attempts\n", count);
        }
        count++;       
    } while (guess!=no);
    
    return 0;
}