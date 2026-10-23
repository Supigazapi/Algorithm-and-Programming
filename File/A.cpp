#include<stdio.h>
#include<string.h>

struct data{
	char name[100];
	char tree[100];
} items[105];


int main(){
	FILE *fp = fopen("testdataA.in", "r");
	
	int count;
	fscanf(fp, "%d\n", &count);
	
	for(int i = 0; i < count ; i++){
		fscanf(fp, "%[^#]#%[^\n]\n", items[i].name, items[i].tree);
	}
	
	int search;
	fscanf(fp, "%d\n", &search);
	
	for(int i = 1 ; i <= search ; i++){
		int index = -1;
		char temp[100];
		fscanf(fp, "%[^\n]\n", temp);
		
		for(int j = 0 ; j < count ; j++){
			if(strcmp(items[j].name, temp) == 0){
				index = j;
				break;
			}
		}
		printf("Case #%d: ", i);
		if(index == -1){
			printf("N/A\n");
		} else {
			printf("%s\n", items[index].tree);
		}
		
	}
	fclose(fp);
	return 0;
}
