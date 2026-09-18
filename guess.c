#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int secreat, guess, tries = 0;

	srand(time(NULL));
	secreat = rand() % 100 + 1;

	printf("我想到了一个1~100 之间的数字， 你来猜： \n");

	do {
	      printf("请输入你的猜想: ");
	      scanf("%d", &guess);
	      tries++;
	
	      if (guess > secreat) {
		  printf("太大了！\n");
	      }else if (guess < secreat) {
		  printf("太小了！\n");
	      }else {
		  printf("恭喜！你用了 %d 次猜对了，答案是 %d。\n", tries, secret);
	      }
	}while (guess !=secret);
	return 0;
}

		  