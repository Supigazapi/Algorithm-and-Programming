#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

struct data{ //Multi-line variable (struct)
	char location1[100];
	char location2[100];
	int price;
	int rooms;
	int bathroom;
	int carpark;
	char type[100];
	char furnish[100];
} arr[5000];

int count = 0;

void read_file(){ //Read data from file 'file.csv'
    FILE *fp = fopen("file.csv", "r");
    char header[256];
    fgets(header, sizeof(header), fp); // Skip the header row
	
	if(fp == NULL){
		printf("File not found!\n");
		exit(1);
	}
	while(!feof(fp)){ //While not end of file, will be reading the code until end of file
		fscanf(fp, "%[^,],%[^,],%d,%d,%d,%d,%[^,],%[^\n]\n", arr[count].location1, arr[count].location2, 
        &arr[count].price, &arr[count].rooms, &arr[count].bathroom, &arr[count].carpark, arr[count].type, arr[count].furnish);
		count++;
	}
    fclose(fp);
}

void list(int rows){ //Showing (rows) number of lists of data
	printf("%-20s %-20s %-10s %-10s %-10s %-10s %-10s %-10s\n", "Location", "City", "Price", "Rooms", 
			"Bathroom",	"Carpark", "Type", "Furnish");
			for(int i=0 ; i<rows ; i++){
				printf("%-20s %-20s %-10.0d %-10d %-10d %-10d %-10s %-10s\n", arr[i].location1, arr[i].location2, 
				arr[i].price, arr[i].rooms, arr[i].bathroom, arr[i].carpark, arr[i].type, arr[i].furnish);
			}
}

void swap_arr(struct data *a, struct data *b){ //To help in sorting, swapping between data a and data b
    struct data temp = *a;
    *a = *b;
    *b = temp;
}

