#include <stdio.h>

int main() {
	
    int scoops;
    float total = 0;

    printf("Enter number of scoops (1-3): ");
    scanf("%d", &scoops);

    if (scoops == 1)
        total = 2.00;
    else if (scoops == 2)
        total = 3.50;
    else if (scoops == 3)
        total = 4.50;
    else {
        printf("Invalid number of scoops.\n");
    }

    printf("You ordered %d scoops . Total = $%.2f\n", scoops, total);
    return 0;
}

