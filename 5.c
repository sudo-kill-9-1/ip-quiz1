#include <stdio.h> 

int main(void)
{ 
    int type, days; 
    float rental, amount; 

    printf("Book Type:");
    scanf("%d", &type);

    printf("Rented days:"); 
    scanf("%d", &days);

    if (type == 1) 
    { 
        rental = 10.0;
    }   
    else if (type == 2)
    { 
        rental = 8.0;
    }
    else 
    { 
        printf("invalid");
        return 1; 
    }

    printf("Rental per day: Rs.%.2f\n", rental);
    amount = days * rental;

    if (days > 14) 
    { 
        amount += amount / 100.0 * 10; 
    }

    printf("Rental Amount:Rs.%.2f", amount);
    return 0;
}