#include<iostream>

using namespace std;

int main(){
    int term1, term2;
    term1 = 1;
    term2 = 2;
    long long unsigned summa = 0;
    while(term2<=4000000){
        if(term2%2 == 0){
            summa += term2;
        }
        int temp = term1 + term2;
        term1 = term2;
        term2 = temp;
    }
    cout << "\nSum of even terms in Fibbonaci series "<< summa<< endl;
    return 0;
}