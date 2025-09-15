#include <stdio.h>

int main() {
	
    int cone;
    float total = 3.50; 

    printf("Choose cone:\n");
	printf("1. Regular (+ $0.50)\n");
	printf("2. Waffle (+ $1.00)\n");
	
    scanf("%d", &cone);

    if (cone == 1)
        total = total + 0.50;
    else if (cone == 2)
        total = total + 1.00;
    else {
        printf("Invalid choice.\n");
    }

    printf("Updated total = $%.2f\n", total);
    return 0;
}

