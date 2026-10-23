#include<stdio.h>
#include<math.h>
#include <string.h>

int main (){
	printf("2^3 = %f\n", pow (2.0, 3.0));
	//^math.h, yang di dalam "" itu stringnya, yg pow itu code buat pangkatnya
	
	char str1[]="Sample String";
	char str2[40];
	char str3[40];
	//di dalam [] itu jumlah char
	strcpy (str2, str1);
	strcpy (str3,"copy successful");
	//strcpy itu string copy
	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1,str2,str3);
	//^string.h
	
	int x;
	float f = 3.134;
	x = (int) f;
	printf("x = %d\n", x);
	
	float z = 1.9047;
	printf("y = %.2f\n", 3.12345);
	printf("z = %.3f\n", z);
	//%.3f itu maksudnya 3 angka di belakang koma
	
	char c [10];
	scanf("%[^\n]", &c); getchar();
	//getchar kurleb sama kayak \n buat scanf
	printf("%s", c);
	return 0;
}