void searchData(){ //Searching data according to column
	char column[256];
	char query[256];
	long long int intquery;
	int input = 0;
		
	printf("Choose column: ");
	scanf("%[^\n]", column); getchar();
    if(strcmp(column, "Location") == 0){
        printf("What data do you want to find? ");
		scanf("%[^\n]", query); getchar();
        for(int i=0; i<count; i++){
            if(strcmp(query, arr[i].location1) == 0){
                input++;
            }
        }
        if(input > 0){
            printf("Data found. Detail of data:\n");
            printf("%-20s %-20s %-10s %-10s %-10s %-10s %-10s %-10s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");

            for(int i=0; i<count; i++){
                if(strcmp(query, arr[i].location1) == 0){
                    printf("%-20s %-20s %-10d %-10d %-10d %-10d %-10s %-10s\n", arr[i].location1, arr[i].location2, arr[i].price, arr[i].rooms, arr[i].bathroom, arr[i].carpark, arr[i].type, arr[i].furnish);
                }
            }
            input = 0;
        }else{
            printf("Data not found!\n");
        }
    } else if(strcmp(column, "City") == 0){
        printf("What data do you want to find? ");
		scanf("%[^\n]", query); getchar();
        for(int i=0; i<count; i++){
            if(strcmp(query, arr[i].location2) == 0){
                input++;
            }
        }
        if(input > 0){
            printf("Data found. Detail of data:\n");
            printf("%-20s %-20s %-10s %-10s %-10s %-10s %-10s %-10s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");

            for(int i=0; i<count; i++){
                if(strcmp(query, arr[i].location2) == 0){
                    printf("%-20s %-20s %-10d %-10d %-10d %-10d %-10s %-10s\n", arr[i].location1, arr[i].location2, arr[i].price, arr[i].rooms, arr[i].bathroom, arr[i].carpark, arr[i].type, arr[i].furnish);
                }
            }
            input = 0;
        }else{
            printf("Data not found!\n");
        }
    } else if(strcmp(column, "Price") == 0){
        char input[100];
        printf("What data do you want to find? ");
		fgets(input, sizeof(input), stdin);

        int is_valid_integer = 1;
        for(int i=0; input[i] != '\0' && input[i] != '\n'; i++){
            if(!isdigit(input[i]) && input[i] != '-'){
                is_valid_integer = 0;
                break;
            }
        }

        if(is_valid_integer){
            long long queryint = atoll(input);
            printf("Data found. Detail of data:\n");
            printf("%-20s %-20s %-10s %-10s %-10s %-10s %-10s %-10s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
            for(int i=0; i<count; i++){
                if(arr[i].price == queryint){
                    printf("%-20s %-20s %-10d %-10d %-10d %-10d %-10s %-10s\n", arr[i].location1, arr[i].location2, arr[i].price, arr[i].rooms, arr[i].bathroom, arr[i].carpark, arr[i].type, arr[i].furnish);
                }
            }
        } else {
            printf("Data not found!");
        }
    } else if(strcmp(column, "Rooms") == 0){
        char input[100];
        printf("What data do you want to find? ");
		fgets(input, sizeof(input), stdin);

        int is_valid_integer = 1;
        for(int i=0; input[i] != '\0' && input[i] != '\n'; i++){
            if(!isdigit(input[i]) && input[i] != '-'){
                is_valid_integer = 0;
                break;
            }
        }

        if(is_valid_integer){
            long long queryint = atoll(input);
            printf("Data found. Detail of data:\n");
            printf("%-20s %-20s %-10s %-10s %-10s %-10s %-10s %-10s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
            for(int i=0; i<count; i++){
                if(arr[i].rooms == queryint){
                    printf("%-20s %-20s %-10d %-10d %-10d %-10d %-10s %-10s\n", arr[i].location1, arr[i].location2, arr[i].price, arr[i].rooms, arr[i].bathroom, arr[i].carpark, arr[i].type, arr[i].furnish);
                }
            }
        } else {
            printf("Data not found!");
        }
    } else if(strcmp(column, "Bathrooms") == 0){
        char input[100];
        printf("What data do you want to find? ");
		fgets(input, sizeof(input), stdin);

        int is_valid_integer = 1;
        for(int i=0; input[i] != '\0' && input[i] != '\n'; i++){
            if(!isdigit(input[i]) && input[i] != '-'){
                is_valid_integer = 0;
                break;
            }
        }

        if(is_valid_integer){
            long long queryint = atoll(input);
            printf("Data found. Detail of data:\n");
            printf("%-20s %-20s %-10s %-10s %-10s %-10s %-10s %-10s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
            for(int i=0; i<count; i++){
                if(arr[i].bathroom == queryint){
                    printf("%-20s %-20s %-10d %-10d %-10d %-10d %-10s %-10s\n", arr[i].location1, arr[i].location2, arr[i].price, arr[i].rooms, arr[i].bathroom, arr[i].carpark, arr[i].type, arr[i].furnish);
                }
            }
        } else {
            printf("Data not found!");
        }
    } else if(strcmp(column, "Carparks") == 0){
        char input[100];
        printf("What data do you want to find? ");
		fgets(input, sizeof(input), stdin);

        int is_valid_integer = 1;
        for(int i=0; input[i] != '\0' && input[i] != '\n'; i++){
            if(!isdigit(input[i]) && input[i] != '-'){
                is_valid_integer = 0;
                break;
            }
        }

        if(is_valid_integer){
            long long queryint = atoll(input);
            printf("Data found. Detail of data:\n");
            printf("%-20s %-20s %-10s %-10s %-10s %-10s %-10s %-10s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
            for(int i=0; i<count; i++){
                if(arr[i].carpark == queryint){
                    printf("%-20s %-20s %-10d %-10d %-10d %-10d %-10s %-10s\n", arr[i].location1, arr[i].location2, arr[i].price, arr[i].rooms, arr[i].bathroom, arr[i].carpark, arr[i].type, arr[i].furnish);
                }
            }
        } else {
            printf("Data not found!");
        }
    } else if(strcmp(column, "Type") == 0){
        printf("What data do you want to find? ");
		scanf("%[^\n]", query); getchar();
        for(int i=0; i<count; i++){
            if(strcmp(query, arr[i].type) == 0){
                input++;
            }
        }
        if(input > 0){
            printf("Data found. Detail of data:\n");
            printf("%-20s %-20s %-10s %-10s %-10s %-10s %-10s %-10s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");

            for(int i=0; i<count; i++){
                if(strcmp(query, arr[i].type) == 0){
                    printf("%-20s %-20s %-10d %-10d %-10d %-10d %-10s %-10s\n", arr[i].location1, arr[i].location2, arr[i].price, arr[i].rooms, arr[i].bathroom, arr[i].carpark, arr[i].type, arr[i].furnish);
                }
            }
            input = 0;
        } else{
            printf("Data not found!\n");
        }
    } else if(strcmp(column, "Furnish") == 0){
        printf("What data do you want to find? ");
		scanf("%[^\n]", query); getchar();
        for(int i=0; i<count; i++){
            if(strcmp(query, arr[i].furnish) == 0){
                input++;
            }
        }
        if(input > 0){
            printf("Data found. Detail of data:\n");
            printf("%-20s %-20s %-10s %-10s %-10s %-10s %-10s %-10s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");

            for(int i=0; i<count; i++){
                if(strcmp(query, arr[i].furnish) == 0){
                    printf("%-20s %-20s %-10d %-10d %-10d %-10d %-10s %-10s\n", arr[i].location1, arr[i].location2, arr[i].price, arr[i].rooms, arr[i].bathroom, arr[i].carpark, arr[i].type, arr[i].furnish);
                }
            }
            input = 0;
        } else{
            printf("Data not found!\n");
        }
    }
}

void sortData(){ //Sorting data according to column, can be ascending or descending
	char col[100];
	char ori[100];
	printf("Choose column: ");
	scanf("%s", &col);
	printf("Sort ascending (asc) or descending (desc): ");
	scanf("%s", &ori);
	int n = 10;
	if(strcmp(col, "Location") == 0){
		if(strcmp(ori, "asc") == 0){
			for(int j = 1; j <= count; j++){
				for(int i = count - 1; i >= j; i--){
		            if(strcmp(arr[i].location1, arr[i-1].location1) < 0){
		                swap_arr(&arr[i], &arr[i-1]);
		            }
		        }
		    }
		    list(n);
		} else if (strcmp(ori, "desc") == 0){
			for(int j = 1; j <= count; j++){
				for(int i = count - 1; i >= j; i--){
		            if(strcmp(arr[i].location1, arr[i-1].location1) > 0){
		                swap_arr(&arr[i], &arr[i-1]);
		            }
		        }
		    }
		    list(n);
		} else {
			printf("Invalid Input!\n");
		}
	} else if(strcmp(col, "City") == 0){
		if(strcmp(ori, "asc") == 0){
			for(int j = 1; j <= count; j++){
				for(int i = count - 1; i >= j; i--){
		            if(strcmp(arr[i].location2, arr[i-1].location2) < 0){
		                swap_arr(&arr[i], &arr[i-1]);
		            }
		        }
		    }
		    list(n);
		} else if (strcmp(ori, "desc") == 0){
			for(int j = 1; j <= count; j++){
				for(int i = count - 1; i >= j; i--){
		            if(strcmp(arr[i].location2, arr[i-1].location2) > 0){
		                swap_arr(&arr[i], &arr[i-1]);
		            }
		        }
		    }
		    list(n);
		} else {
			printf("Invalid Input!\n");
		}
	} else if(strcmp(col, "Price") == 0){
		if(strcmp(ori, "asc") == 0){
			for(int s = 1; s <= count - 1; s++){
	        	for(int i = count - 1; i >= s; i--){
	            	if(arr[i].price < arr[i-1].price){
	                	swap_arr(&arr[i], &arr[i-1]);
	            	}
	            }
        	}
		    list(n);
		} else if (strcmp(ori, "desc") == 0){
			for(int s = 1; s <= count - 1; s++){
	        	for(int i = count - 1; i >= s; i--){
	            	if(arr[i].price > arr[i-1].price){
	                	swap_arr(&arr[i], &arr[i-1]);
	            	}
        		}
    		}
		    list(n);
		} else {
			printf("Invalid Input!\n");
		}
	} else if(strcmp(col, "Rooms") == 0){
		if(strcmp(ori, "asc") == 0){
			for(int s = 1; s <= count - 1; s++){
	        	for(int i = count - 1; i >= s; i--){
	            	if(arr[i].rooms < arr[i-1].rooms){
	                	swap_arr(&arr[i], &arr[i-1]);
	            	}
	            }
        	}
		    list(n);
		} else if (strcmp(ori, "desc") == 0){
			for(int s = 1; s <= count - 1; s++){
	        	for(int i = count - 1; i >= s; i--){
	            	if(arr[i].rooms > arr[i-1].rooms){
	                	swap_arr(&arr[i], &arr[i-1]);
	            	}
        		}
    		}
		    list(n);
		} else {
			printf("Invalid Input!\n");
		}
	} else if(strcmp(col, "Bathrooms") == 0){
		if(strcmp(ori, "asc") == 0){
			for(int s = 1; s <= count - 1; s++){
	        	for(int i = count - 1; i >= s; i--){
	            	if(arr[i].bathroom < arr[i-1].bathroom){
	                	swap_arr(&arr[i], &arr[i-1]);
	            	}
	            }
        	}
		    list(n);
		} else if (strcmp(ori, "desc") == 0){
			for(int s = 1; s <= count - 1; s++){
	        	for(int i = count - 1; i >= s; i--){
	            	if(arr[i].bathroom > arr[i-1].bathroom){
	                	swap_arr(&arr[i], &arr[i-1]);
	            	}
        		}
    		}
		    list(n);
		} else {
			printf("Invalid Input!\n");
		}
	} else if(strcmp(col, "Carpark") == 0){
		if(strcmp(ori, "asc") == 0){
			for(int s = 1; s <= count - 1; s++){
	        	for(int i = count - 1; i >= s; i--){
	            	if(arr[i].carpark < arr[i-1].carpark){
	                	swap_arr(&arr[i], &arr[i-1]);
	            	}
	            }
        	}
		    list(n);
		} else if (strcmp(ori, "desc") == 0){
			for(int s = 1; s <= count - 1; s++){
	        	for(int i = count - 1; i >= s; i--){
	            	if(arr[i].carpark > arr[i-1].carpark){
	                	swap_arr(&arr[i], &arr[i-1]);
	            	}
        		}
    		}
		    list(n);
		} else {
			printf("Invalid Input!\n");
		}
	} else if(strcmp(col, "Type") == 0){
		if(strcmp(ori, "asc") == 0){
			for(int j = 1; j <= count; j++){
				for(int i = count - 1; i >= j; i--){
		            if(strcmp(arr[i].type, arr[i-1].type) < 0){
		                swap_arr(&arr[i], &arr[i-1]);
		            }
		        }
		    }
		    list(n);
		} else if (strcmp(ori, "desc") == 0){
			for(int j = 1; j <= count; j++){
				for(int i = count - 1; i >= j; i--){
		            if(strcmp(arr[i].type, arr[i-1].type) > 0){
		                swap_arr(&arr[i], &arr[i-1]);
		            }
		        }
		    }
		    list(n);
		} else {
			printf("Invalid Input!\n");
		}
	} else if(strcmp(col, "Furnish") == 0){
		if(strcmp(ori, "asc") == 0){
			for(int j = 1; j <= count; j++){
				for(int i = count - 1; i >= j; i--){
		            if(strcmp(arr[i].furnish, arr[i-1].furnish) < 0){
		                swap_arr(&arr[i], &arr[i-1]);
		            }
		        }
		    }
		    list(n);
		} else if (strcmp(ori, "desc") == 0){
			for(int j = 1; j <= count; j++){
				for(int i = count - 1; i >= j; i--){
		            if(strcmp(arr[i].furnish, arr[i-1].furnish) > 0){
		                swap_arr(&arr[i], &arr[i-1]);
		            }
		        }
		    }
		    list(n);
		} else {
			printf("Invalid Input!\n");
		}
	} else {
		printf("Invalid Input!\n");
	}
} 

void exportFile(struct data *arr){ //Creating new file with the new data with a custom name
	char filename[1001];
    printf("File name: "); scanf("%[^\n]", &filename);
    strcat(filename, ".csv");

    FILE *exp = fopen(filename, "w");
    if(exp == NULL){
        printf("Error! Try again...\n");
    }
    fprintf(exp, "Location 1,Location 2,Price,Rooms,Bathrooms,CarParks,Type,Furnish\n");
    for(int i=0; i<count; i++){
        fprintf(exp, "%s,%s,%d,%d,%d,%d,%s,%s\n", arr[i].location1, arr[i].location2, arr[i].price, arr[i].rooms, arr[i].bathroom, arr[i].carpark, arr[i].type, arr[i].furnish);
    }
    fclose(exp);

    printf("Data successfully written to file %s!\n", filename);
}

int main(){ //Main Workspace
	int action;
	read_file();
	do{
		printf("What do you want to do?\n"); //Menu
		printf("1. Display Data\n");
		printf("2. Search Data\n");
		printf("3. Sort Data\n");
		printf("4. Export Data\n");
		printf("5. Exit\n");
		printf("Your Choice: ");
		scanf ("%d", &action); getchar();
				
		if(action == 1){ //Display x number of rows of data
			int rows;
			printf("Number of Rows: ");
			scanf("%d", &rows);
			list(rows);
		} else if(action == 2){ //Searching data
			searchData();
		} else if(action == 3){ //Sorting data
			sortData();			
		} else if(action == 4){ //Export file into a new file
			exportFile(arr);
		}
	} while(action != 5); //Exit, stopping program if the user chooses 5
	return 0;
}
