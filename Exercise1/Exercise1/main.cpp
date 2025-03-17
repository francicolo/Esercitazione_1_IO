#include <iostream>
#include <fstream>
#include <cmath>

int func(int a){
	int S = (a * (a+1) *(2*a+1))/6;
	return S;
}


int main()
{
	std::ifstream file("data.txt"); //leggere contenuto file
	if (file.fail())
	{
		std::cerr <<"Errore nell'apertura del file" << std::endl;
		return 1;	//segnalo se ho un errore nell'apertura
	}
	std::string tmp;
	int n;
	int sum = 0;
	while (getline(file, tmp)) 	// Leggi una riga
		{ 
		if (tmp[0] != '\0' && tmp[0] != '#')//I valori sono nelle righe che non iniziano con # e non vuote
			{ 
			n = std::stoi(tmp); //from String TO Integer, converto la stringa, letta dal file, in intero
			sum += pow(n,2); //ad ogni iterazione sommo i quadrati dei valori	
			}
			
		}
	int N;
	std::cout << "1) La somma dei quadrati dei valori è: " << sum << std::endl; //stampo la somma calcolata
	
	std::cout << "2) Inserire N intero:" << std::endl;
	std::cin >> N;
	/*while (std::cin.fail()){
		std::cout << "Errore, non è stato inserito un numero intero";
		std::cout << "Inserire N:" << std::endl;
		std::cin >> m;
		
	}
	*/
	int S = func(N);
	std::cout << "2) Il valore della funzione in N è: " << S << std::endl;
	
	if (S == sum) {
		std::cout << "3) I due valori coincidono" <<std::endl;
	}
	else
		std::cout << "3) I due valori non coincidono" <<std::endl;

    return 0;
}
