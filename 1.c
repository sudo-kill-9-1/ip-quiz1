#include <stdio.h> 

int main(void) 
{ 
    int months; 
    float salary, bonus; 

    printf("number of months: "); 
    scanf("%d", &months); 

    printf("basic salary: "); 
    scanf("%f", &salary);

    if (months >= 6 && months < 12) 
    { 
        bonus = months * salary;
    }
    else if (months == 12)
    { 
        if (salary <= 45000)
        { 
            bonus = months * salary + salary; 
        }
        else 
        { 
            bonus = months * salary;
        }
    }
    else if (months < 6) 
    { 
        bonus = 0;
    }
    else 
    { 
        printf("invalid"); 
        return 1; 
    }

    printf("Bonus: %.2f", bonus); 
    return 0; 
}