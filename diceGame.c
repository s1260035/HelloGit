#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int i;

void diceGame(){
  int dice[2];

  srand((unsigned int)time(NULL));
  printf("Rolling the dice...\n");
  for(i = 0; i < 2; i++) {
    dice[i] = rand() % 6 + 1;
    printf("Die %d: %d\n", i+1, dice[i]);
  }
  printf("Total value: %-3d\n", dice[0] + dice[1]);

}


int main(){
  diceGame();
  return 0;
}
  