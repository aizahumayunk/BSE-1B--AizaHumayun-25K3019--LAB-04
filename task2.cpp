#include <stdio.h>

int main() {
	
    int scoops;
    
    printf("Enter number of scoops: ");
    scanf("%d", &scoops);

    if (scoops > 1){
        printf("Please see our multi-scoop offers.\n");
    }
    else{
        printf("Your total is $2.00\n");
	}
    return 0;
}

