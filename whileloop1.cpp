#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n ;
    int sum = 0;
    int i = 0;
    while(i <= n){
        sum = sum + i;
        cout << "The sum of even number is " <<sum<<endl ;
        i = i +2;

    }

}