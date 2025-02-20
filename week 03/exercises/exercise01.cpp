#include <iostream>
using namespace std;
int power(int x, int n) {
    if (n == 0) {
        return 1; 
    }
    else {
        return power(x, n - 1) * x;  
    }
}
int main() {
    int x = 2;  
    cout << "n\t2^n" << endl;
    for (int n = 0; n <= 20; n++) {
        cout << n << "\t" << power(x, n) << endl;
    }

    return 0;
}
