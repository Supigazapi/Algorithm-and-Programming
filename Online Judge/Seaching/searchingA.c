#include<stdio.h>
#include<string.h>

int main(){
	FILE *fp;
	fp = fopen("testdata.in","r"); 
	int i, t, j;
	char asli[101][51],singkatan[101][51];
	fscanf(fp,"%d\n",&t);
	for(i=0 ; i<t ; i++){
		fscanf(fp," %[^#]#%[^\n]\n",singkatan[i],asli[i]);
	}
	
	int n;
	fscanf(fp,"%d\n",&n);
	
	for(i=0 ; i<n ; i++){
		char temp[105];
		char *token;
		char string[105][105];
		
		fscanf(fp,"%[^\n]\n",temp);
		token = strtok(temp, " ");
		
		int a=0;
		while(token != '\0'){
			strcpy(string[a], token);
			for(j=0 ; j<t ; j++){
				if(strcmp(string[a],singkatan[j])==0){
					strcpy(string[a],asli[j]);
					break;
				}
			}
			a++;
			token = strtok(NULL," ");
		}
		printf("Case #%d:\n",i+1);
		for(j=0 ; j<a ; j++){
			printf("%s",string[j]);
			if(j==a-1){
				printf("\n");
			}
			else{
				printf(" ");
			}
		}
	}
	fclose(fp);
	return 0;
}
