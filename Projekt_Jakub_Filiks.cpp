#include <iostream>
#include <array>
#include <thread>
#include <vector>

using namespace std;


struct Osoba
{
	string imie;
	string nazwisko;
};

class Wycieczki
{
public:
	
	string nazwa;
	string data;
	vector<Osoba> uczestnicy;

	

	Wycieczki()
	{
		string n, d;

		cout << "Podaj nazwe wycieczki:";
		cin >> n;
		cout << "Podaj date wycieczki";
		cin >> d;

		nazwa = n;
		data = d;
		system("CLS");
		cout << "Utworzono nowa wycieczke " <<nazwa << "!" << "\n \n";
		this_thread::sleep_for(3000ms);
		system("CLS");
	}
	~Wycieczki()
	{

	}

	void PokazInfo()
	{
		cout << data << nazwa;
	}

	void DodajUczestnikow()
	{
		int i = 0;
		while (true)		
		{	
			
			string imie, nazwisko;
			cout << "Podaj imie "<<i+1<<" uczestnika: ";
			cin >> imie;
			cout << "Podaj nazwisko " << i+1<< " uczestnika: ";
			cin >> nazwisko; 
			uczestnicy[i].imie = imie;
			uczestnicy[i].nazwisko = nazwisko;

		
			i++;

			cout << "Dodac kolejnego?(Y/N)";
			char x;
			cin >> x;
			if (x == 'Y' || x == 'y')
			{
				system("CLS");
			}
			else
			{
				system("CLS");
				return;
			}
		}
	}

	void WyswietlUczestnikow()
	{
		system("CLS");
		int i = 0;
	
		for (int i=0; i<uczestnicy.size(); i++)
		{		
			cout<<i+1<<". "<< uczestnicy[i].imie << " " << uczestnicy[i].nazwisko << endl;
		}
	}

private:

};



int main()
{
	vector<Wycieczki>wszystkieWycieczki;
	while (true)
	{
		
	
		cout << "1. Nowa wycieczka" << endl;
		cout << "2. Dodaj osoby do wycieczki" << endl;
		cout << "3. Wyswietl istniejace wycieczki" << endl;
		cout << "4. Edycja" << endl;
		cout << "5." << endl;
		cout << "0. Wyjdz" << endl;

		int x;
		cin >> x;
		switch(x)
		{		
		case 1:
			
			wszystkieWycieczki.push_back(w);
			break;
			
		case 0:
			return 0;
			break;
		default:
			break;
		}
	}
}
