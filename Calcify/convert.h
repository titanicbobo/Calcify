//
//  convert.h
//  Calcify
//
//  Created by Tóth Kristóf on 2019. 10. 20..
//  Copyright © 2021. Tóth Kristóf. All rights reserved.
//

#ifndef convert_h
#define convert_h

#include "modules.h"

#include "config.h"
#include <stdio.h>

void conv_calc(int);
float conv_input(void);
void conv_length(int, int);
void conv_mass(int, int);


void conv_calc(int type)
{
    int conv_inputConvFrom=0;
    int conv_inputConvTo=0;

    switch(type)
    {
        case 1: conv_inputConvFrom = int_input();

                switch(conv_inputConvFrom)
                {
                    case 1: header(headerConv, inputConvTo, textConvertLenFromKM);
                            break;
                    case 2: header(headerConv, inputConvTo, textConvertLenFromM);
                            break;
                    case 3: header(headerConv, inputConvTo, textConvertLenFromDM);
                            break;
                    case 4: header(headerConv, inputConvTo, textConvertLenFromCM);
                            break;
                    case 5: header(headerConv, inputConvTo, textConvertLenFromMM);
                            break;
                    default: error(conv_inputConvFrom);
                            break;
                }
                break;

        case 2: conv_inputConvFrom = int_input();

                switch(conv_inputConvFrom)
                {
                    case 1: header(headerConv, inputConvTo, textConvertMassFromT);
                            break;
                    case 2: header(headerConv, inputConvTo, textConvertMassFromKG);
                            break;
                    case 3: header(headerConv, inputConvTo, textConvertMassFromDKG);
                            break;
                    case 4: header(headerConv, inputConvTo, textConvertMassFromG);
                            break;
                    default: error(conv_inputConvFrom);
                            break;
                }
                break;
    }

    conv_inputConvTo = int_input();

    switch(type)
    {
        case 1: conv_length(conv_inputConvFrom, conv_inputConvTo);
                break;
        case 2: conv_mass(conv_inputConvFrom, conv_inputConvTo);
                break;
        default: error(type);
                break;
    }
}

float conv_input(void)
{
    float n;
    printf("%s", inputNum);
    scanf("%f", &n);
    fflush(stdin);

    return n;
}

void conv_length(int inputConvFrom, int inputConvTo)
{
    double num=0;
    if (inputConvFrom == 1) //inputConvFrom km
    {
        num = conv_input();
        switch (inputConvTo)
        {
        case 1: header(headerLength);
            printf("\n");
            breakline();
            printf("\n %f km > %f m\n", num, num * 1000);
            breakline();
            printf("\n");
            break;
        case 2: header(headerLength);
            printf("\n");
            breakline();
            printf("\n %f km > %f dm\n", num, num * 10000);
            breakline();
            printf("\n");
            break;
        case 3: header(headerLength);
            printf("\n");
            breakline();
            printf("\n %f km > %f cm\n", num, num * 100000);
            breakline();
            printf("\n");
            break;
        case 4: header(headerLength);
            printf("\n");
            breakline();
            printf("\n %f km > %f mm\n", num, num * 1000000);
            breakline();
            printf("\n");
            break;
        default: error(inputConvTo);
            break;
        }
    }
    if (inputConvFrom == 2) //inputConvFrom m
    {
        num = conv_input();
        switch (inputConvTo)
        {
        case 1: header(headerLength);
            printf("\n");
            breakline();
            printf("\n %f m > %f km\n", num, num / 1000);
            breakline();
            printf("\n");
            break;
        case 2: header(headerLength);
            printf("\n");
            breakline();
            printf("\n %f m > %f dm\n", num, num * 10);
            breakline();
            printf("\n");
            break;
        case 3: header(headerLength);
            printf("\n");
            breakline();
            printf("\n %f m > %f cm\n", num, num * 100);
            breakline();
            printf("\n");
            break;
        case 4: header(headerLength);
            printf("\n");
            breakline();
            printf("\n %f m > %f mm\n", num, num * 1000);
            breakline();
            printf("\n");
            break;
        default: error(inputConvTo);
            break;
        }
    }
    if (inputConvFrom == 3) //inputConvFrom dm
    {
        num = conv_input();
        switch (inputConvTo)
        {
        case 1: header(headerLength);
            printf("\n");
            breakline();
            printf("\n %f dm > %f km\n", num, num / 10000);
            breakline();
            printf("\n");
            break;
        case 2: header(headerLength);
            printf("\n");
            breakline();
            printf("\n %f dm > %f m\n", num, num / 10);
            breakline();
            printf("\n");
            break;
        case 3: header(headerLength);
            printf("\n");
            breakline();
            printf("\n %f dm > %f cm\n", num, num * 10);
            breakline();
            printf("\n");
            break;
        case 4: header(headerLength);
            printf("\n");
            breakline();
            printf("\n %f dm > %f mm\n", num, num * 100);
            breakline();
            printf("\n");
            break;
        default: error(inputConvTo);
            break;
        }
    }
    if (inputConvFrom == 4) //inputConvFrom cm
    {
        num = conv_input();
        switch (inputConvTo)
        {
        case 1: header(headerLength);
            printf("\n");
            breakline();
            printf("\n %f cm > %f km\n", num, num / 100000);
            breakline();
            printf("\n");
            break;
        case 2: header(headerLength);
            printf("\n");
            breakline();
            printf("\n %f cm > %f m\n", num, num / 100);
            breakline();
            printf("\n");
            break;
        case 3: header(headerLength);
            printf("\n");
            breakline();
            printf("\n %f cm > %f dm\n", num, num / 10);
            breakline();
            printf("\n");
            break;
        case 4: header(headerLength);
            printf("\n");
            breakline();
            printf("\n %f cm > %f mm\n", num, num * 10);
            breakline();
            printf("\n");
            break;
        default: error(inputConvTo);
            break;
        }
    }
    if (inputConvFrom == 5) //inputConvFrom mm
    {
        num = conv_input();
        switch (inputConvTo)
        {
        case 1: header(headerLength);
            printf("\n");
            breakline();
            printf("\n %f mm > %f km\n", num, num / 1000000);
            breakline();
            printf("\n");
            break;
        case 2: header(headerLength);
            printf("\n");
            breakline();
            printf("\n %f mm > %f m\n", num, num / 1000);
            breakline();
            printf("\n");
            break;
        case 3: header(headerLength);
            printf("\n");
            breakline();
            printf("\n %f mm > %f dm\n", num, num / 100);
            breakline();
            printf("\n");
            break;
        case 4: header(headerLength);
            printf("\n");
            breakline();
            printf("\n %f mm > %f cm\n", num, num / 10);
            breakline();
            printf("\n");
            break;
        default: error(inputConvTo);
            break;
            }
        }
    }

