languageSetting = "en"
import os, sys
if languageSetting == "hu":
    import language_hu as lang
elif languageSetting == "en":
    import language_en as lang
import math
import cmath

ver_major = 0;
ver_minor = 5;
ver_build = 220722;
status = "beta";
year = 2022;
dev = "© Tóth Kristóf";
name = "Calcify™";

def header(head):
    clearConsole()
    breakline()
    print(f"\n {head}")
    breakline()

def clearConsole():
    command = "clear"
    if os.name in ("nt", "dos"):
        command = "cls"
    os.system(command)

def breakline():
    for i in range(50):
        print("=", end="")

def inputFunc():
    num = input("\n > ")
    return num

def idle():
    print(f" {lang.enter}")
    input()
    #clearConsole()

def error(x):
    print(f"\n {lang.error1} '{x}' {lang.error2}\n")

def basicCalc():
    print(lang.infocalc)
    num1 = inputFunc()
    breakline()
    print(lang.calcmenu_bsc)
    operator = input("\n > ")

    if operator == "+" or operator == "-" or operator == "*" or operator == "/":
        breakline()
        num2 = inputFunc()

        if operator == "+":
            num = num1 + num2
        elif operator == "-":
            num = num1 - num2
        elif operator == "*":
            num = num1 * num2
        elif operator == "/":
            num = num1 / num2
        else:
            error(operator)
        breakline()
        print(f"\n {num1} {operator} {num2} = {num}")
        breakline()
    else:
        error(operator)

def scienceCalc():
    print(lang.infocalc)
    num1 = inputFunc()
    breakline()
    print(lang.calcmenu_bsc)
    operator = input("\n > ")

    if operator == "+" or operator == "-" or operator == "*" or operator == "/":
        breakline()
        num2 = inputFunc()

        if operator == "+":
            num = num1 + num2
        elif operator == "-":
            num = num1 - num2
        elif operator == "*":
            num = num1 * num2
        elif operator == "/":
            num = num1 / num2
        else:
            error(operator)
        breakline()
        print(f"\n {num1} {operator} {num2} = {num}")
        breakline()
    elif operator == "r" or operator == "R":
        breakline()
        print(f"\n {lang.sqrroot} {num1} = {math.sqrt(num1)}")
        breakline()
    elif operator == "2":
        breakline()
        print(f"\n {num1} ^ 2 = {math.pow(num1, 2)}")
        breakline()
    elif operator == "n" or operator == "N":
        n = inputFunc()
        breakline()
        print(f"\n {num1} ^ {n} = {math.pow(num1,n)}")
        breakline()
    elif operator == "s":
        breakline()
        print(f" sin({num1}) = {math.sin(num1*math.pi/180)}")
        breakline()
    elif operator == "c":
        breakline()
        print(f" cos({num1}) = {math.cos(num1*math.pi/180)}")
        breakline()
    elif operator == "t":
        breakline()
        print(f" tan({num1}) = {math.tan(num1*math.pi/180)}")
        breakline()
    elif operator == "S":
        breakline()
        print(f" arcsin({num1}) = {math.asin(num1*math.pi/180)}")
        breakline()
    elif operator == "C":
        breakline()
        print(f" arcos({num1}) = {math.acos(num1*math.pi/180)}")
        breakline()
    elif operator == "T":
        breakline()
        print(f" arctan({num1}) = {math.atan(num1*math.pi/180)}")
        breakline()
    else:
        error(operator)

def unitCalcPhy():
    header(lang.phyh)
    print(lang.techphy_menu)
    operator = inputFunc()
    if operator == "1":
        num1 = int(input("\n Enter delta s: "))
        num2 = int(input(" Enter delta t: "))

        breakline()
        print(f"\n v = {(num1/num2):.3f} m/s")
        breakline()
    elif operator == "2":
        num1 = int(input("\n Enter delta v: "))
        num2 = int(input(" Enter delta t: "))

        breakline()
        print(f"\n a = {(num1/num2):.3f} m/s^2")
        breakline()
    elif operator == "3":
        num1 = int(input("\n Enter U: "))
        num2 = int(input(" Enter I: "))

        breakline()
        print(f"\n P = {(num1*num2):.3f} W")
        breakline()
    elif operator == "4":
        num1 = int(input("\n Enter m: "))
        num2 = int(input(" Enter a: "))

        breakline()
        print(f"\n F = {(num1*num2):.3f} N")
        breakline()
    elif operator == "5":
        num1 = int(input("\n Enter m: "))
        num2 = int(input(" Enter v: "))

        breakline()
        print(f"\n p = {(num1*num2):.3f} Ns")
        breakline()
    elif operator == "6":
        num1 = int(input("\n Enter F: "))
        num2 = int(input(" Enter s: "))

        breakline()
        print(f"\n W = {(num1*num2):.3f} J")
        breakline()
    elif operator == "7":
        num1 = int(input("\n Enter m: "))
        num2 = int(input(" Enter v: "))

        breakline()
        print(f"\n E kin = {(num1*math.pow(num2,2))/2:.3f} J")
        breakline()
    elif operator == "8":
        num1 = int(input("\n Enter m: "))
        num2 = int(input(" Enter h: "))

        breakline()
        print(f"\n v = {(num1*9.81*num2):.3f} J")
        breakline()
    elif operator == "9":
        num1 = int(input("\n Enter F: "))
        num2 = int(input(" Enter A: "))

        breakline()
        print(f"\n p = {(num1/num2):.3f} Pa")
        breakline()
    else:
        error(operator)

