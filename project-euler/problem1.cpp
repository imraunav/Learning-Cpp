#include<iostream>
#include<vector>

using namespace std;

long long unsigned sum_div_till(int div, long long unsigned till){
    long long unsigned target;
    for(long long unsigned i = till-1; i >= div; i--){ // search for the last number in range that is a multiple
        if(i%div==0){
            target = i;
            break;
        }
    }   

    long long unsigned summa = (target/div)*(div + target) / 2;
    return summa;
}

int main(){
    // Concepts of AP could be used for larger range
    long k=1000; // range of search
    // vector<long> multiples;
    // unsigned long long running_sum=0;

    // for(int i=1; i<k; i++){
    //     if (i % 3 == 0 || i % 5 == 0){
    //         multiples.push_back(i);
    //         running_sum += i;
    //     }
    // }
    // cout << "\nNo. of Multiples found : " << multiples.size();

    // cout << "\nMultiples : ";
    // for(int i=0; i<multiples.size(); i++){
    //     cout << multiples[i]<< " ";
    // }
    // cout << "\nSum of the multiples : " << running_sum << "\n"; // Ans: 233168
    // long summa_3 = 333*(3 + 999)/2;
    // long summa_5 = (995/5)*(5 + 995)/2;
    // long summa_15 = (990/15)*(15 + 990)/2;
    // cout << "\n Alternate method : " << summa_3 + summa_5 - summa_15 << endl; // this works

    long long unsigned summa_3 = sum_div_till(3, k);
    long long unsigned summa_5 = sum_div_till(5, k);
    long long unsigned summa_15 = sum_div_till(15, k);
    cout << "\n Alternate generalised faster method : " << summa_3 + summa_5 - summa_15 << endl;
    return 0;
}