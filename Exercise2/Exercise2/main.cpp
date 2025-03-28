#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;


double map(double x){
    double y = (3.0/4.0)*x - 7.0/4.0; //mappa da [1,5] a [-1,2]
    return y;
}


int main(){
    ofstream ofs("result.txt"); //creo il file di output
    ifstream ifs("data.txt"); //leggo il file di input
    
    if (ofs.fail()){
        cerr<<"Error creating file"<<endl;
        return 1;
    }
    if (ifs.fail()){
        cerr<<"File not found"<<endl;
        return 1;
    }

    double val;
    int i = 0;
    double mean = 0;
    double sum = 0;
    ofs << setprecision(16) << scientific; //imposto il formato degli output
    ofs << "# N Mean" << endl;
    while (ifs>>val){
        i++;
        val = map(val);
        sum += val;
        mean = sum/i;
        ofs << i << " " << mean << endl;
    }


    return 0;
}
