//EXAMPLE 1.1 :function call by value,refernce ,pointer

/* #include <iostream>
using namespace std;
int max1(int a, int b) {
    return (a > b) ? a : b;
}
void max2(int a, int b, int& larger) {
    larger = (a > b) ? a : b;
}
void max3(int a, int b, int* larger) {
    *larger = (a > b) ? a : b;
}
int main() {
    int a = 6, b = 9;
    cout << "Maximum using max1: " << max1(a, b) << endl;
    int result2;
    max2(a, b, result2);
    cout << "Maximum using max2: " << result2 << endl;
    int result3;
    max3(a, b, &result3);
    cout << "Maximum using max3: " << result3 << endl;
    return 0;
} */

//EXAMPLE 1.2 :complex number class

/* #include <iostream>
#include <math.h>
using namespace std;
class Complex {
private:
    float re;
    float im;
public:
    Complex(float r, float i) : re(r), im(i) {}
    Complex(float r) { re = r;im = 0.0; }
    ~Complex() {}
    double Mangnitude() {
        return sqrt(re * re + imag() * imag());
    }
    float real() { return re; }
    float imag() { return im; }
    Complex operator+(Complex b) {
        return Complex(re + b.re, im + b.im);
    }
    Complex operator=(Complex b) {
        re = b.re; im = b.im;
        return *this;
    }
};
int main() {
    Complex a(1.0, 1.0);  
    Complex* b = new Complex(5.0);
    Complex c(0, 0);  
    cout << "a real= " << a.real() << "a imaginary= " << a.imag() << endl;
    cout << "b real= " << b->real() << "b imaginary= " << b->imag() << endl;
    c = a + (*b);
    cout << "c real= " << c.real() << "c imaginary= " << c.imag() << endl;
    return 0;
} */

//EXAMPLE 1.3 :defining and calling a function template

/* #include<iostream>
using namespace std;
template <class t>
t getmax(t a, t b) {
    t result;
    result = a > b ? a : b;
    retun result;
}
int main() {
    int i = 5, j = 6, k;
    long l = 10, m = 5, n;
    k = getmax<int>(i, j);
    n = getmax<long>(l, m);
    cout << k << endl;
    cout << l << endl;
    return 0;
} */

//EXAMPLES 1.4 :Defining and using a class template

/* #include<iostream>
using namespace std;
template <class t>
class mypair {
    t a, b;
public:
    mypair(t first,t second):a(first),b(second){}
    t getmax();
 };
template <class t>
t mypair<t>::getmax() {
    t result;
    result = a > b ? a : b;
    retun result;
}
int main() {
    mypair<int> myobject(100, 67);
    cout << myobject.getmax() << endl;
    return 0;
} */

//EXAMPLE 1.5 :Definig and using another class template

/* #include <iostream>  
using namespace std;
template <class T, int N>
class mysequence {
    T memblock[N];
public:
    void setmember(int x, T value);
    T getmember(int x);
};
template <class T, int N>
void mysequence<T, N>::setmember(int x, T value) {
    memblock[x] = value;
}
template <class T, int N>
T mysequence<T, N>::getmember(int x) {
    return memblock[x];
}
int main() {
    mysequence<int, 5> myints;
    mysequence<double, 5> myfloats;
    myints.setmember(0, 100);
    myfloats.setmember(0, 1.5);
    cout  << myints.getmember(0) << '\n';
    cout  << myfloats.getmember(3) << '\n';
    return 0;
} */

//EXAMPLE 1.6 : To count number of charactrs in a text file

/* #include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream outFile;
    outFile.open("fout.txt");
    ifstream inFile("fin.txt");  
    char ch;
    int Count = 0;
    while (inFile.get(ch)) {
        outFile << ch;
        Count++;
    }
    outFile << "\n\nCharacter count = " << Count << endl;
    inFile.close();
    outFile.close();
    return 0;
} */

