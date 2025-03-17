#include <iostream> 
#include <cmath>
#include <limits>
#include <iomanip> //manipolatori per input/output, cambiano il formato
#include <numbers> //costanti matematiche
int main()
{	int a = -1;
	unsigned b;
    bool c = true; // oppure false
	double d = 3.4; //è di base un double, 2.0f è un float
	std::string str = "Hello"; // std::string è il tipo stringa
	char e = 'a'; // char è il tipo carattere
	sizeof(int);	//dimensione di un tipo int
	int a1 = a+d; //somma di int e double, trasforma l'int in double e poi somma e poi tronca
	std::cout << a1 << std::endl;
	std::string s1 << str + std::to_string(d);
	/*commento
	su più 
	righe*/
	std::cout << sizeof(int)<<std::endl;
	std::cout << -pow(2,31) << " " <<pow(2,31)-1 << std::endl; //pow stampa double, con i manipolatori cambio il formato
	std::cout << std::numeric_limits<int>::min()
				<<" "<<
				std::numeric_limits<int>::max() << std::endl; //quanti int si possono rappresentare
	std::cout << std::setprecision(16)<< std::scientific; //notazione scientifica con 16 cifre, fissa questo formato da qui 
	std::cout << std::numbers::pi << std::endl;
	return 0;
}
