#include <stdio.h>

int main() {
	
    char sprinkles;
    float total = 3.50;

    printf("Do you want sprinkles? (Y/N): ");
    scanf(" %c", &sprinkles);

    if (sprinkles == 'Y' || sprinkles == 'y'){
        total = total + 0.75;
	}

    printf("Updated total = $%.2f\n", total);
    return 0;
}

