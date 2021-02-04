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

void header(char*);
void breakline(void);
int int_input(void);
void error(char);

void header(char* head)
{
    system("cls");
    breakline();
    printf("\n %s \n", head);
    breakline();
    printf("\n");
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


#endif /* modules_h */
