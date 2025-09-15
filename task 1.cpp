#include <stdio.h>

int main(){
	
	int choice;
	
	printf("Choose a flavour of icecream (1-3)\n");
	printf("1. Chocolate\n");
	printf("2. Vanilla\n");
	printf("3. Strawberry\n");

	scanf("%d",&choice);
	
	if(choice==1){
		printf("Chocolate\n");
	}
	else if(choice==2){
		printf("Vanilla\n");
	}
	else if(choice==3){
		printf("Strawberry\n");
	}
	else{
		printf("Invalid choice !");
	}
	
	
	return 0;
}
