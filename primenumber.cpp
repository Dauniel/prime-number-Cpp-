# include <iostream> 
using namespace std;

int main() {

int n, i, mod;
n = 17;


for (i = 2; i < n; i++) {

 if (n%i == 0) {
    cout << "number is not prime ";
    break;
}

}

for (i = 2; i < n; i++) {


    if (n%i != 0) {
    cout << "number is prime ";
    break;
    }

}



}
