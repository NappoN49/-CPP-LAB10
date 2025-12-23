#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    ifstream input;
    input.open("score.txt");
    string s;
    double sumi=0,N=0,mean,sumi_square=0,SD;
    while(getline(input,s)){
        double a = stof(s);
        sumi = sumi+a;
        sumi_square = sumi_square+(a*a);
        N++;
    }
    mean=sumi/N;
    SD=sqrt((sumi_square/N)-(mean*mean));
    cout << "Number of data = "<<N<<"\n";
    cout << setprecision(3);
    cout << "Mean = "<<mean<<"\n";
    cout << "Standard deviation = "<<SD;
    input.close();
    return 0;
}