# include <iostream> 
using namespace std;

int main() {

int n, i, mod;
cout << "Enter a number: ";
cin >> n;


for (i = 2; i < n; i++) {

 if (n%i == 0) {
    cout << "number is not prime\n";
    break;
 }
 else if (n%i != 0) {
 cout << "number is prime\n";
    break;
 }

}

}
