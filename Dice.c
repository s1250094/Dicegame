#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  srand((unsigned int)time(NULL));
  int d1,d2;

  d1 = rand()%6+1;
  d2 = rand()%6+1;

  printf("Rolling the dice...\nDie 1: %d\nDie 2: %d\nTotal value: %d\n",d1,d2
	 ,d1+d2);

  if(d1+d2 > 7)
    printf("You won\n");
  else printf("You lost\n");
  
  return 0;
}
