//
//  main.c
//  Calcify
//
//  Created by Tóth Kristóf on 2019. 4. 29. (C Version)
//                             2019. 9. 27. (C++ Version)
//  Copyright Tóth Kristóf, 2021. All rights reserved.
//
#pragma warning(disable: 4996)
#include <locale.h>
#include <stdio.h>
#include <stdbool.h> 
#include <Windows.h>
#include <math.h>
#include "config.h"
#include "convert.h"


//#include "stat.cpp"

void bsc(void);
void sci(void);
void tech_menu(void);
void tech_phy(void);
void tech_elec(void);
void library(void);

bool run = true;
bool first = true;


int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
    while(run != false)
    {
    
	//init();
	
    header(headerMain);
	
    printf("%s", menuMain);

    int c = 0;
    int cc = 0;

    c = int_input();

    switch(c)
    {
    case 1: header(headerCalc); //calculate
            printf("%s", inputMode);
            printf("%s", menuMain_calc);
            
            cc = int_input();
            
            switch(cc)
            {
                case 1: header(headerBasic); //Basic Calculation Mode
                        bsc();

                        printf("\n");
                        break;
                    
                case 2: header(headerScience); //Scientific Calculation Mode
                        sci();

                        printf("\n");
                        break;
    
				case 3: header(headerTech); //Unit Calculation
						tech_menu();
						
						printf("\n");
                        break;
					
				default: error(cc);
						break;
            }
            break;
        
    case 2: header(headerConv); //convert
            printf("%s", inputCat);
            printf("%s", menuMain_conv);
            
            cc = int_input();
            
            switch(cc)
            {
                case 1: header(headerLength);  //Length
                        conv_calc(cc);
                        printf("\n ");
                        break;
                case 2: header(headerMass); //Mass
                        conv_calc(cc);
                        printf("\n ");
                        break;
				default: error(cc);
						break;
            }
            break;
            
    case 3: header(headerLib);
			
			library();
			break;
			
    case 4: header(headerCredits); //credits
            printf("\n Seven Studios\n\n Calcify v %i.%i.%s %s \n\n Copyright: Tóth Kristóf, 2021\n\n", ver_major, ver_minor, ver_build, status);            
            break;
            
    case 5: printf("\n "); //exit
			run = false; 
			return 0;
            break;
            
	default: error(c);
			break;
        
    } //switch end
    
	printf("\n ");
	system("pause");
    fflush(stdin);
	
	printf("\n");

    }
	return 0;
}


/*void init(void)
{
	string temp;
	fstream conf;
	conf.open("config.txt");
	
	string placeh = " ";
	conf >> placeh >> first;
	
	if(first==true)
	{
		printf(""\n\nStarting up for the first time...\n\n\n";
	}
	else
	{
		conf << "firstTime false";
	}
	while(!conf.eof())
	{
		conf >> temp;
		if(temp=="firstTime=1")
		{
			first=true;
		}
	}
	conf.close();

}*/

void bsc(void)
{
    char opr=' ';
    float num=0;
    float num1=0;
    float num2=0;
    printf("\n %s \n", infoCalc);
    printf("\n > ");
    scanf("%f", &num1);
    fflush(stdin);

    printf("\n");
    breakline();
    printf("\n");

    printf("\n%s \n", menuCalcBasic);
    printf("\n > ");
	scanf(" %c", &opr);
    
	if(opr == '+' || opr == '-' || opr == '*' || opr == '/')
	{
	
	printf("\n");
    breakline();
    printf("\n");

    printf("\n > ");
    scanf("%f", &num2);
    fflush(stdin);

    switch (opr)
    {
    case '+': num = num1 + num2;
        break;
    case '-': num = num1 - num2;
        break;
    case '*': num = num1 * num2;
        break;
    case '/': num = num1 / num2;
        break;
	default: error(opr);
		break;
    }
    
    printf("\n");
    breakline();
    printf("\n %f %c %f = %f \n", num1, opr, num2, num);
    breakline();
    printf("\n");
    }
    else
    {
		error(opr);
	}
}

