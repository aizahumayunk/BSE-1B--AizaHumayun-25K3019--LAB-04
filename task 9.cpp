#include <stdio.h>

int main() {
    int method;
    float total = 5.00;

    printf("Payment method:\n1. Cash\n2. Card (+$0.50 fee)\n");
    scanf("%d", &method);

    if (method == 2){
        total += 0.50;
    }

    printf("Final amount = $%.2f\n", total);
    return 0;
}

