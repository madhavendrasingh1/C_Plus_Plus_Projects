#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    
    while (a > 0 && b > 0) {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    int gcd = (a == 0) ? b : a;
    cout << "The GCD of the numbers is " << gcd << endl;
    return 0; 
}