void sci(void)
{
    /*int c=0;
    printf(""\n How many numbers? ");
    scanf("%i", &c);
    fflush(stdin);
	*/
    char opr=' ';
    float num=0;
    float num1=0;
    float num2=0;
    int n;
    //float numt;
    //float num3;
    //float num4;
    //float num5;
    printf("\n %s \n", infoCalc);
    printf("\n > ");
    scanf("%f", &num1);
    fflush(stdin);

    printf("\n");
    breakline();
    printf("\n");

    printf("\n%s \n", menuCalcScience);
    printf("\n > ");
	scanf(" %c", &opr);
    fflush(stdin);
    
    if (opr == '+' || opr == '-' || opr == '*' || opr == '/')
    {
		printf("\n");
		breakline();
		printf("\n");
		
        printf("\n > ");
        scanf("%f", &num2);
        fflush(stdin);
        
		switch (opr)
		{
		case '+': num = num1 + num2;
			break;
		case '-': num = num1 - num2;
			break;
		case '*': num = num1 * num2;
			break;
		case '/': num = num1 / num2;
			break;
		default: error(opr);
			break;
		}
			
		printf("\n");
        breakline();
        printf("\n %f %c %f = %f \n", num1, opr, num2, num);
        breakline();
        printf("\n");
    }

    else if (opr == 'r' || opr == 'R')
    {
        printf("\n");
        breakline();
        printf("%s %f = %f \n", inputSqr, num1, sqrt(num1));
        breakline();
        printf("\n");
    }
    
    else if (opr == '2')
    {
        printf("\n");
        breakline();
        printf("\n %f ^ 2 = %f \n", num1, pow(num1, 2));
        breakline();
        printf("\n");
    }
    
    else if (opr == 'n' || opr == 'N')
    {
        printf("\n > ");
        n = getchar();
        fflush(stdin);

        printf("\n");
        breakline();
        printf("\n %f ^ %i = %f \n", num1, n, pow(num1, n));
        breakline();
        printf("\n");
    }
    
    else if(opr=='s')
    {
        printf("\n");
        breakline();
        printf("\n sin(%f) = %f \n", num1, sin(num1*PI/180));
        breakline();
        printf("\n");
    }
    
    else if(opr=='c')
    {
		printf("\n");
		breakline();
		printf("\n cos(%f) = %f \n", num1, cos(num1*PI/180));
		breakline();
		printf("\n");
	}
	
	else if(opr=='t')
	{
		printf("\n");
		breakline();
		printf("\n tan(%f) = %f \n", num1, tan(num1*PI/180));
		breakline();
		printf("\n");
	}
	
	else if(opr=='S')
    {
        printf("\n");
        breakline();
        printf("\n arcsin(%f) = %fÃ‚Â° \n", num1, asin(num1)*180/PI);
        breakline();
        printf("\n");
    }
    
    else if(opr=='C')
    {
		printf("\n");
		breakline();
		printf("\n arcos(%f) = %fÃ‚Â° \n", num1, acos(num1)*180/PI);
		breakline();
		printf("\n");
	}
	
	else if(opr=='T')
	{
		printf("\n");
		breakline();
		printf("\n arctan(%f) = %fÃ‚Â° \n", num1, atan(num1)*180/PI);
		breakline();
		printf("\n");
	}
	else
	{
		error(opr);
	}
	
}

void tech_menu(void)
{
	int c=0;
	
	printf("%s", menuTech);
	
	c=int_input();
	
	switch(c)
	{
		case 1: tech_phy();
				break;
				
		case 2: tech_elec();
				break;
				
		default: error(c);
				break;
	}
}

