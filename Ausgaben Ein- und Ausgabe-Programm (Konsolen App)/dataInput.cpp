#include<iostream>
#include<iomanip>
#include"functions.h"
#include<windows.h>
#include<string>
#include<conio.h>
#include<fstream>
#include<vector>

using namespace std;


// Data Input Function

void chooseCategory(string version)
{
	system("chcp 1252");
	system("cls");
	set_cursor(false);

	string quit = "l";
	string dataRead = "config.ini";
	ifstream readData;
	vector <string> monthAndYear{};
	int choose = 0;
	char price[30]{};
	int category = 0;
	bool goBack = 0;
	string cat;
		
	readData.open(dataRead);									// Initialisieren der Daten für Datei Lese- und Schreiboperationen

	while (!readData)
	{
		set_cursor(true);

		prog_ini(true);

		readData.open(dataRead);									// Initialisieren der Daten für Datei Lese- und Schreiboperationen
	}

	readData.close();
	set_cursor(false);
		
		while (quit != "q")
		{			
			monthAndYear = prog_ini(false);

			system("cls");

			cout << "Aktueller Monat & Jahr: " << monthAndYear[0] << " " << monthAndYear[1] << "\t\t\t\t\t\t\t\t\t     " << version << "\n\n";

			cout << setw(121) << setfill('-') << "-\n";
			cout << "\t\t\t\tBITTE KATEGORIE WÄHLEN ZUM EINGEBEN DER DATEN !!!\n";
			cout << setw(123) << setfill('-') << "-\n\n ";
			cout << "[1]\tLebensmittel\n\n ";
			cout << "[2]\tKosmetik-Artikel\n\n ";
			cout << "[3]\tHaushaltsbedarf (Reinigungsmittel / Waschmittel / Haushaltstücher usw)\n\n ";
			cout << "[4]\tGenussmittel (Kaffee / Alkohol)\n\n ";
			cout << "[5]\tGenussmittel (TABAK)\n\n ";
			cout << "[6]\tGenussmittel (Imbiss / Lieferdienste)\n\n ";
			cout << "[7]\tSonstiges (Internet-Bestellungen / AMAZON / OTTO usw)\n\n";
			cout << setw(123) << setfill('-') << "-\n\n ";
			cout << "[8]\tProgramm mit neuem Monat & Jahr initialisieren \n\n ";
			cout << "[9]\tSUMME ausgeben (Datenbankdatei) \n\n ";
			cout << "[0]\tPROGRAMM BEENDEN\n";

			choose = _getch();

			switch (choose)     // [49] entspricht der eingabe von [1] auf der Tastatur in der Konsole (warum auch immer ?!)
			{
			case 49:
			{
				category = 1;
				priceInput(price, category);
			}

			break;

			case 50:
			{
				category = 2;
				priceInput(price, category);
			}
			break;

			case 51:
			{
				category = 3;
				priceInput(price, category);
			}
			break;

			case 52:
			{
				category = 4;
				priceInput(price, category);
			}
			break;

			case 53:
			{
				category = 5;
				priceInput(price, category);
			}
			break;

			case 54:
			{
				category = 6;
				priceInput(price, category);
			}
			break;

			case 55:
			{
				category = 7;
				priceInput(price, category);
			}
			break;

			case 56:
			{
				set_cursor(true);
				prog_ini(true);
				set_cursor(false);
			}
			break;

			case 57:
			{
				dataOutput(version);
			}
			break;

			case 48:
			{
				system("cls");
				set_cursor(false);
				quit = "q";
				cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t    [ PROGRAMM WIRD BEENDET ]"; Sleep(700); cout << "."; Sleep(700); cout << "."; Sleep(700); cout << "."; Sleep(700); cout << ".";
			}
			break;

			default: system("cls"); cout << "\n\n\n\n\n\n\n\n\nDu hast eine nicht existente Kategorie gewählt >>> " << "UNGÜLTIGE EINGABE !!!"; Sleep(4500); system("cls");
			}
		}
}