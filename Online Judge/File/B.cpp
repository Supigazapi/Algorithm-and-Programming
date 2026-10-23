#include<stdio.h>
#include<string.h>

int main(){
	FILE *fp = fopen("testdataB.in", "r");
	int test;
	fscanf(fp, "%d\n", &test);
	for(int j = 1 ; j <= test ; j++){
		int rotate;
		fscanf(fp, "%d\n", &rotate);
		
		char sentence[1005];
		fscanf(fp, "%[^\n]", sentence);
		
		for(int i = 0 ; i < strlen(sentence) ; i++){
			if(sentence[i] == '0'){
				sentence[i] = 'O';
			} else if(sentence[i] == '1'){
				sentence[i] = 'I';
			} else if(sentence[i] == '3'){
				sentence[i] = 'E';
			} else if(sentence[i] == '4'){
				sentence[i] = 'A';
			} else if(sentence[i] == '5'){
				sentence[i] = 'S';
			} else if(sentence[i] == '6'){
				sentence[i] = 'G';
			} else if(sentence[i] == '7'){
				sentence[i] = 'T';
			} else if(sentence[i] == '8'){
				sentence[i] = 'B';
			}
			
			if(sentence[i] != ' '){
				sentence[i] -= rotate;
				if(sentence[i] < 'A'){
					sentence[i] += 26;
				}
			}
		}
		printf("Case #%d: %s\n", j, sentence);
	}
	
	fclose(fp);
	return 0;
}
