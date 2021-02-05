//
//  modules.h
//  Calcify
//
//  Created by Tóth Kristóf on 2019. 10. 20..
//  Copyright © 2021. Tóth Kristóf. All rights reserved.
//

#ifndef modules_h
#define modules_h

#include <stdio.h>
#include "config.h"

void header(char[]);
void headerAdv(char[], char[], char[]);
void breakline(void);
int int_input(void);
void error(char);

void header(char head[])
{
    system("cls");
    breakline();
    printf("\n %s \n", head);
    breakline();
}

void headerAdv(char head[], char inputType[], char menuType[])
{
    system("cls");
    breakline();
    printf("\n %s \n", head);
    breakline();
    printf("\n\n %s", inputType);
    printf("\n\n %s\n", menuType);
}

int int_input(void)
{
    int c = 0;
    printf("\n > ");
    scanf(" %i", &c);

    fflush(stdin);

    return c;
}


void breakline(void)
{
    for (int i = 0; i < 70; i++)
    {
        printf("=");
    }
}

void error(char x)
{
    printf("\n ERROR: there is no '%c' command",x);
    printf("\n");

}

void calcUnit(char unit0ID[], char unit0SI[], char unit1ID[], char unit1SI[], char unit2ID[], char unit2SI[], char formula[])
{
    char n1[1024];
    char n2[1024];
    double num1 = 0.0;
    double num2 = 0.0;
    fgetc(stdin);
    do
    {
        printf("\n%s %s [%s]: ", inputEnterVal, unit1ID, unit1SI);
        if (!fgets(n1, 1024, stdin))
        {
            return 1;
        } 
        num1 = atof(n1);
    } while ((num1 || num2) == 0);
    
    do
    {
        printf("\n%s %s [%s]: ", inputEnterVal, unit2ID, unit2SI);
        if (!fgets(n2, 1024, stdin))
        {
            return 1;
        }
        num2 = atof(n2);
    } while((num1 || num2) == 0);
 
    breakline();
    
    if (formula == "x*y")
    {
        printf("\n %s = %s * %s = %.2lf %s * %.2lf %s =  %.3lf %s\n", unit0ID, unit1ID, unit2ID, num1, unit1SI, num2, unit2SI, num1 * num2, unit0SI);
    }
    else if (formula == "x/y")
    {
        printf("\n %s = %s / %s = %.2lf %s / %.2lf %s =  %.3lf %s\n", unit0ID, unit1ID, unit2ID, num1, unit1SI, num2, unit2SI, num1 / num2, unit0SI);
    }
    else if (formula == "xf*y")
    {
        printf("\n %s = %s * %s = %.2lf %s * %.2lf %s =  %.3lf %s\n", unit0ID, unit1ID, unit2ID, num1, unit1SI, num2, unit2SI, (num1/1000) * num2, unit0SI);
    }
    else if (formula == "x*yf")
    {
        printf("\n %s = %s * %s = %.2lf %s * %.2lf %s =  %.3lf %s\n", unit0ID, unit1ID, unit2ID, num1, unit1SI, num2, unit2SI, num1 * (num2/1000), unit0SI);
    }
    else if (formula == "Ekin")
    {
        printf("\n %s = (%s * %s^2) / 2 = (%.2lf %s * (%.2lf %s)^2) / 2 = %.3lf %s\n", unit0ID, unit1ID, unit2ID, num1, unit1SI, num2, unit2SI, (num1 * pow(num2, 2)) / 2, unit0SI);
    }
    else if (formula == "Epot")
    {
        printf("\n %s = (%s * g * %s = %.2lf %s * 9,81 m/s^2 %.2lf %s = %.3lf %s\n", unit0ID, unit1ID, unit2ID, num1, unit1SI, num2, unit2SI, num1*9.81*num2, unit0SI);
    }

    breakline();

    return 0;
}

void libList(char content[])
{
    header(headerLib);
    printf("%s", content);
    printf("\n");
    breakline();
}

#endif /* modules_h */
