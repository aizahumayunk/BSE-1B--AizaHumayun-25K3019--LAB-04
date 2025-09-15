#include <stdio.h>

int main() {
	
    int flavor, scoops, cone, day, age, payment;
    char sprinkles;
    float total = 0;

    printf("Choose flavor (1=Vanilla, 2=Chocolate, 3=Strawberry): ");
    scanf("%d", &flavor);

    if (flavor < 1 || flavor > 3) {
        printf("Invalid flavor!\n");
        return 0;
    }

    printf("Enter scoops (1-3): ");
    scanf("%d", &scoops);

    if (scoops == 1) {total = 2.00;}
    else if (scoops == 2) {total = 3.50;}
    else if (scoops == 3) {total = 4.50;}
    else {
        printf("Invalid scoops.\n");
    }

    printf("Choose cone (1=Regular +$0.50, 2=Waffle +$1.00): ");
    scanf("%d", &cone);

    if (cone == 1) {total += 0.50;}
    else if (cone == 2) {total += 1.00;}
    else {
        printf("Invalid cone.\n");
    }

    printf("Do you want sprinkles? (Y/N): ");
    scanf(" %c", &sprinkles);
    
    if (sprinkles == 'Y' || sprinkles == 'y') {
		total += 0.75;
	}

    printf("Enter day of week (1=Mon ... 7=Sun): ");
    scanf("%d", &day);
    if (day == 6 || day == 7) {
		total *= 0.90;
	}
	
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 12) {
		total -= 1.00;
	}

    if (scoops == 3 && cone == 2){
        printf("You get a free topping!\n");
    }

    printf("Payment method (1=Cash, 2=Card +$0.50): ");
    scanf("%d", &payment);
    
    if (payment == 2){
		total += 0.50;
	}

    printf("\n--- Receipt ---\n");
    printf("Flavor: %d\n", flavor);
    printf("Scoops: %d\n", scoops);
    printf("Cone: %s\n", (cone == 1) ? "Regular" : "Waffle");
    printf("Sprinkles: %c\n", sprinkles);
    printf("Day: %d\n", day);
    printf("Age: %d\n", age);
    printf("Payment: %s\n", (payment == 1) ? "Cash" : "Card");
    printf("Final Amount: $%.2f\n", total);

    return 0;
}

