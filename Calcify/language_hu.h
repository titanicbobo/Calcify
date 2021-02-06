#ifndef LANGUAGE_H_INCLUDED
#define LANGUAGE_H_INCLUDED

//Headers
char headerMain[] = "CALCIFY";
char headerCalc[] = "SZ�MOL�S";
char headerBasic[] = "ALAP M�D";
char headerScience[] = "TUDOM�NYOS M�D";
char headerCredits[] = "N�VJEGY";
char headerConv[] = "�TV�LT�S";
char headerLength[] = "HOSSZ";
char headerT�meg[] = "T�MEG";
char headerTech[] = "M�SZAKI M�RT�KEGYS�GEK";
char headerElec[] = "VILLAMOSS�GI M�RT�KEGYS�GEK";
char headerPhy[] = "FIZIKAI M�RT�KEGYS�GEK";
char headerStat[] = "STATISZTIKA";
char headerLib[] = "K�nyvt�r";

//Info
char infoCalc[] = "A sz�mol�shoz, �rj be egy sz�mot. \n Azut�n jel�lj ki egy m�veletet. \n Ut�na, �rj be egy m�sik sz�mot.";

//Menus
char menuCalcScience[] = "[+] Hozz�ad�s\n [-] Kivon�s\n [*] Szorz�s\n [/] Oszt�s\n [R] N�gyzetgy�k\n [2] 2 hatv�nya\n [n] n-edik hatv�ny\n [s] Szinusz\n [c] Koszinusz\n [t] Tangens\n [S] Arkusz szinusz\n [C] Arkusz koszinusz\n [T] Arkusz tangens";
char menuCalcBasic[] = "[+] Hozz�ad�s\n [-] Kivon�s\n [*] Szorz�s\n [/] Oszt�s";
char menuMain[] = "[1] Sz�mol�g�p\n [2] M�rt�kegys�g �tv�lt�\n [3] N�vjegy\n [4] Kil�p�s";
char menuMain_calc[] = " [1] Alap\n [2] Tudom�nyos\n [3] M�rt�kegys�g sz�mol�s";
char menuMain_conv[] = "[1] Hossz\n [2] T�meg";
char menuTech[] = "[1] Fizikai\n [2] Villamoss�gi";
char menuTechPhy[] = "[1] Sebess�g [v]\n [2] Gyorsul�s [a]\n [3] Teljes�tm�ny [P]\n [4] Er� [F]\n [5] Lend�let [p]\n [6] Munka [W]\n [7] Mozg�si energia [E kin]\n [8] Helyzeti energia [E pot]\n [9] Nyom�s [p]";
char menuTechElec[] = "[1] Fesz�lts�g [U]\n [2] Elektromos �ram [I]\n [3] Elektromos ellen�ll�s [R]\n [4] M�gneses fluxus [B]\n [5] Elektromos t�lt�s [Q]\n [6] Elektromos mez� [E]";
char menuLib[] = "[1] Fizikai egyenletek\n [2] Villamoss�gi egyenletek";
 
//Promtps
char inputMode[] = "M�d:";
char inputCat[] = "Kateg�ria:";
char inputSqr[] = "N�gyzetgy�k";
char inputConvFrom[] = "Err�l:";
char inputConvTo[] = "Erre:";
char inputNum[] = "�rj be egy sz�mot:";
char inputEnterVal[] = "�rj be egy �rt�ket:";

//Outputs
char add[] = " Hozz�ad�s: ";
char sub[] = " Kivon�s: ";
char mul[] = " Szorz�s: ";
char divs[] = " Oszt�s: ";

char libPhyVel[] = "\n A sebess�g egy pontszer� test egy kit�ntetett ponthoz viszony�tott mozg�s�nak jellemz�s�re szolg�l� fizikai mennyis�g.\n\n\n Defin�ci�: sebess�g = poz�ci� v�ltoz�sa / �d� v�ltoz�sa\n\n Egyenlet: v = delta s / delta t\n\n Egys�gek: [m/s] = [m] / [s]";
char libPhyAcc[] = "\n A fizik�ban a gyorsul�s (latinul akceler�ci�) a sebess�g v�ltoz�si gyorsas�ga.\n\n\n Defin�ci�: Gyorsul�s = sebess�g v�ltoz�sa / id� v�ltoz�sa\n\n Egyenlet: a = delta v / delta t\n\n Egys�gek: [m/s^2] = [m/s] / [s]";
char libPhyPow[] = "\n A fizikai teljes�tm�ny a munkav�gz�s vagy energia�tvitel sebess�ge, m�s sz�val az egys�gnyi id� alatt v�gzett munka.\n\n\n Defin�ci�: Teljes�tm�ny = fesz�lts�g * elektromos �ram\n\n Egyenlet: P = U * I\n\n Egys�gek: [W] = [V] * [A]";
char libPhyFor[] = "\n A fizik�ban az er� olyan hat�s, ami egy t�meggel rendelkez� testet gyorsul�sra vagy �llapotv�ltoztat�sra k�sztet.\n\n\n Defin�ci�: Er� = t�meg * gyorsul�s\n\n Egyenlet: F = m * a\n\n Egys�gek: [N] = [kg] * [m/s^2]";
char libPhyMom[] = "\n A lend�let egy test mozg�s�t le�r� dinamikai vektormennyis�g.\n\n\n Defin�ci�: Lend�let = t�meg * sebess�g\n\n Egyenlet: p = m * v\n\n Egys�gek: [kg / m/s] = [kg] * [m/s]";
char libPhyWor[] = "\n A mechanikai munka fogalma visszavezethet� az ember gyakorlati tev�kenys�ge sor�n megjelen� f�rads�g�rzetre.\n\n\n Defin�ci�: Munka = er� * poz�ci� v�ltoz�sa\n\n Egyenlet: W = F * s\n\n Egys�gek: [J] = [N] * [m]";
char libPhyKen[] = "\n A mozg�si energia a mozg�sban lev� testek energi�ja, melyet mozg�suk folyt�n k�pesek munkav�gz�sre ford�tani.\n\n\n Defin�ci�: mozg�si energia = (t�meg * sebess�g^2) / 2\n\n Egyenlet: E kin = (m * v^2) / 2\n\n Egys�gek: [J] = [kg] * [m/s]";
char libPhyPen[] = "\n Potenci�lis energia - vagy m�s n�ven helyzeti energia - a fizik�ban az energia egyik form�ja. Az az energia, amellyel egy test rendelkezik potenci�lis er�t�rben.\n\n\n Defin�ci�: helyzeti energia = t�meg * t�megvonz�s * magass�g\n\n Egyenlet: E pot = m * g * h\n\n Egys�gek: [J] = [kg] * 9,81 m/s^2 * [m]";
char libPhyPre[] = "\n A nyom�s fizikai mennyis�g, �llapothat�roz�. Jele: p. A nyom�st az adott A nagys�g� fel�letre hat� Fny er� nagys�g�nak �s a fel�letnek a h�nyados�val defini�ljuk.\n\n\n Defin�ci�: nyom�s = er� * ter�let\n\n Egyenlet: P = F * A\n\n Egys�gek: [Pa] = [N] * [m^2]";

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
