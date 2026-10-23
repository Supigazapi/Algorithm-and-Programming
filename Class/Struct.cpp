#include<stdio.h>
#include<string.h>

struct Comic{
	char title[100];
	int year;
	char publisher [100];
	float price;
	int stock;
};

struct Comic comic[100];
int count = 3;

void clear(){
	for (int i=0; i<25; i++) puts("");
}

void ComicList(){
	printf ("Comic Lists\n");
	printf ("-----------\n");
	for(int i=0 ; i<count ; i++){
		printf("%2d | %-25s | %d | %-15s | $%-7.2f | %d\n", i+1, comic[i].title, comic[i].year, comic[i].publisher, comic[i].price, comic[i].stock);
	}
}

int main(){
	int action;
	strcpy(comic[0].title, "Immortal Hulk");
	comic[0].year = 2018;
	strcpy(comic[0].publisher, "Marvel Comics");
	comic[0].price = 4.99;
	comic[0].stock = 20;
	
	strcpy(comic[1].title, "Future State");
	comic[1].year = 2021;
	strcpy(comic[1].publisher, "DC Comics");
	comic[1].price = 5.99;
	comic[1].stock = 30;
	
	strcpy(comic[2].title, "The Department of Truth");
	comic[2].year = 2020;
	strcpy(comic[2].publisher, "Image Comics");
	comic[2].price = 3.99;
	comic[2].stock = 7;
	
	do{
		clear();
		printf("Bee Comic Shop - Administrator\n");
		printf(" -----------------------------\n") ;
		printf("1. View Comic\n");
		printf("2. Add Item\n");
		printf("3. Update Item\n");
		printf("4. Delete Item\n");
		printf("5. Exit\n");
		printf("Action: ");
		scanf ("%d", &action); getchar();
		
		if(action == 1){
			clear ();
			ComicList();
			printf("Press enter to back to main menu\n"); getchar();
		} else if (action == 2){
			clear();
			printf("Input comic name [5-30]: ");
			scanf ("%[^\n]", &comic[count].title); getchar();
			printf("Input published year: ");
			scanf ("%d", &comic[count].year); getchar();
			printf("Input publisher name: ");
			scanf ("%[^\n]", &comic[count].publisher); getchar();
			printf("Input price in USD: $");
			scanf ("%f", &comic[count].price);
			getchar();
			printf("Input quantity [0..100]: ");
			scanf ("%d", &comic[count].stock); getchar();
			count++;
			puts ("");
			puts("New comic has been added to database!"); getchar();
		} else if (action == 4){
			clear();
			
			if(count < 0){
				printf("No comic in the inventory!");
			} else {
				ComicList();
		
				int index_delete;
				printf ("Comic to be deleted [1..%d]: ", count);
				scanf ("%d", &index_delete); getchar();
				index_delete--;
				
				for (int i=index_delete; i<count-1;i++){
				struct Comic temp = comic[i];
				comic[i] = comic[i+1];
				comic[i+1] = temp;
				}}
				count--;
				puts("\nYour comic has been deleted!");
		} else if (action == 5){
			printf("Closing the application...");
		}
	} while(action != 5);
		
	return 0;
}
