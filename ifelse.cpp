#include <iostream>

using namespace std;

int main(){
    char n;
    cin >> n ; 
    if (n >= 'a' && n <= 'z' )
    {
        cout<< "the character is lower case "<<n<<endl;
    }
    else if (n >= 'A' && n <= 'Z' )
    {
        cout<< "the character is UPPER case "<<n<<endl;
    }
    else 
    {
        cout << "the character is Number "<< n <<endl;
    }

}