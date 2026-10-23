#include<stdio.h>
#include<string.h>

int main(){
	FILE *fp = fopen("testdataD.in", "r");
	
	int t;
	fscanf(fp, "%d", &t);
	
	for(int i = 1 ; i <= t ; i ++){
		char string[105];
		fscanf(fp, "%s", string);
		
		int changes;
		fscanf(fp, "%d", &changes);
		for(int j = 0 ; j < changes ; j++){
			char a, b;
			int counta;
			int countb;
			fscanf(fp, "%c %c", &a, &b);
			for(int m = 0 ; m < strlen(string) ; m++){
				if(string[m] == a){
					counta++;
				} else if(string[m] == b){
					countb++;
				}
			}
		}
		printf("%c %d", a, counta);
	}
	
	
	fclose(fp);
	return 0;
}
