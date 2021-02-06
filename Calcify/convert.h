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
double conv_input(void);
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
                    case 1: headerAdv(headerConv, inputConvTo, textConvertLenFromKM);
                            break;
                    case 2: headerAdv(headerConv, inputConvTo, textConvertLenFromM);
                            break;
                    case 3: headerAdv(headerConv, inputConvTo, textConvertLenFromDM);
                            break;
                    case 4: headerAdv(headerConv, inputConvTo, textConvertLenFromCM);
                            break;
                    case 5: headerAdv(headerConv, inputConvTo, textConvertLenFromMM);
                            break;
                    default: error(conv_inputConvFrom);
                            break;
                }
                break;

        case 2: conv_inputConvFrom = int_input();

                switch(conv_inputConvFrom)
                {
                    case 1: headerAdv(headerConv, inputConvTo, textConvertMassFromT);
                            break;
                    case 2: headerAdv(headerConv, inputConvTo, textConvertMassFromKG);
                            break;
                    case 3: headerAdv(headerConv, inputConvTo, textConvertMassFromDKG);
                            break;
                    case 4: headerAdv(headerConv, inputConvTo, textConvertMassFromG);
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

double conv_input()
{
    double n;
    char n1[1024];

    printf("%s", inputNum);
    
    fgetc(stdin);
    fgets(n1, 1024, stdin);
    n = atof(n1);

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
        case 1: convCalc(num, "km", "m", 'l', "mul", 1000);
            break;
        case 2: convCalc(num, "km", "dm", 'l', "mul", 10000);
            break;
        case 3: convCalc(num, "km", "cm", 'l', "mul", 100000);
            break;
        case 4: convCalc(num, "km", "mm", 'l', "mul", 1000000);
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
        case 1: convCalc(num, "m", "km", 'l', "div", 1000);
            break;
        case 2: convCalc(num, "m", "dm", 'l', "mul", 10);
            break;
        case 3: convCalc(num, "m", "cm", 'l', "mul", 100);
            break;
        case 4: convCalc(num, "m", "mm", 'l', "mul", 1000);
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
        case 1: convCalc(num, "dm", "km", 'l', "div", 10000);
            break;
        case 2: convCalc(num, "dm", "m", 'l', "div", 10);
            break;
        case 3: convCalc(num, "dm", "cm", 'l', "mul", 10);
            break;
        case 4: convCalc(num, "dm", "mm", 'l', "mul", 100);
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
        case 1: convCalc(num, "cm", "km", 'l', "div", 100000);
            break;
        case 2: convCalc(num, "cm", "m", 'l', "div", 100);
            break;
        case 3: convCalc(num, "cm", "dm", 'l', "div", 10);
            break;
        case 4: convCalc(num, "cm", "mm", 'l', "mul", 10);
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
        case 1: convCalc(num, "mm", "km", 'l', "div", 1000000);
            break;
        case 2: convCalc(num, "mm", "m", 'l', "div", 1000);
            break;
        case 3: convCalc(num, "mm", "dm", 'l', "div", 100);
            break;
        case 4: convCalc(num, "mm", "cm", 'l', "div", 10);
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
        case 1: convCalc(num, "t", "kg", 'm', "mul", 1000);
            break;
        case 2: convCalc(num, "t", "dkg", 'm', "mul", 100000);
            break;
        case 3: convCalc(num, "t", "g", 'm', "mul", 1000000);
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
        case 1: convCalc(num, "kg", "t", 'm', "div", 1000);
            break;
        case 2: convCalc(num, "kg", "dkg", 'm', "mul", 100);
            break;
        case 3: convCalc(num, "kg", "g", 'm', "mul", 1000);
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
        case 1: convCalc(num, "dkg", "t", 'm', "div", 100000);
            break;
        case 2: convCalc(num, "dkg", "kg", 'm', "div", 100);
            break;
        case 3: convCalc(num, "dkg", "g", 'm', "mul", 10);
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
        case 1: convCalc(num, "g", "t", 'm', "div", 1000000);
            break;
        case 2: convCalc(num, "g", "kg", 'm', "div", 1000);
            break;
        case 3: convCalc(num, "g", "dkg", 'm', "div", 10);
            break;
        default: error(inputConvTo);
            break;
        }
    }
}

#endif /* convert_h */
