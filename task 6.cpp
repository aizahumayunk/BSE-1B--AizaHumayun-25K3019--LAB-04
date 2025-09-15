#include <stdio.h>

int main() {
	
    int day;
    float total = 5.00;

    printf("Enter day of week (1 = Mon - 7 = Sun): ");
    scanf("%d", &day);

    if (day == 6 || day == 7){
        total *= 0.90; 
	}

    printf("Total after discount (if any) = $%.2f\n", total);
    return 0;
}

