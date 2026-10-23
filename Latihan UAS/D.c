#include <stdio.h>
#include <string.h>

int main(){
	FILE *fp;
	fp = fopen("testdata.in","r");
	
	int tc, i;
	fscanf(fp, " %d", &tc);
	
	for(i=0 ; i<tc ; i++){
		char x[110];
		fscanf(fp, " %[^\n]", x);
		int len = strlen(x);
		int counter[26]={0};
		int n, j;
		
		fscanf(fp, " %d", &n);
		int cek[26]={0};
		
		for(j=0 ; j<n ; j++){
			char a,b;
			fscanf(fp, " %c %c",&a,&b);
			
			if(cek[a-'A']==0){
				int k;
				for(k=0 ; k<len ; k++){
					if(x[k]==a){
						x[k]=b;
					}
				}
				cek[a-'A'] = 1;
			}
		}
		
		for(j=0 ; j<len ; j++){
			if(x[j] >= 'A' && x[j] <= 'Z'){
				counter[x[j] - 'A']++;
			}
		}
		
		for(j=0 ; j<26 ; j++){
			if(counter[j] != 0){
				printf("%c %d\n",'A'+j, counter[j]);
			}
		}
	}
	fclose(fp);
	return 0;
}
