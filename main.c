#include <stdio.h>

void task1(){
#define YEARS 10
    float lastVal = 100000.0;
    float percentage = 0.04;
    float totalInvestReturn = 0.0;

    printf("+-----------------------------+\n");
    printf("| Jahr    Gewinn       Zinsen |\n");
    printf("+-----------------------------+\n");
    printf("| %2d  %10.2f    %9.2f |\n", 0, lastVal, totalInvestReturn);

    for(int i = 1; i <= YEARS; i++){
        float investReturn = lastVal * percentage;
        totalInvestReturn = totalInvestReturn + investReturn;
        printf("| %2d  %10.2f    %9.2f |\n", i, lastVal+investReturn, totalInvestReturn);

        lastVal = lastVal + investReturn;
    }

    printf("+-----------------------------+\n");
}

int main()
{
    task1();
    printf("\n\n\n");
    return 0;
}
