#include<iostream>
#include"functions.h"

using namespace std;

// Programm zur Eingabe und Ausgabe von monatlichen Ausgaben
// Das Programm erstellt zuerst eine ini-Datei, welche den aktuellen Monat und Jahr als "Integer" speichert,
// und beim Start des Programms geladen wird.
// Es erstellt dann f�r den aktuell g�ltigen Monat und Jahr txt-Dateien (z.B. Lebensmittel August 2023)
// mit den als "Double" eingegebenen Werten !
// Die Summenausgabe-Funktion nimmt das in der ini-Datei angelegte Monat und Jahr als Grundlage f�r die
// Daten-Ausgabe ... Wird also beispielsweise die Kategorie Lebensmittel f�r die Summenausgabe gew�hlt
// und ist der in der ini-Datei gespeicherte Monat September und das Jahr 2023,
// dann sucht das Programm nach der Datei "Lebensmittel September 2023.txt.
// Im Hauptmen� l��t sich nat�rlich ein anderer Monat und Jahr f�r das Programm initialisieren ...

int main(int argc, char** argv)
{
	string programVersion = "Version 1.6";

	system("chcp 1252");
	system("cls");

	chooseCategory(programVersion);

	return 0;
}