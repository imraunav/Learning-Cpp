#include<iostream>

using namespace std;

int main(){
    long n;
    int _; // just to suppress a warning
    _ = scanf("%ld", &n);

    while(n!=1){
        printf("%ld ", n);
        if(n%2 == 0){ // if n is even
            n = n/2;
        }
        else{ // if n is odd
            n = n*3 + 1;
        }
    }
    printf("1");
    return 0;
}