#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE*fptr;
	char borrowed_books[100];
	
	fptr = fopen("C:\\Users\\HomePC\\Desktop\\File\\borrowed_books.txt","a");
	if(fptr == NULL){
		printf("Error opening the file");
		exit(1);
	}
	printf("Enter the borrowed_books tittle:\n");
	fgets(borrowed_books,sizeof(borrowed_books), stdin);
	fputs(borrowed_books,fptr);
	
	printf("The tittle is successfuly stored.");
	fclose(fptr);
	
	return 0;
}