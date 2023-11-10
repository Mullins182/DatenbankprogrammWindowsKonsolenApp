#include<iostream>
#include<iomanip>
#include<string>

using namespace std;




double charArrayStringIntoDoubleConversion(char convert[])			// Konvertierung von Char-Array Value in Double Value
{
	double converted = 0.00;
	char result[50]{};
	int i = 0;


	while (i < 30)
	{

		if (convert[i] == ',')
		{
			convert[i] = '.';
		}
		i++;
	}

	i = 0;

	while (i < 30)
	{
		result[i] = convert[i];
		i++;
	}
	converted = stod(result);
	return converted;

}