def unitCalcElec():
    header(lang.elech)
    print(lang.techelec_menu)
    operator = inputFunc()
    if operator == "1":
        num1 = int(input("\n Enter R: "))
        num2 = int(input(" Enter I: "))

        breakline()
        print(f"\n U = {(num1*num2):.3f} V")
        breakline()
    elif operator == "2":
        num1 = int(input("\n Enter U: "))
        num2 = int(input(" Enter R: "))

        breakline()
        print(f"\n I = {(num1/num2):.3f} A")
        breakline()
    elif operator == "3":
        num1 = int(input("\n Enter U: "))
        num2 = int(input(" Enter I: "))

        breakline()
        print(f"\n R = {(num1/num2):.3f} Ohm")
        breakline()
    elif operator == "4":
        num1 = int(input("\n Enter R: "))
        num2 = int(input(" Enter XL: "))

        breakline()
        print(f"\n Z = {(math.sqrt(math.pow(num1,2)+math.pow(num2,2))):.3f} Ohm")
        breakline()
    elif operator == "5":
        num1 = int(input("\n Enter f: "))
        num2 = int(input(" Enter C: "))

        breakline()
        print(f"\n XC = {(1/(2*math.pi*num1*num2)):.3f} Ohm")
        breakline()
    elif operator == "6":
        num1 = int(input("\n Enter f: "))
        num2 = int(input(" Enter L: "))

        breakline()
        print(f"\n XL = {(2*math.pi*num1*num2):.3f} Ohm")
        breakline()
    elif operator == "7":
        num1 = int(input("\n Enter PHI: "))
        num2 = int(input(" Enter A: "))

        breakline()
        print(f"\n B = {(num1/num2):.3f} T")
        breakline()
    elif operator == "8":
        num1 = int(input("\n Enter C: "))
        num2 = int(input(" Enter U: "))

        breakline()
        print(f"\n Q = {(num1*num2):.3f} C")
        breakline()
    elif operator == "9":
        num1 = int(input("\n Enter F: "))
        num2 = int(input(" Enter Q: "))

        breakline()
        print(f"\n E = {(num1/num2):.3f} V/m")
        breakline()
    elif operator == "10":
        num1 = int(input("\n Enter er: "))
        num2 = int(input(" Enter A: "))
        num3 = int(input(" Enter l: "))

        breakline()
        print(f"\n C = {(0.00000000000885*num1*num2)/num3:.3f} F")
        breakline()
    else:
        error(operator)

def complexCalc():
    header(lang.complexh)
    re = int(input(lang.enter_real))
    im = int(input(lang.enter_imag))

    breakline()

    numc = complex(re, im)
    print(f"\n z1: {numc}\n r: {abs(numc)}\n PHI: {cmath.phase(numc)}")
    breakline()

    # TODO: Arithmetics
    #--------------------------

run = True

while(run != False):
    header(lang.mainh)
    print(lang.mainmenu)

    menuSelectorLVL1 = inputFunc()

    if menuSelectorLVL1 == "1":
        header(lang.calch)
        print(f"\n {lang.mode}\n {lang.mainmenu_calc}")

        menuSelectorLVL2 = inputFunc()
        if menuSelectorLVL2 == "1":
            header(lang.basich)
            basicCalc()
            idle()
        elif menuSelectorLVL2 == "2":
            header(lang.scienth)
            scienceCalc()
            idle()
        elif menuSelectorLVL2 == "3":
            header(lang.complexh)
            complexCalc()
            idle()
        elif menuSelectorLVL2 == "4":
            header(lang.techh)
            print(lang.techmenu)
            menuSelectorLVL3 = inputFunc()
            if menuSelectorLVL3 == "1":
                unitCalcPhy()
            elif menuSelectorLVL3 == "2":
                unitCalcElec()
            else:
                error(menuSelectorLVL3)
            idle()
        else:
            error(menuSelectorLVL2)
            idle()
    elif menuSelectorLVL1 == "2":
        header(lang.convh)
        print(f"\n {lang.category}\n {lang.mainmenu_conv}")

        menuSelectorLVL2 = inputFunc()
        if menuSelectorLVL2 == "1":
            header(lang.lengh)
            convLen()
            idle()
        elif menuSelectorLVL2 == "2":
            header(lang.massh)
            convMass()
            idle()
        else:
            error(menuSelectorLVL2)
            idle()
    elif menuSelectorLVL1 == "3":
        header(lang.credh)
        print(f"\n\n {name} v{ver_major}.{ver_minor}.{ver_build} {status}\n {dev} {year}")
        idle()
    elif menuSelectorLVL1 == "4":
        run = False
        sys.exit()
    else:
        error(menuSelectorLVL1)
        idle()










