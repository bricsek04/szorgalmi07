#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include <map>

using namespace std;


int main(){
    ifstream file("lista.txt");
    vector <string> vasarlasok;
    string sor;
    double vasarlasdb = 0;
    while (getline(file, sor))
    {
        istringstream iss(sor);
        string id;
        string termek;
        iss >> id;
        while (iss >> termek)
        {
            vasarlasok.push_back(termek);
        }
        vasarlasdb++;
    }
    file.close();

    map<string, int> gyak;
    
    for(string termek:vasarlasok){
        gyak[termek] ++;
    }
    for(auto gy:gyak){
        cout << gy.first << " " << gy.second/vasarlasdb*100 << "%" << endl;
    }

    
    

}