void tech_phy(void)
{
	header(headerPhy);
	
	int c=0;
	double num1=0;
	double num2=0;
	
	printf("%s", menuTechPhy);
	
	c=int_input();
	
	switch(c)
	{
		case 1: printf("\n%s delta s [m]: ", inputEnterVal); //v
				scanf("%lf", &num1);
				
				printf("\n%s delta t [s]: ", inputEnterVal);
				scanf("%lf", &num2);
				
				breakline();
				printf("\n v = delta s / delta t = %.2lf m / %.2lf s = %lf m/s\n", num1, num2, num1/num2);
				breakline();
				break;
				
		case 2: printf("\n%s delta v [m/s]: ", inputEnterVal); //a
				scanf("%lf", &num1);
				
				printf("\n%s delta t [s]: ", inputEnterVal);
				scanf("%lf", &num2);
				
				breakline();
				printf("\n a = delta v / delta t = %.2lf m/s / %.2lf m = %lf m/s^2\n", num1, num2, num1/num2);
				breakline();
				break;
				
		case 3: printf("\n%s U [V]: ", inputEnterVal); //P
				scanf("%lf", &num1);
				
				printf("\n%s I [A]: ", inputEnterVal);
				scanf("%lf", &num2);
				
				breakline();
				printf("\n P = U * I = %.2lf V * %.2lf A = %lf W\n", num1, num2, num1*num2);
				breakline();
				break;
				
		case 4: printf("\n%s m [kg]: ", inputEnterVal); //F
				scanf("%lf", &num1);
				
				printf("\n%s a [m/s^2]: ", inputEnterVal);
				scanf("%lf", &num2);
				
				breakline();
				printf("\n F = m * a = %.2lf kg * %.2lf m/s^2 = %lf N\n", num1, num2, num1*num2);
				breakline();
				break;
		
		case 5: printf("\n%s m [kg]: ", inputEnterVal); //p (Momentum)
				scanf("%lf", &num1);
				
				printf("\n%s v [m/s]: ", inputEnterVal);
				scanf("%lf", &num2);
				
				breakline();
				printf("\n p = m * v = %.2lf kg * %.2lf m/s = %lf Ns\n", num1, num2, num1*num2);
				breakline();
				break;
		
		case 6: printf("\n%s F [N]: ", inputEnterVal); //W
				scanf("%lf", &num1);
				
				printf("\n%s s [m]: ", inputEnterVal);
				scanf("%lf", &num2);
				
				breakline();
				printf("\n W = F * s = %.2lf N * %.2lf m = %.3lf J\n", num1, num2, num1*num2);
				breakline();
				break;
				
		case 7: printf("\n%s m [kg]: ", inputEnterVal); //Ekin
				scanf("%lf", &num1);
				
				printf("\n%s v [m/s]: ", inputEnterVal);
				scanf("%lf", &num2);
				
				breakline();
				printf("\n E kin = (m * v^2) / 2 = (%.2lf kg * (%.2lf m/s)^2) / 2 = .3%lf J\n", num1, num2, (num1 * pow(num2, 2))/2);
				breakline();
				break;
		
		case 8: printf("\n%s m [kg]: ", inputEnterVal); //Epot
				scanf("%lf", &num1);
				
				printf("\n%s h [m]: ", inputEnterVal);
				scanf("%lf", &num2);
				
				breakline();
				printf("\n E pot = m * g * h = %.2lf m * 9,81 m/s^2 *%.2lf m = %.3lf J\n", num1, num2, num1*9.81*num2);
				breakline();
				break;
				
		case 9: printf("\n%s F [N]: ", inputEnterVal); //p
				scanf("%lf", &num1);
				
				printf("\n%s A [m^2]: ", inputEnterVal);
				scanf("%lf", &num2);
				
				breakline();
				printf("\n p = F / A = %.2lf N * %.2lf m^2 = %.3lf Pa\n", num1, num2, num1/num2);
				breakline();
				break;
				
		default: error(c);
				break;
	}
	
}
	
