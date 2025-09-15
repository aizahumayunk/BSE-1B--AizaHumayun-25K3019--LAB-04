#include <stdio.h>

int main() {
	
    int age;
    float total = 5.00;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 12){
        total = total - 1.00;
	}

    printf("Final total = $%.2f\n", total);
    return 0;
}

