//
//  main.c
//  Calcify
//
//  Created by Tóth Kristóf on 2019. 4. 29. (C Version)
//                             2019. 9. 27. (C++ Version)
//  Copyright Tóth Kristóf, 2021. All rights reserved.
//

#pragma warning(disable: 4996)
#include "config.h"
#include "convert.h"

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
	
    headerAdv(headerMain, inputOpr, menuMain);

    int c = 0;
    int cc = 0;

    c = int_input();

    switch(c)
    {
    case 1: headerAdv(headerCalc, inputMode, menuMain_calc); //calculate
            
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
    
				case 3: headerAdv(headerCalc, inputCat, menuTech);; //Unit Calculation
						tech_menu();
						
						printf("\n");
                        break;
					
				default: error(cc);
						break;
            }
            break;
        
    case 2: headerAdv(headerConv, inputCat, menuMain_conv); //convert
            
            cc = int_input();
            
            switch(cc)
            {
                case 1: headerAdv(headerMass, inputConvFrom, textConvertLenFrom); //Length
                        conv_calc(cc);
                        printf("\n ");
                        break;
                case 2: headerAdv(headerMass, inputConvFrom, textConvertMassFrom); //Mass
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
    char opr = ' ';
	char n1[1024];
	char n2[1024];
    double num=0;
    double num1=0;
    double num2=0;
    printf("\n %s \n", infoCalc);
    printf("\n > ");

	fgetc(stdin);
	fgets(n1, 1024, stdin);
	num1 = atof(n1);

    printf("\n%s \n", menuCalcBasic);
    printf("\n > ");

	opr = getchar();

	if(opr == '+' || opr == '-' || opr == '*' || opr == '/')
	{

    printf("\n > ");

    fgetc(stdin);
	fgets(n2, 1024, stdin);
	num2 = atof(n2);

    switch (opr)
    {
		case '+': bscCalc(num1, num2, '+');
			break;
		case '-': bscCalc(num1, num2, '-');
			break;
		case '*': bscCalc(num1, num2, '*');
			break;
		case '/': bscCalc(num1, num2, '/');
			break;
		default: error(opr);
			break;
		}
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
	char n1[1024];
	char n2[1024];
    double num=0;
    double num1=0;
    double num2=0;
    //float numt;
    //float num3;
    //float num4;
    //float num5;
    printf("\n %s \n", infoCalc);
    printf("\n > ");

	fgetc(stdin);
	fgets(n1, 1024, stdin);
	num1 = atof(n1);

    printf("\n%s \n", menuCalcScience);
    printf("\n > ");

	opr = getchar();
    
    if (opr == '+' || opr == '-' || opr == '*' || opr == '/')
    {		
        printf("\n > ");
		fgetc(stdin);
		fgets(n2, 1024, stdin);
		num2 = atof(n2);
        
		switch (opr)
		{
		case '+': bscCalc(num1, num2, '+');
			break;
		case '-': bscCalc(num1, num2, '-');
			break;
		case '*': bscCalc(num1, num2, '*');
			break;
		case '/': bscCalc(num1, num2, '/');
			break;
		default: error(opr);
			break;
		}
    }
    else if (opr == 'r' || opr == 'R')
    {
		bscCalc(num1, 0, 'r');
    }
    else if (opr == '2')
    {
		bscCalc(num1, 0, '2');
    }
    else if (opr == 'n' || opr == 'N')
    {
		bscCalc(num1, 0, 'n');
    }
    else if(opr=='s')
    {
		bscCalc(num1, 0, 's');
    }
    else if(opr=='c')
    {
		bscCalc(num1, 0, 'c');
	}
	else if(opr=='t')
	{
		bscCalc(num1, 0, 't');
	}
	else if(opr=='S')
    {
		bscCalc(num1, 0, 'S');
    }
    else if(opr=='C')
    {
		bscCalc(num1, 0, 'C');
	}
	else if(opr=='T')
	{
		bscCalc(num1, 0, 'T');
	}
	else
	{
		error(opr);
	}
	
}

void tech_menu(void)
{
	int c=0;

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
	int c = 0;
	double num1 = 0;
	double num2 = 0;

	headerAdv(headerPhy, inputOpr, menuTechPhy);
	
	c=int_input();
	
	switch(c)
	{
		case 1: calcUnit("v", "m/s", "delta s", "m", "delta t", "s", "x/y");// v
				break;
				
		case 2: calcUnit("a", "m/s^2", "delta v", "m/s", "delta t", "s", "x/y");// a
				break;
				
		case 3: calcUnit("P", "W", "U", "V", "I", "mA", "x*yf");// P
				break;
				
		case 4: calcUnit("F", "N", "m", "kg", "a", "m/s^2", "x*y");// F
				break;
		
		case 5: calcUnit("p", "Ns", "m", "kg", "v", "m/s", "x*y");// p
				break;
		
		case 6: calcUnit("W", "J", "F", "N", "s", "m", "x*y");// W
				break;
				
		case 7: calcUnit("E kin", "J", "m", "kg", "v", "m/s", "Ekin");// Ekin
				break;
		
		case 8: calcUnit("E pot", "J", "m", "kg", "h", "m", "Epot");// Epot
				break;
				
		case 9: calcUnit("p", "Pa", "F", "N", "A", "m^2", "x/y");// p
				break;
				
		default: error(c);
				break;
	}
	
}
	
void tech_elec(void)
{
	headerAdv(headerElec, inputOpr, menuTechElec);
	
	int c=0;
	double num1=0.0;
	double num2=0.0;
	double num3=0.0;
	
	c=int_input();
	
	switch(c)
	{
		case 1: calcUnit("U", "V", "R", "Ohm", "I", "mA", "x*yf");// U
				break;
				
		case 2: calcUnit("I", "A", "U", "V", "R", "Ohm", "x/y");// I
				break;
				
		case 3: calcUnit("R", "Ohm", "U", "V", "I", "mA", "x/yf");// R
				break;
				
		case 4: calcUnit("B", "T", "PHI", "A", "A", "m^2", "x/y");// B
				break;
				
		case 5: calcUnit("Q", "C", "I", "mA", "t", "s", "xf*y"); // Q
				break;
				
		case 6: calcUnit("E", "V/m", "F", "N", "Q", "mC", "x/yf"); // E
				break;
				
		default: error(c);
				break;
	}
}

void library(void)
{
	headerAdv(headerLib, inputCat, menuLib);

	int cc = int_input();

	switch (cc)
	{
	case 1: headerAdv(headerLib, inputCat, menuTechPhy);

		int ccc = int_input();

		switch (ccc)
		{
		case 1: libList(libPhyVel);
			break;
		case 2: libList(libPhyAcc);
			break;
		case 3: libList(libPhyPow);
			break;
		case 4: libList(libPhyFor);
			break;
		case 5: libList(libPhyMom);
			break;
		case 6: libList(libPhyWor);
			break;
		case 7: libList(libPhyKen);
			break;
		case 8: libList(libPhyPen);
			break;
		case 9: libList(libPhyPre);
			break;
		default: error(ccc);
			break;
		}
		break;
	case 2: headerAdv(headerLib, inputCat, menuTechElec);

		break;

	default: error(cc);
		break;
	}
}