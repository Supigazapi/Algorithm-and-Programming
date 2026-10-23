#include<stdio.h>
#include<string.h>

int main(){
	char s[105];
	char temp;
	scanf("%s", s);
	int len = strlen(s);
	for(int i = 0 ; i < len/2; i++){
		temp = s[i];
		s[i] = s[len-i-1];
		s[len-i-1] = temp;
	}
	
	for(int i = 0 ; i < strlen(s) ; i++){
		if(s[i] <= 'z' && s[i] >= 'a'){
			s[i] = s[i] - 'a' + 'A';
		} else if(s[i] <= 'Z' && s[i] >= 'A'){
			s[i] = s[i] - 'A' + 'a';
		}
	}
	printf("%s", s);
	return 0;
}
