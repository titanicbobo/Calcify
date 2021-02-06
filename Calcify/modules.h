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
    char n1[1024];
    printf("\n > ");
    fgets(n1, 1024, stdin);
    c = atoi(n1);

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

    printf("\n%s %s [%s]: ", inputEnterVal, unit1ID, unit1SI);
    fgets(n1, 1024, stdin);
    num1 = atof(n1);
    
    printf("\n%s %s [%s]: ", inputEnterVal, unit2ID, unit2SI);
    fgets(n2, 1024, stdin);
    num2 = atof(n2);

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

}

void libList(char content[])
{
    header(headerLib);
    printf("%s", content);
    printf("\n");
    breakline();
}

void bscCalc(double num1, double num2, char opr)
{
    printf("\n");
    breakline();
    int decPoint1 = 0;
    int decPoint2 = 0;
    int decPointS = 0;
    int n;
    if (fmod(num1, 1.0) == 0.0)
    {
        decPoint1 = 0;
    }
    else
    {
        decPoint1 = 2;
    }
    if (fmod(num2, 1.0) == 0.0)
    {
        decPoint2 = 0;
    }
    else
    {
        decPoint2 = 2;
    }
    if (fmod(num1+num2, 1.0) == 0.0)
    {
        decPointS = 0;
    }
    else
    {
        decPointS = 2;
    }

    if (opr == '+')
    {
        printf("\n %.*f %c %.*f = %.*lf \n", decPoint1 , num1, opr, decPoint2, num2, decPointS, num1 + num2);
    }
    else if (opr == '-')
    {
        printf("\n %.*f %c %.*f = %.*lf \n", decPoint1, num1, opr, decPoint2, num2, decPointS, num1 - num2);
    }
    else if (opr == '*')
    {
        printf("\n %.*f %c %.*f = %.*lf \n", decPoint1, num1, opr, decPoint2, num2, decPointS, num1 * num2);
    }
    else if (opr == '/')
    {
        printf("\n %.*f %c %.*f = %.*lf \n", decPoint1, num1, opr, decPoint2, num2, decPointS, num1 / num2);
    }
    else if (opr == 'r')
    {
        printf("\n %s %.*f = %.2f \n", inputSqr, decPoint1, num1, sqrt(num1));
    }
    else if (opr == '2')
    {
        printf("\n %.*f ^ 2 = %.2f \n", decPoint1, num1, pow(num1, 2));
    }
    else if (opr == 'n')
    {
        printf("\n > ");
        n = getchar();
        fflush(stdin);

        printf("\n %.*f ^ %i = %.2f \n", decPoint1, num1, n, pow(num1, n));
    }
    else if (opr == 's')
    {
        printf("\n sin(%.*f) = %.2f \n", decPoint1, num1, sin(num1 * PI / 180));
    }
    else if (opr == 'c')
    {
        printf("\n con(%.*f) = %.2f \n", decPoint1, num1, cos(num1 * PI / 180));
    }
    else if (opr == 't')
    {
        printf("\n tan(%.*f) = %.2f \n", decPoint1, num1, tan(num1 * PI / 180));
    }
    else if (opr == 'S')
    {
        printf("\n arcsin(%.*f) = %.2f° \n", decPoint1, num1, asin(num1) * 180 / PI);
    }
    else if (opr == 'C')
    {
        printf("\n arcos(%.*f) = %.2f° \n", decPoint1, num1, acos(num1) * 180 / PI);
    }
    else if (opr == 'T')
    {
        printf("\n arctan(%.*f) = %.2f° \n", decPoint1, num1, atan(num1) * 180 / PI);
    }
    else
    {
        error(opr);
    }   
    
    breakline();
}

void convCalc(double num, char unit1[], char unit2[], char type, char opr[], int mult)
{
    if (type == 'l')
    {
        header(headerLength);
    }
    else if (type == 'm')
    {
        header(headerMass);
    }

    printf("\n");
    breakline();
    if (opr == "mul")
    {
        if (mult == 10)
        {
            printf("\n %.2lf %s > %.2lf %s\n", num, unit1, num * 10, unit2);
        }
        else if (mult == 100)
        {
            printf("\n %.2lf %s > %.2lf %s\n", num, unit1, num * 100, unit2);
        }
        else if (mult == 1000)
        {
            printf("\n %.2lf %s > %.2lf %s\n", num, unit1, num * 1000, unit2);
        }
        else if (mult == 10000)
        {
            printf("\n %.2lf %s > %.3lf %s\n", num, unit1, num * 10000, unit2);
        }
        else if (mult == 100000)
        {
            printf("\n %.2lf %s > %.3lf %s\n", num, unit1, num * 100000, unit2);
        }
        else if (mult == 1000000)
        {
            printf("\n %.2lf %s > %.3lf %s\n", num, unit1, num * 1000000, unit2);
        }
    }
    else if (opr == "div")
    {
        if (mult == 10)
        {
            printf("\n %.2lf %s > %.2lf %s\n", num, unit1, num / 10, unit2);
        }
        else if (mult == 100)
        {
            printf("\n %.2lf %s > %.2lf %s\n", num, unit1, num / 100, unit2);
        }
        else if (mult == 1000)
        {
            printf("\n %.2lf %s > %.2lf %s\n", num, unit1, num / 1000, unit2);
        }
        else if (mult == 10000)
        {
            printf("\n %.2lf %s > %.3lf %s\n", num, unit1, num / 10000, unit2);
        }
        else if (mult == 100000)
        {
            printf("\n %.2lf %s > %.3lf %s\n", num, unit1, num / 100000, unit2);
        }
        else if (mult == 1000000)
        {
            printf("\n %.2lf %s > %.4lf %s\n", num, unit1, num / 1000000, unit2);
        }
    }
    breakline();
    printf("\n");
}

#endif /* modules_h */
