#ifndef LANGUAGE_H_INCLUDED
#define LANGUAGE_H_INCLUDED

//Headers
char headerMain[] = "CALCIFY";
char headerCalc[] = "CALCULATE";
char headerBasic[] = "BASIC CALCULATION";
char headerScience[] = "SCIENTIFIC CALCULATION";
char headerCredits[] = "CREDITS";
char headerConv[] = "CONVERT";
char headerLength[] = "LENGTH";
char headerMass[] = "MASS";
char headerTech[] = "TECHNICAL";
char headerElec[] = "ELECTRICAL";
char headerPhy[] = "PHYSICAL";
char headerStat[] = "STATISTICS";
char headerLib[] = "Library";

//Info
char infoCalc[] = "To calculate, enter a number first. \n Then enter the operation on the list. \n After that, enter the second number.";

//Menus
char menuCalcScience[] = " [+] Addition\n [-] Subtraction\n [*] Multiplication\n [/] Division\n [R] Square Root\n [2] Power by two\n [n] Power by n\n [s] Sin\n [c] Cos\n [t] Tan\n [S] arcsin\n [C] arcos\n [T] arctan";
char menuCalcBasic[] = " [+] Addition\n [-] Subtraction\n [*] Multiplication\n [/] Division";
char menuMain[] = "[1] Calculator\n [2] Converter\n [3] Library\n [4] Credits\n [5] Exit";
char menuMain_calc[] = "[1] Basic\n [2] Scientific\n [3] Unit Calculation";
char menuMain_conv[] = "[1] Length\n [2] Mass";
char menuTech[] = "[1] Physical\n [2] Electrical";
char menuTechPhy[] = "[1] Velocity [v]\n [2] Acceleration [a]\n [3] Power [P]\n [4] Force [F]\n [5] Momentum [p]\n [6] Work [W]\n [7] Kinetic Energy [E kin]\n [8] Potential Energy [E pot]\n [9] Pressure [p]";
char menuTechElec[] = "[1] Voltage [U]\n [2] Electric current [I]\n [3] Electrical Resistance [R]\n [4] Magnetic flux [B]\n [5] Electric Charge [Q]\n [6] Electric Field [E]";
char menuLib[] = "[1] Physics equations\n [2] Electronics equations";

//Promtps
char inputMode[] = "Mode:";
char inputCat[] = "Category:";
char inputOpr[] = "Operation:";
char inputSqr[] = "Sqr. Root of";
char inputConvFrom[] = "From:n";
char inputConvTo[] = "To:";
char inputNum[] = "Enter a number:";
char inputEnterVal[] = "Enter:";

//Outputs
char add[] = " Addition: ";
char sub[] = " Subtraction: ";
char mul[] = " Multiplication: ";
char divs[] = " Division: ";

char libPhyVel[] = "\n The velocity of an object is the rate of change\n of its position with respect to a frame of reference, and is a function of time.\n\n\n Definition: Velocity = change of position / change in time\n\n Formula: v = delta s / delta t\n\n Units: [m/s] = [m] / [s]";
char libPhyAcc[] = "\n Acceleration, in physics, is the rate at which the velocity of a body changes over time.\n\n\n Definition: Acceleration = change of velocity / change of time\n\n Formula: a = delta v / delta t\n\n Units: [m/s^2] = [m/s] / [s]";
char libPhyPow[] = "\n In physics, power is the amount of energy transferred or converted per unit time.\n\n\n Definion: Power = Voltage * Electrical current\n\n Formula: P = U * I\n\n Units: [W] = [V] * [A]";
char libPhyFor[] = "\n In physics, a force is any interaction that, when unopposed, will change the motion of an object.\n\n\n Definition: Force = Mass * Acceleration\n\n Formula: F = m * a\n\n Units: [N] = [kg] * [m/s^2]";
char libPhyMom[] = "\n Momentum is the product of the mass and velocity of an object.\n\n\n Definition: Momentum = Mass * Velocity\n\n Formula: p = m * v\n\n Units: [kg / m/s] = [kg] * [m/s]";
char libPhyWor[] = "\n In physics, work is the energy transferred to or from an object via the application of force along a displacement.\n\n\n Definition: Work = Force * Displacement\n\n Formula: W = F * s\n\n Units: [J] = [N] * [m]";
char libPhyKen[] = "\n In physics, the kinetic energy of an object is the energy that it possesses due to its motion.\n\n\n Definition: kinetic Energy = (Mass * Velocity^2) / 2\n\n Formula: E kin = (m * v^2) / 2\n\n Units: [J] = [kg] * [m/s]";
char libPhyPen[] = "\n In physics, potential energy is the energy held by an object because of its position relative to other objects, stresses within itself, its electric charge, or other factors.\n\n\n Definition: potential Energy = Mass * Gravity * Height\n\n Formula: E pot = m * g * h\n\n Units: [J] = [kg] * 9,81 m/s^2 * [m]";
char libPhyPre[] = "\n Pressure is the force applied perpendicular to the surface of an object per unit area over which that force is distributed.\n\n\n Definition: Pressure = Force * Area\n\n Formula: P = F * A\n\n Units: [Pa] = [N] * [m^2]";

char textConvertLenFrom[] = "[1] km\n [2] m\n [3] dm\n [4] cm\n [5] mm";
char textConvertLenFromKM[] = "[1] m\n [2] dm\n [3] cm\n [4] mm";
char textConvertLenFromM[] = "[1] km\n [2] dm\n [3] cm\n [4] mm";
char textConvertLenFromDM[] = "[1] km\n [2] m\n [3] cm\n [4] mm";
char textConvertLenFromCM[] = "[1] km\n [2] m\n [3] dm\n [4] mm";
char textConvertLenFromMM[] = "[1] km\n [2] m\n [3] dm\n [4] cm";

char textConvertMassFrom[] = "[1] t\n [2] kg\n [3] dag\n [4] g";
char textConvertMassFromT[] = "[1] kg\n [2] dkg\n [3] g";
char textConvertMassFromKG[] = "[1] t\n [2] dkg\n [3] g";
char textConvertMassFromDKG[] = "[1] t\n [2] kg\n [3] g";
char textConvertMassFromG[] = "[1] t\n [2] kg\n [3] dkg";

#endif // LANGUAGE_H_INCLUDED
