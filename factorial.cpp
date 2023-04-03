#include<iostream>

using namespace std;

unsigned long long factorial(unsigned long long x){
    if(x <= 1){
        return 1;
    }
    return x*factorial(x-1);
}

int main(){
    // long long d;
    // cin >> d ;
    for(unsigned long long i = 0; i < 1000; i+=10){
        // cout << i << " - "<< factorial(i) << endl;
        printf("%llu - %llu\n", i, factorial(i));
    }
    return 0;
}