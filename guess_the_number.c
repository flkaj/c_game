#include <stdio.h>
#include <time.h>
int main_dshgo(){
    srand(time(NULL));
    int num;
    int answer = rand()%100+1;
    int chance = 5;
    printf("%d\n", answer);
    while(chance > 0){
        printf("%d chance left\n", chance--);
        printf("guess the number! (1 ~ 100)\n");
        printf("type the number that your guessing!:");
        scanf("%d", &num);

        if(num > answer){
          
            printf("\nthe number is lower\n");
        }
        else if(num < answer){
           
            printf("\nthe number is higher\n");
        }
        else if(num == answer){
            printf("\nthe number you guessed is correct!!\n");
            break;
        }
        else{
            printf("\nerror\n");
        }
        if(chance == 0){
            printf("you lost your chace, GAME OVER :(");
            break;
        }
    }
    
    return 0;
}
