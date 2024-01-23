#include <iostream>
#include <fstream>
using namespace std;
const char DNif[] = "Duomenys.txt";    	//pradiniø duomenø failo vardas(Duomenø Nuskaitymas ið failo)
const char DIif[] = "Rezultatai.txt";       	// Rezultatø failo vardas (Duomenø Áraðymas á failà)
//--------------------------------------
int main()
{
                  	int n,          	//n - reikiamas skaièiø kiekis
                                       	Fn=1,        	//Fibonacci skaicius
                                       	F1 = 1, //Fibonacci skaicius 1
                                       	F2 = 1,      	//Fibonacci skaicius 2
                                       	F3 = 1;      	//Fibonacci skaicius 3

                  	ifstream fd(DNif);
                  	ofstream fr(DIif);
                  	if (!fd)
                  	{
                                       	cout << "Failas neatidarytas" << endl;

                  	}
                  	else
                  	{
                                       	cout << "Failas atidarytas" << endl;

                  	}

                  	fd >> n;
                  	fd.close();
                  	if (n < 1 || n > 20) {
                                       	cout << "ivestas netinkamas skaicius. Skaiciaus parametrai: (1<= n < 20)" << endl;
                                       	return 0;
                  	}
                  	for (int i = 3; i < n; i++)
                  	{
                                       	F1 = F2;
                                       	F2 = F3;
                                       	F3 = Fn;

                                       	Fn = F1 + F2 + F3;
                                       	// 1 1 1 3 5 9
                  	}

                  	fr << Fn;
                  	fr.close();
}