void tech_elec(void)
{
	header(headerElec);
	
	int c=0;
	double num1=0.0;
	double num2=0.0;
	double num3=0.0;
	
	printf("%s", menuTechElec);
	
	c=int_input();
	
	switch(c)
	{
		case 1: printf("\n Enter R: "); //U
				scanf("%lf", &num1);
				
				printf("\n Enter I: ");
				scanf("%lf", &num2);
				
				breakline();
				printf("\n U = %lf V\n", num1 * num2);
				breakline();
				break;
				
		case 2: printf("\n Enter U: "); //I
				scanf("%lf", &num1);
				
				printf("\n Enter R: ");
				scanf("%lf", &num2);
				
				breakline();
				printf("\n I = %lf A\n", num1/num2);
				breakline();
				break;
				
		case 3: printf("\n Enter U: "); //R
				scanf("%lf", &num1);
				
				printf("\n Enter I: ");
				scanf("%lf", &num2);
				
				breakline();
				printf("\n R = %lf Ohm\n", num1/num2);
				breakline();
				break;
				
		case 4: printf("\n Enter R: "); //Z
				scanf("%lf", &num1);
				
				printf("\n Enter XL: ");
				scanf("%lf", &num2);
				
				breakline();
				printf("\n Z = %lf Ohm\n", sqrt(pow(num1, 2) + pow(num2, 2)));
				breakline();
				break;
		
		case 5: printf("\n Enter f: "); //XC
				scanf("%lf", &num1);
				
				printf("\n Enter C: ");
				scanf("%lf", &num2);
				
				breakline();
				printf("\n XC = %lf Ohm\n", 1 / (2 * PI * num1 * num2));
				breakline();
				break;
		
		case 6: printf("\n Enter f: "); //XL
				scanf("%lf", &num1);
				
				printf("\n Enter L: ");
				scanf("%lf", &num2);
				
				breakline();
				printf("\n XL = %lf Ohm\n", 2 * PI * num1 * num2);
				breakline();
				break;
				
		case 7: printf("\n Enter PHI: "); //B
				scanf("%lf", &num1);
				
				printf("\n Enter A: ");
				scanf("%lf", &num2);
				
				breakline();
				printf("\n B = %lf T\n", num1/num2);
				breakline();
				break;
				
		case 8: printf("\n Enter C: "); //Q
				scanf("%lf", &num1);
				
				printf("\n Enter U: ");
				scanf("%lf", &num2);
				
				breakline();
				printf("\n Q = %lf C\n", num1 * num2);
				breakline();
				break;
				
		case 9: printf("\n Enter F: "); //E
				scanf("%lf", &num1);
				
				printf("\n Enter Q: ");
				scanf("%lf", &num2);
				
				breakline();
				printf("\n E = %lf V/m\n", num1 / num2);
				breakline();
				break;
				
		case 10: printf("\n Enter er: "); //C
				scanf("%lf", &num1);
				
				printf("\n Enter A: ");
				scanf("%lf", &num2);
				
				printf("\n Enter l: ");
				scanf("%lf", &num3);
				
				breakline();
				printf("\n C = %lf F\n", (0.00000000000885 * num1 * num2) / num3);
				breakline();
				break;
				
		default: error(c);
				break;
	}
}

void library(void)
{
	printf("%s", inputCat);
	printf("%s", menuLib);

	int cc = int_input();

	switch (cc)
	{
	case 1: header(headerLib);
		printf("%s", inputCat);
		printf("%s", menuTechPhy);

		int ccc = int_input();

		switch (ccc)
		{
		case 1: header(headerLib);
			printf("%s", libPhyVel);
			printf("\n");
			breakline();
			break;
		case 2: header(headerLib);
			printf("%s", libPhyAcc);
			printf("\n");
			breakline();
			break;
		case 3: header(headerLib);
			printf("%s", libPhyPow);
			printf("\n");
			breakline();
			break;
		case 4: header(headerLib);
			printf("%s", libPhyFor);
			printf("\n");
			breakline();
			break;
		case 5: header(headerLib);
			printf("%s", libPhyMom);
			printf("\n");
			breakline();
			break;
		case 6: header(headerLib);
			printf("%s", libPhyWor);
			printf("\n");
			breakline();
			break;
		case 7: header(headerLib);
			printf("%s", libPhyKen);
			printf("\n");
			breakline();
			break;
		case 8: header(headerLib);
			printf("%s", libPhyPen);
			printf("\n");
			breakline();
			break;
		case 9: header(headerLib);
			printf("%s", libPhyPre);
			printf("\n");
			breakline();
			break;
		default: error(ccc);
			break;
		}


		break;
	case 2: header(headerLib);
		printf("%s", inputCat);
		printf("%s", menuTechElec);


		break;

	default: error(cc);
		break;
	}
}