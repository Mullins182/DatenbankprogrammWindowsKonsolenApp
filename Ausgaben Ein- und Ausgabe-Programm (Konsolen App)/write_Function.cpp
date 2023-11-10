#include<iostream>
#include<iomanip>
#include"functions.h"
#include<windows.h>
#include<string>
#include<conio.h>
#include<fstream>

using namespace std;


void priceInput(char price[], int category)
{
	bool goBack = 0;
	int setMonth = 0;
	int setYear = 0;
	double validate = 0.00;
	string dataRead = "config.ini";
	ifstream ifs;
	ofstream ofs;

	system("cls");

	ifs.open(dataRead);
	ifs >> setMonth >> setYear;
	ifs.close();

	string year = to_string(setYear);
	string dataSet = " ";
	string month = "XXX";
	string cat = "xxx";
	string priceStringToConvert;

	if (setMonth == 1)
	{
		month = "Januar";
	}
	else if (setMonth == 2)
	{
		month = "Februar";
	}
	else if (setMonth == 3)
	{
		month = "März";
	}
	else if (setMonth == 4)
	{
		month = "April";
	}
	else if (setMonth == 5)
	{
		month = "Mai";
	}
	else if (setMonth == 6)
	{
		month = "Juni";
	}
	else if (setMonth == 7)
	{
		month = "Juli";
	}
	else if (setMonth == 8)
	{
		month = "August";
	}
	else if (setMonth == 9)
	{
		month = "September";
	}
	else if (setMonth == 10)
	{
		month = "Oktober";
	}
	else if (setMonth == 11)
	{
		month = "November";
	}
	else if (setMonth == 12)
	{
		month = "Dezember";
	}


	if (category == 1)
	{
		cat = "Lebensmittel";
	}
	else if (category == 2)
	{
		cat = "Kosmetik-Artikel";

	}
	else if (category == 3)
	{
		cat = "Haushaltsbedarf";

	}
	else if (category == 4)
	{
		cat = "Genussmittel (Kaffee Alkohol)";

	}
	else if (category == 5)
	{
		cat = "Genussmittel (TABAK)";

	}
	else if (category == 6)
	{
		cat = "Genussmittel (Imbiss Lieferdienste)";

	}
	else if (category == 7)
	{
		cat = "Sonstiges (z.B Amazon OTTO)";

	}

	cout << "\n\n\n\n\n\t[ " << cat << " gewählt !]"; Sleep(2200);

	while (goBack != 1)
	{
		system("cls");
		set_cursor(true);

		cout << "\n\n\n\n\n\n\n\n\n\n\n" << setw(120) << setfill('_') << "_";
		cout << "\n\nBitte Preise von [ " << cat << " ] eingeben und durch Eingabe von [0] abschließen: \n" << setw(120) << "_" << setfill(' ');
		cout << setw(60) << " " << "\n\n\n\t\t\t\t\t\t   " << setfill('°') << setw(18) << "°";
		cout << "\n\n\t\t\t\t\t\t\t  ";
		cin >> priceStringToConvert;

		int i = 0;
		
		for (; i < 30; i++)
		{
			price[i] = priceStringToConvert[i];
		}
		price[i] = '\0';

		set_cursor(false);

		validate = charArrayStringIntoDoubleConversion(price);
				
		if (validate != 0)
		{

			string db = cat + " " + month + " " + year + ".txt";

			ofs.open(db, ofstream::out | ofstream::app);

			ofs << fixed << setprecision(2) << charArrayStringIntoDoubleConversion(price) << "\n";

			ofs.close();

			db = "GESAMTSUMME " + month + " " + year + ".txt";

			ofs.open(db, ofstream::out | ofstream::app);

			ofs << fixed << setprecision(2) << charArrayStringIntoDoubleConversion(price) << "\n";

			ofs.close();
		}
		else
		{
			system("cls");

			goBack = 1;

			cout << "\n\n\n\n\n\n\n\n\tZurück zum Kategorien-Menü !!!\n\n";
			Sleep(2200);
			cin.clear();
		}
		//validate = 0.01;
	}
	goBack = 0;
}