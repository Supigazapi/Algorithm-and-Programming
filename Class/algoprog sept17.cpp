#include<stdio.h>

int main (){
	int bil, abs;
	bil = 50;
	abs = (bil > 0) ? bil : - bil;
	printf("%d \n", bil);
	bil = - 59;
	abs = (bil > 0) ? bil : - bil;
	printf("%d \n", bil);
	return (0);
}
