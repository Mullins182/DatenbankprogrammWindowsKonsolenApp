#include<iostream>
#include<iomanip>
#include<fstream>
#include<windows.h>
#include<string>
#include<conio.h>
#include"functions.h"

using namespace std;


void dataOutput(string version)
{
	bool goBack = 0;
	int category = 0;
	int monthSet = 0;
	int yearSet = 0;

	ifstream readData;
	string dataRead = "config.ini";

	readData.open(dataRead);									// Initialisieren der Daten für Datei Lese- und Schreiboperationen
	readData >> monthSet >> yearSet;
	readData.close();

	string cat = "xxx";
	string month = "xxx";
	string year = to_string(yearSet);


	system("cls");
	cout << "\n\n\n\n\n\t\t\t\t     [ SUMME einer Datenbankdatei ausgeben ! ]"; Sleep(2750);

	while (category != 57)
	{
		system("cls");
		set_cursor(false);

		cout << "\n        [S U M M E ] \t\t\t     WELCHE KATEGORIE AUSGEBEN ???\t\t\t\t     " << version << "\n\n";
		cout << " [1]\tLebensmittel\n\n";
		cout << " [2]\tKosmetik-Artikel\n\n";
		cout << " [3]\tHaushaltsbedarf\n\n";
		cout << " [4]\tGenussmittel (Kaffee / Alkohol)\n\n";
		cout << " [5]\tGenussmittel (TABAK)\n\n";
		cout << " [6]\tGenussmittel (Imbiss / Lieferdienst)\n\n";
		cout << " [7]\tSonstiges (Internet-Bestellungen / AMAZON / OTTO etc.)\n\n\n\n";
		cout << " [8]\tGESAMTSUMME AUSGEBEN !\n\n";
		cout << " [9]\tZURÜCK ZUM HAUPTMENÜ !\n\n";

		category = _getch();

		// Monats-Einstellung
		if (monthSet == 1)
		{
			month = "Januar";
		}
		else if (monthSet == 2)
		{
			month = "Februar";

		}
		else if (monthSet == 3)
		{
			month = "März";

		}
		else if (monthSet == 4)
		{
			month = "April";

		}
		else if (monthSet == 5)
		{
			month = "Mai";

		}
		else if (monthSet == 6)
		{
			month = "Juni";

		}
		else if (monthSet == 7)
		{
			month = "Juli";

		}
		else if (monthSet == 8)
		{
			month = "August";

		}
		else if (monthSet == 9)
		{
			month = "September";

		}
		else if (monthSet == 10)
		{
			month = "Oktober";

		}
		else if (monthSet == 11)
		{
			month = "November";

		}
		else if (monthSet == 12)
		{
			month = "Dezember";

		}
		// Kategorie-Einstellung


		if (category == 49)
		{
			cat = "Lebensmittel";
		}
		else if (category == 50)
		{
			cat = "Kosmetik-Artikel";

		}
		else if (category == 51)
		{
			cat = "Haushaltsbedarf";

		}
		else if (category == 52)
		{
			cat = "Genussmittel (Kaffee Alkohol)";

		}
		else if (category == 53)
		{
			cat = "Genussmittel (TABAK)";

		}
		else if (category == 54)
		{
			cat = "Genussmittel (Imbiss Lieferdienste)";

		}
		else if (category == 55)
		{
			cat = "Sonstiges (z.B Amazon OTTO)";

		}
		else if (category == 56)
		{
			cat = "GESAMTSUMME";

		}
		else if (category == 57)
		{
			cat = "ZURÜCK ZUM HAUPTMENÜ ...";
			system("cls");
			set_cursor(false);
			cout << "\n\n\n\n\n\n\n\n\t" << cat << " gewählt !"; Sleep(3500);
			break;
		}
		else if (category < 49 || category > 57)
		{
			system("cls"); cout << "\n\n\n\n\n\n\n\n\nDu hast eine nicht existente Kategory gewählt! >>> " << "UNGÜLTIGE EINGABE !!!"; Sleep(4500); system("cls");
			continue;
		}


		system("cls");
		set_cursor(false);
		cout << "\n\n\n\n\n\n\n\n\t" << cat << " gewählt !"; Sleep(3500);

		string db = cat + " " + month + " " + year + ".txt";

		readData.open(db);

		if (!readData)
		{
			system("cls");
			cout << "Kann " << db << " nicht öffnen!"; Sleep(4500);
		}
		else
		{
			system("cls");
			double summe = 0;
			double a = 0;
			while (readData)
			{
				Sleep(55);
				readData >> fixed >> setprecision(2) >> a;
				cout << "\t\t\t\t\t\t\t" << fixed << setprecision(2) << a << "€" << endl << endl;
				summe += a;
				a = 0;
			}
			cout << "\n\n\n\t\t\t\t\t<<<     SUMME Gesamt : " << fixed << setprecision(2) << summe << "€     >>>" << "\n\n\n\n\n\n\n\n\n\n" << "AUSGABE VON: " << db;
			goBack = _getch();
		}
		cin.clear();
		readData.close();
	}
}