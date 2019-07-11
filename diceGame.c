#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int i;
int dice[2];
char name[10];

void diceGame(){
  printf("Rolling the dice...\n");
  for(i = 0; i < 2; i++) {
    dice[i] = rand() % 6 + 1;
    printf("Die %d: %d\n", i+1, dice[i]);
  }
  sleep(1);
  printf("Total value: %-3d\n", dice[0] + dice[1]);
  if(dice[0] + dice[1] > 7) printf("%s, won\n", name);
  else printf("%s, lost\n", name);

}

void greet(){
  printf("What is your name?\n>");
  scanf("%s", name);
  printf("Hello, %s !\n", name);
}


int main(){
  srand((unsigned int)time(NULL));
  greet();
  diceGame();
  printf("\nNext Battle !\n");
  diceGame();
  return 0;
}
  
