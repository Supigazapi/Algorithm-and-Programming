#include<stdio.h>
#include<string.h>

int main(){
	FILE *fp;
	fp = fopen("testdata.in","r");
	
	int n,t,i,j;
	char nim[101][11],name[101][21],question[101][11];
	fscanf(fp, "%d\n",&n);
	for(i=0 ; i<n ; i++){
		fscanf(fp," %s %s", nim[i],name[i]);
	}
	fscanf(fp, " %d\n", &t);
	for(i=0 ; i<t ; i++){
		int flag=0;
		fscanf(fp, " %s\n",question[i]);
		for(j=0 ; j<n ; j++){
			if(strcmp(question[i],nim[j])==0){
				printf("Case #%d: %s\n",i+1,name[j]);
				flag=1;
				break;
			}	
		}
		if(flag==0){
			printf("Case #%d: N/A\n",i+1);
		}
	}
	fclose(fp);
	return 0;
}
