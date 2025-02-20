/*A) Write a recursive function in C++ to print numbers from n to 0 ?

#include<iostream>
using namespace std;
void printNumbers(int n) {
    if (n < 0) {
        return;
    }
    cout << n << " ";
    printNumbers(n - 1);
}

int main() {
    int n=10;
    printNumbers(n);
    cout << endl;
    return 0;
}       

B) write a recursive function to compute binomial cofficients C(n,k) using the recursiv definitions:
    C(n,n)=1
    C(n,0)=1
    C(n,k)=C(n−1,k−1)+C(n−1,k)  for(0<k<n) and n>1

    
#include <iostream>
using namespace std;
int binomialCoefficient(int n, int k) {
   
 
    if (k == 0 || k == n ) {
        return 1;  
    }
    else{
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);}
}

int main() {
    int n = 5, k = 2;
    
    if (n > 1 && k > 0 && k < n) {
        cout << "C(" << n << ", " << k << ") = " << binomialCoefficient(n, k) << endl;
    } else {
        cout << "Invalid input: Ensure 0 < k < n and n > 1" << endl;
    }

    return 0;
}



C)Write a function in C++ to check if a number n is prime.(you have to check whether n is divisible by any number below n)?


#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false; 

    for (int i = 2; i < n; i++) { 
        if (n % i == 0)
            return false; 
    }
    return true; /
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n))
        cout << n << " is a prime number.";
    else
        cout << n << " is not a prime number.";

    return 0;
}

*/