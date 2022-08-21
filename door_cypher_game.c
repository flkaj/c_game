#include <stdio.h>
#include <time.h>



int fnum(int level);

void question(int i, int num1, int num2);


void correct(int c);


void game_over(int c);





int main(void) {
  srand(time(NULL));
  int c = 0;

  for (int i = 1 ; i <= 5 ; i++) 
  {
    int num1 = fnum(i); // i 변수를 넣어서 단계를 늘림
    int num2 = fnum(i);

    // printf("#****** %d 번째 비밀번호******#/n/n/n #****** %d*%d = ?
    // ******#");
    question(i, num1, num2);
    printf("(if you want to end the game press [0])\n\n");

    int answer;
    printf("your answer >> ");
    scanf(" %d", &answer);

    if (answer == 0) {
      printf("Ending game\n");
      exit(0);
      } 
    else if (answer == num1 * num2) {
     // printf("%d번째 비밀번호를 얻게 되었어요!\n\n", c++);
      correct(++c);
    }

    else {
     // printf("%d번째 비밀번호만 얻게되었어요 :(\n\n", c);
      game_over(c);
      printf("\ngame over ....  :(\n");
      exit(0);
    }
  }

  printf("\n모든 비밀번호를 얻게 되었어요!\n");

  return 0;
}






void question(int i, int num1, int num2) {
  printf("\n\n\n ______________________\n\n\n#**** %d 번째 비밀번호****#\n\n #**** %d x %d = ? ****#\n\n", i, num1, num2);
}



int fnum(int level) { return rand() % (level * 9) + 1; }


void correct(int c){ printf("\n%d 번째 비밀번호를 얻었어요! :)\n",c);}


void game_over(int c){ printf("\n%d 번까지의 비밀번호만 얻었어요... :(\n", c);}
