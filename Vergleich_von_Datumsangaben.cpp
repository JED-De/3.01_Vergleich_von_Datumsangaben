#include <iostream>
using namespace std;

int main()
{
	int tag_eins;
	int tag_zwei;
	int monat_eins;
	int monat_zwei;
	int jahr_eins;
	int jahr_zwei;
	int ergebnis = 0;
	cout << "Bitte geben Sie den Tag des ersten Datums ein: ";
	cin >> tag_eins;
	cout << "Bitte geben Sie den Monat des ersten Datums ein: ";
	cin >> monat_eins;
	cout << "Bitte geben Sie das Jahr des ersten Datums ein: ";
	cin >> jahr_eins;
	cout << "Bitte geben Sie den Tag des zweiten Datums ein: ";
	cin >> tag_zwei;
	cout << "Bitte geben Sie den Monat des zweiten Datums ein: ";
	cin >> monat_zwei;
	cout << "Bitte geben Sie das Jahr des zweiten Datums ein: ";
	cin >> jahr_zwei;

	if (jahr_eins < jahr_zwei)
	{
		ergebnis = 1;
	}

	else if (jahr_eins > jahr_zwei)
	{
		ergebnis = 3;
	}
	 
	else
	{
		if (monat_eins < monat_zwei)
		{
			ergebnis = 1;
		}

		else if (monat_eins > monat_zwei)
		{
			ergebnis = 3;
		}

		else
		{
			if (tag_eins < tag_zwei)
			{
				ergebnis = 1;
			}

			else if (tag_eins > tag_zwei)
			{
				ergebnis = 3;
			}

			else 
			{
				ergebnis = 2;
			}
		}
	}


	if (ergebnis == 0)
	{
		cout << "Fehler im Programm" << endl;
	}

	if (ergebnis == 1)
	{
		cout << "Das erste Datum liegt vor dem zweiten Datum." << endl;
	}

	if (ergebnis == 2)
	{
		cout << "Beide Datumsangaben sind gleich." << endl;
	}

	if (ergebnis == 3)
	{
		cout << "Das zweite Datum liegt vor dem ersten Datum." << endl;
	}
	system("PAUSE");
	return 0;
}