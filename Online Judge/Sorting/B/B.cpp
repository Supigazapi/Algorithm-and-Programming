#include<stdio.h>
#include<string.h>
struct Plant{
	int num;
	char name[101];
} plant[1001];


int main(){
	FILE *fp = fopen("testdata.in", "r");
	int t;
	fscanf(fp, "%d", &t);
	while(!feof(fp)){
		for(int i=0 ; i<t ; i++){
			fscanf(fp, "%d#%[^\n]", &plant[i].num, plant[i].name);
		}
	}
	
	for(int i = 0; i < t - 1; i++){
        for(int j = 0; j < t-1-i; j++){
            if(strcmp(plant[j].name, plant[j+1].name) > 0){
            	struct Plant temp = plant[j];
			    plant[j] = plant[j+1];
			    plant[j+1] = temp;
            }
        }
    }
    
    for(int i = 0 ; i < t ; i++){
	    printf("%d %s\n", plant[i].num, plant[i].name);    	
	}
	
	fclose(fp);
	return 0;
}
