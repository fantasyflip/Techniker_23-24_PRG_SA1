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

void task2variant1(){
    float moneyReturn = 5.49;

    int euro2 = 0;
    int euro1 = 0;
    int cent50 = 0;
    int cent20 = 0;
    int cent10 = 0;
    int cent5 = 0;
    int cent2 = 0;
    int cent1 = 0;

    printf("Rueckgabe: %.2f\n\n", moneyReturn);

    if(moneyReturn > 2.0){
        for(int i = 0; moneyReturn > 2.0; i ++){
            euro2++;
            moneyReturn = moneyReturn - 2.0;
        }
    }

    if(moneyReturn > 1.0){
        for(int i = 0; moneyReturn > 1.0; i ++){
            euro1++;
            moneyReturn = moneyReturn - 1.0;
        }
    }

    if(moneyReturn > 0.5){
        for(int i = 0; moneyReturn > 0.5; i ++){
            cent50++;
            moneyReturn = moneyReturn - 0.5;
        }
    }

    if(moneyReturn > 0.2){
        for(int i = 0; moneyReturn > 0.2; i ++){
            cent20++;
            moneyReturn = moneyReturn - 0.2;
        }
    }

    if(moneyReturn > 0.1){
        for(int i = 0; moneyReturn > 0.1; i ++){
            cent10++;
            moneyReturn = moneyReturn - 0.1;
        }
    }

    if(moneyReturn > 0.05){
        for(int i = 0; moneyReturn > 0.05; i ++){
            cent5++;
            moneyReturn = moneyReturn - 0.05;
        }
    }

    if(moneyReturn > 0.02){
        for(int i = 0; moneyReturn > 0.02; i ++){
            cent2++;
            moneyReturn = moneyReturn - 0.02;
        }
    }

    if(moneyReturn > 0.01){
        for(int i = 0; moneyReturn > 0.01; i ++){
            cent1++;
            moneyReturn = moneyReturn - 0.01;
        }
    }

    printf("Muenzenausgabe:\n\n");

    printf("2  Euro:\t%d\n", euro2);
    printf("1  Euro:\t%d\n", euro1);
    printf("50 Cent:\t%d\n", cent50);
    printf("20 Cent:\t%d\n", cent20);
    printf("10 Cent:\t%d\n", cent10);
    printf("5  Cent:\t%d\n", cent5);
    printf("2  Cent:\t%d\n", cent2);
    printf("1  Cent:\t%d\n", cent1);
}

int main()
{
    task1();
    printf("\n\n\n");
    task2variant1();
    printf("\n\n\n");
    return 0;
}
