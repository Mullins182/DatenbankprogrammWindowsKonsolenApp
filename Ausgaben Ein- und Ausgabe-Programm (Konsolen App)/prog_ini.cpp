#include<iostream>
#include<iomanip>
#include<vector>
#include<string>
#include<fstream>
#include<conio.h>

using namespace std;


vector <string> prog_ini(bool file_create)
{
	string dataRead = "config.ini";
	string fileOutput = "config.ini";
	string month;
	string year;
	vector <string> monthAndYear{};
	
	ifstream readData;
	ofstream writeData;
		
	int setMonth = 0;
	int setYear = 0;

	readData.open(dataRead);									// Initialisieren der Daten für Datei Lese- und Schreiboperationen
	readData >> setMonth >> setYear;
	readData.close();

	
	
		if (file_create == true)
		{			
			system("cls");

			cout << "\n\n\n\n\n\n Um die Ausgabe-Dateien erstellen zu können gib den [MONAT] ein für den diese erstellt werden sollen,\n\n (z.B. März), und bestätige mit [ENTER]\n\n";
			cin >> month;
			cout << "\n\n\n\n\n\n Gib nun das [JAHR] ein (z.B. 2023) und bestätige mit [ENTER]\n\n";
			cin >> setYear;

			if (month == "Januar" || month == "januar")
			{
				setMonth = 1;

				writeData.open(fileOutput, ofstream::out);			// Datei-Ausgabe Anweisungen

				writeData << setMonth << "\n" << setYear;

				writeData.close();
			}
			else if (month == "Februar" || month == "februar")
			{
				setMonth = 2;

				writeData.open(fileOutput, ofstream::out);			// Datei-Ausgabe Anweisungen

				writeData << setMonth << "\n" << setYear;

				writeData.close();
			}
			else if (month == "März" || month == "märz")
			{
				setMonth = 3;

				writeData.open(fileOutput, ofstream::out);			// Datei-Ausgabe Anweisungen

				writeData << setMonth << "\n" << setYear;

				writeData.close();
			}
			else if (month == "April" || month == "april")
			{
				setMonth = 4;

				writeData.open(fileOutput, ofstream::out);			// Datei-Ausgabe Anweisungen

				writeData << setMonth << "\n" << setYear;

				writeData.close();
			}
			else if (month == "Mai" || month == "mai")
			{
				setMonth = 5;

				writeData.open(fileOutput, ofstream::out);			// Datei-Ausgabe Anweisungen

				writeData << setMonth << "\n" << setYear;

				writeData.close();
			}
			else if (month == "Juni" || month == "juni")
			{
				setMonth = 6;

				writeData.open(fileOutput, ofstream::out);			// Datei-Ausgabe Anweisungen

				writeData << setMonth << "\n" << setYear;

				writeData.close();
			}
			else if (month == "Juli" || month == "juli")
			{
				setMonth = 7;

				writeData.open(fileOutput, ofstream::out);			// Datei-Ausgabe Anweisungen

				writeData << setMonth << "\n" << setYear;

				writeData.close();
			}
			else if (month == "August" || month == "august")
			{
				setMonth = 8;

				writeData.open(fileOutput, ofstream::out);			// Datei-Ausgabe Anweisungen

				writeData << setMonth << "\n" << setYear;

				writeData.close();
			}
			else if (month == "September" || month == "september")
			{
				setMonth = 9;

				writeData.open(fileOutput, ofstream::out);			// Datei-Ausgabe Anweisungen

				writeData << setMonth << "\n" << setYear;

				writeData.close();
			}
			else if (month == "Oktober" || month == "oktober")
			{
				setMonth = 10;

				writeData.open(fileOutput, ofstream::out);			// Datei-Ausgabe Anweisungen

				writeData << setMonth << "\n" << setYear;

				writeData.close();
			}
			else if (month == "November" || month == "november")
			{
				setMonth = 11;

				writeData.open(fileOutput, ofstream::out);			// Datei-Ausgabe Anweisungen

				writeData << setMonth << "\n" << setYear;

				writeData.close();
			}
			else if (month == "Dezember" || month == "dezember")
			{
				setMonth = 12;

				writeData.open(fileOutput, ofstream::out);			// Datei-Ausgabe Anweisungen

				writeData << setMonth << "\n" << setYear;

				writeData.close();
			}
			else
			{
				system("cls");
				cout << "FALSCHE EINGABE !!!   ";
				cin.clear();
				setMonth = 0;
				setYear  = 0;
				system("Pause");				
			}

		}
		else if (file_create == false)
		{
			if		(setMonth == 0)
			{
				month = "NICHT DEFINIERT !";
			}		
			else if (setMonth == 1)
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
		}

		year = to_string(setYear);

		monthAndYear.push_back(month);
		monthAndYear.push_back(year);

		return monthAndYear;
}