void conv_mass(int inputConvFrom, int inputConvTo) //mass
{
    double num=0;
    if (inputConvFrom == 1) //inputConvFrom t
    {
        num = conv_input();
        switch (inputConvTo)
        {
        case 1: header(headerMass); //inputConvTo kg
            printf("\n");
            breakline();
            printf("\n %ft > %f kg\n", num, num * 1000);
            breakline();
            printf("\n");
            break;
        case 2: header(headerMass); // inputConvTo dag
            printf("\n");
            breakline();
            printf("\n %ft > %f dag\n", num, num * 100000);
            breakline();
            printf("\n");
            break;
        case 3: header(headerMass); //inputConvTo g
            printf("\n");
            breakline();
            printf("\n %ft > %f cm\n", num, num * 1000000);
            breakline();
            printf("\n");
            break;
        default: error(inputConvTo);
            break;
        }
    }
    if (inputConvFrom == 2) //inputConvFrom kg
    {
        num = conv_input();
        switch (inputConvTo)
        {
        case 1: header(headerMass); //inputConvTo t
            printf("\n");
            breakline();
            printf("\n %f kg > %f t\n", num, num / 1000);
            breakline();
            printf("\n");
            break;
        case 2: header(headerMass); //inputConvTo dag
            printf("\n");
            breakline();
            printf("\n %f kg > %f dag\n", num, num * 100);
            breakline();
            printf("\n");
            break;
        case 3: header(headerMass); //inputConvTo g
            printf("\n");
            breakline();
            printf("\n %f kg > %f g\n", num, num * 1000);
            breakline();
            printf("\n");
            break;
        default: error(inputConvTo);
            break;
        }
    }
    if (inputConvFrom == 3) //inputConvFrom dag
    {
        num = conv_input();
        switch (inputConvTo)
        {
        case 1: header(headerMass);
            printf("\n");
            breakline();
            printf("\n %f dag > %f t\n", num, num / 100000);
            breakline();
            printf("\n");
            break;
        case 2: header(headerMass);
            printf("\n");
            breakline();
            printf("\n %f dag > %f kg\n", num, num / 100);
            breakline();
            printf("\n");
            break;
        case 3: header(headerMass);
            printf("\n");
            breakline();
            printf("\n %f dag > %f g\n", num, num * 10);
            breakline();
            printf("\n");
            break;
        default: error(inputConvTo);
            break;
        }
    }
    if (inputConvFrom == 4) //inputConvFrom g
    {
        num = conv_input();
        switch (inputConvTo)
        {
        case 1: header(headerMass);
            printf("\n");
            breakline();
            printf("\n %f g > %f t\n", num, num / 1000000);
            breakline();
            printf("\n");
            break;
        case 2: header(headerMass);
            printf("\n");
            breakline();
            printf("\n %f g > %f kg\n", num, num / 1000);
            breakline();
            printf("\n");
            break;
        case 3: header(headerMass);
            printf("\n");
            breakline();
            printf("\n %f g > %f dag\n", num, num / 10);
            breakline();
            printf("\n");
            break;
        default: error(inputConvTo);
            break;
        }
    }
}


#endif /* convert_h */
