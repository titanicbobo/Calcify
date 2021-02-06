#ifndef LANGUAGE_H_INCLUDED
#define LANGUAGE_H_INCLUDED

//Headers
char headerMain[] = "CALCIFY";
char headerCalc[] = "SZÁMOLÁS";
char headerBasic[] = "ALAP MÓD";
char headerScience[] = "TUDOMÁNYOS MÓD";
char headerCredits[] = "NÉVJEGY";
char headerConv[] = "ÁTVÁLTÁS";
char headerLength[] = "HOSSZ";
char headerTömeg[] = "TÖMEG";
char headerTech[] = "MÛSZAKI MÉRTÉKEGYSÉGEK";
char headerElec[] = "VILLAMOSSÁGI MÉRTÉKEGYSÉGEK";
char headerPhy[] = "FIZIKAI MÉRTÉKEGYSÉGEK";
char headerStat[] = "STATISZTIKA";
char headerLib[] = "Könyvtár";

//Info
char infoCalc[] = "A számoláshoz, írj be egy számot. \n Azután jelölj ki egy mûveletet. \n Utána, írj be egy másik számot.";

//Menus
char menuCalcScience[] = "[+] Hozzáadás\n [-] Kivonás\n [*] Szorzás\n [/] Osztás\n [R] Négyzetgyök\n [2] 2 hatványa\n [n] n-edik hatvány\n [s] Szinusz\n [c] Koszinusz\n [t] Tangens\n [S] Arkusz szinusz\n [C] Arkusz koszinusz\n [T] Arkusz tangens";
char menuCalcBasic[] = "[+] Hozzáadás\n [-] Kivonás\n [*] Szorzás\n [/] Osztás";
char menuMain[] = "[1] Számológép\n [2] Mértékegység átváltó\n [3] Névjegy\n [4] Kilépés";
char menuMain_calc[] = " [1] Alap\n [2] Tudományos\n [3] Mértékegység számolás";
char menuMain_conv[] = "[1] Hossz\n [2] Tömeg";
char menuTech[] = "[1] Fizikai\n [2] Villamossági";
char menuTechPhy[] = "[1] Sebesség [v]\n [2] Gyorsulás [a]\n [3] Teljesítmény [P]\n [4] Erõ [F]\n [5] Lendület [p]\n [6] Munka [W]\n [7] Mozgási energia [E kin]\n [8] Helyzeti energia [E pot]\n [9] Nyomás [p]";
char menuTechElec[] = "[1] Feszültség [U]\n [2] Elektromos áram [I]\n [3] Elektromos ellenállás [R]\n [4] Mágneses fluxus [B]\n [5] Elektromos töltés [Q]\n [6] Elektromos mezõ [E]";
char menuLib[] = "[1] Fizikai egyenletek\n [2] Villamossági egyenletek";
 
//Promtps
char inputMode[] = "Mód:";
char inputCat[] = "Kategória:";
char inputSqr[] = "Négyzetgyök";
char inputConvFrom[] = "Errõl:";
char inputConvTo[] = "Erre:";
char inputNum[] = "Írj be egy számot:";
char inputEnterVal[] = "Írj be egy értéket:";

//Outputs
char add[] = " Hozzáadás: ";
char sub[] = " Kivonás: ";
char mul[] = " Szorzás: ";
char divs[] = " Osztás: ";

char libPhyVel[] = "\n A sebesség egy pontszerû test egy kitüntetett ponthoz viszonyított mozgásának jellemzésére szolgáló fizikai mennyiség.\n\n\n Definíció: sebesség = pozíció változása / ídõ változása\n\n Egyenlet: v = delta s / delta t\n\n Egységek: [m/s] = [m] / [s]";
char libPhyAcc[] = "\n A fizikában a gyorsulás (latinul akceleráció) a sebesség változási gyorsasága.\n\n\n Definíció: Gyorsulás = sebesség változása / idõ változása\n\n Egyenlet: a = delta v / delta t\n\n Egységek: [m/s^2] = [m/s] / [s]";
char libPhyPow[] = "\n A fizikai teljesítmény a munkavégzés vagy energiaátvitel sebessége, más szóval az egységnyi idõ alatt végzett munka.\n\n\n Definíció: Teljesítmény = feszültség * elektromos áram\n\n Egyenlet: P = U * I\n\n Egységek: [W] = [V] * [A]";
char libPhyFor[] = "\n A fizikában az erõ olyan hatás, ami egy tömeggel rendelkezõ testet gyorsulásra vagy állapotváltoztatásra késztet.\n\n\n Definíció: Erõ = tömeg * gyorsulás\n\n Egyenlet: F = m * a\n\n Egységek: [N] = [kg] * [m/s^2]";
char libPhyMom[] = "\n A lendület egy test mozgását leíró dinamikai vektormennyiség.\n\n\n Definíció: Lendület = tömeg * sebesség\n\n Egyenlet: p = m * v\n\n Egységek: [kg / m/s] = [kg] * [m/s]";
char libPhyWor[] = "\n A mechanikai munka fogalma visszavezethetõ az ember gyakorlati tevékenysége során megjelenõ fáradságérzetre.\n\n\n Definíció: Munka = erõ * pozíció változása\n\n Egyenlet: W = F * s\n\n Egységek: [J] = [N] * [m]";
char libPhyKen[] = "\n A mozgási energia a mozgásban levõ testek energiája, melyet mozgásuk folytán képesek munkavégzésre fordítani.\n\n\n Definíció: mozgási energia = (tömeg * sebesség^2) / 2\n\n Egyenlet: E kin = (m * v^2) / 2\n\n Egységek: [J] = [kg] * [m/s]";
char libPhyPen[] = "\n Potenciális energia - vagy más néven helyzeti energia - a fizikában az energia egyik formája. Az az energia, amellyel egy test rendelkezik potenciális erõtérben.\n\n\n Definíció: helyzeti energia = tömeg * tömegvonzás * magasság\n\n Egyenlet: E pot = m * g * h\n\n Egységek: [J] = [kg] * 9,81 m/s^2 * [m]";
char libPhyPre[] = "\n A nyomás fizikai mennyiség, állapothatározó. Jele: p. A nyomást az adott A nagyságú felületre ható Fny erõ nagyságának és a felületnek a hányadosával definiáljuk.\n\n\n Definíció: nyomás = erõ * terület\n\n Egyenlet: P = F * A\n\n Egységek: [Pa] = [N] * [m^2]";

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
