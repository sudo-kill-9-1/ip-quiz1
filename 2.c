#include <stdio.h> 

int main(void)
{ 
    int type; 
    float bill, discount;

    printf("Customer type: "); 
    scanf("%d", &type);

    printf("Bill amount:Rs. ");
    scanf("%f", &bill); 

    if (type == 1) 
    { 
        if (bill <= 2000)
        {
            discount = bill / 100.0 * 15; 
        }
        else 
        { 
            discount = bill / 100.0 * 25; 
        }
    }
    else if (type == 2) 
    {
        if (bill > 3000) 
        { 
            discount = bill / 100.0 * 15;
        }
        else 
        { 
            discount = 0;
        }
    }

    printf("Discount Amount:Rs.%.2f\n", discount); 
    printf("Final Bill amount:Rs.%.2f", bill - discount);
}