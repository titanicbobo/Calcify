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
        
    case 2: header(headerConv, inputCat, menuMain_conv); //convert
            
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
    int opr=0;
	char op[1024];
	char n1[1024];
	char n2[1024];
    float num=0;
    float num1=0;
    float num2=0;
    printf("\n %s \n", infoCalc);
    printf("\n > ");

	fgetc(stdin);
	do
	{
		if (!fgets(n1, 1024, stdin))
		{
			return 1;
		}
		num1 = atof(n1);
	} while (num1 == 0);

    printf("\n%s \n", menuCalcBasic);
    printf("\n > ");

	fgetc(stdin);
	do
	{
		if (!fgets(op, 1024, stdin))
		{
			return 1;
		}
		opr = atoi(op);
	} while (opr == 0);
	
    
	if(opr >= 1 && opr <= 4)
	{

    printf("\n > ");

    fgetc(stdin);
	do
	{
		if (!fgets(n2, 1024, stdin))
		{
			return 1;
		}
		num2 = atof(n2);
	} while (num2 == 0);

    switch (opr)
    {
    case 1: num = num1 + num2;
		printf("\n");
		breakline();
		printf("\n %.2f + %.2f = %.2f \n", num1, num2, num);
		breakline();
        break;
    case 2: num = num1 - num2;
		printf("\n");
		breakline();
		printf("\n %.2f - %.2f = %.2f \n", num1, num2, num);
		breakline();
        break;
    case 3: num = num1 * num2;
		printf("\n");
		breakline();
		printf("\n %.2f * %.2f = %.2f \n", num1, num2, num);
		breakline();
        break;
    case 4: num = num1 / num2;
		printf("\n");
		breakline();
		printf("\n %.2f / %.2f = %.2f \n", num1, num2, num);
		breakline();
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

    printf("\n%s \n", menuCalcScience);
    printf("\n > ");
	scanf(" %c", &opr);
    fflush(stdin);
    
    if (opr == '+' || opr == '-' || opr == '*' || opr == '/')
    {		
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
        printf("\n arcsin(%f) = %f° \n", num1, asin(num1)*180/PI);
        breakline();
        printf("\n");
    }
    
    else if(opr=='C')
    {
		printf("\n");
		breakline();
		printf("\n arcos(%f) = %f° \n", num1, acos(num1)*180/PI);
		breakline();
		printf("\n");
	}
	
	else if(opr=='T')
	{
		printf("\n");
		breakline();
		printf("\n arctan(%f) = %f° \n", num1, atan(num1)*180/PI);
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