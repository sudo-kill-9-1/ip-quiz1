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
        if (bill <= 2500)
        {
            discount = bill / 100.0 * 5; 
        }
        else 
        { 
            discount = bill / 100.0 * 10; 
        }
    }
    else if (type == 2) 
    {
        if (bill > 5000) 
        { 
            discount = bill / 100.0 * 10;
        }
        else 
        { 
            discount = 0;
        }
    }

    printf("Discount Amount:Rs.%.2f\n", discount); 
    printf("Final Bill amount:Rs.%.2f", bill - discount);
}