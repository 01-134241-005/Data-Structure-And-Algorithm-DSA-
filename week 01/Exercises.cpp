//EXERCISE 1.1: function to multiply two complex numbers using operator overloadding

/* #include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    Complex operator*( Complex& other) {
        return Complex(
            (real * other.real) - (imag * other.imag),
            (real * other.imag) + (imag * other.real)
        );
    }
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main() {
    Complex c1(3, 2);  
    Complex c2(1, 7); 
    Complex result = c1 * c2;  
    cout << "Multiplication of complex numbers: ";
    result.display();  
    return 0;
} */

//EXERCISE 1.2 :Function to comput minimum of a pair of numbers in the class template

/* #include<iostream>
using namespace std;
template <class t>
class mypair {
    t a, b;
public:
    mypair(t first, t second) :a(first), b(second) {}
    t getmin();
};
template <class t>
t mypair<t>::getmin() {
    t result;
    result = a < b ? a : b;
    retun result;
}
int main() {
    mypair<int> myobject(100, 67);
    cout << myobject.getmin() << endl;
    return 0;
} */

//EXERCISE 1.3 :Function to compute max,min of a sequence in the class template

/* #include <iostream>  
using namespace std;
template <class T, int N>
class mysequence {
    T memblock[N];
public:
    void setmember(int x, T value);
    T getmember(int x);
    T getMin();  
    T getMax(); 
};
template <class T, int N>
void mysequence<T, N>::setmember(int x, T value) {
    memblock[x] = value;
}
template <class T, int N>
T mysequence<T, N>::getmember(int x) {
    return memblock[x];
}

template <class T, int N>
T mysequence<T, N>::getMin() {
    T min = memblock[0];
    for (int i = 0; i < N; i++) {
        if (memblock[i] < min) {
            min = memblock[i];
        }
    }
    return min;
}
template <class T, int N>
T mysequence<T, N>::getMax() {
    T max = memblock[0];
    for (int i = 0; i < N; i++) {
        if (memblock[i] > max) {
            max = memblock[i];
        }
    }
    return max;
}
int main() {
    mysequence<int, 5> myints;
    mysequence<double, 5> myfloats;
    myints.setmember(0, 100);
    myints.setmember(1, 25);
    myints.setmember(2, 50);
    myints.setmember(3, 10);
    myints.setmember(4, 75);
    myfloats.setmember(0, 1.5);
    myfloats.setmember(1, 3.2);
    myfloats.setmember(2, 2.8);
    myfloats.setmember(3, 4.1);
    myfloats.setmember(4, 0.9);
    cout << myints.getmember(0) << '\n';
    cout << myfloats.getmember(3) << '\n';
    cout << "Minimum in myints: " << myints.getMin() << '\n';
    cout << "Maximum in myints: " << myints.getMax() << '\n';
    cout << "Minimum in myfloats: " << myfloats.getMin() << '\n';
    cout << "Maximum in myfloats: " << myfloats.getMax() << '\n';

    return 0;
} */

//EXERCISE 1.4 :program to count number of words  and number of sentence along with characters 

/* #include <iostream>
#include <fstream>
using namespace std;
int main() {
    ifstream inFile("fin.txt");  
    ofstream outFile("fout.txt");
    if (!inFile) {
        cerr << "Error opening input file!" << endl;
        return 1;
    }
    char ch;
    int charCount = 0, wordCount = 0, sentenceCount = 0;
    bool inWord = false;
    while (inFile.get(ch)) {
        outFile << ch;  
        charCount++;     
        if (isspace(ch) || ch == '\n' || ch == '\t') {
            if (inWord) {
                wordCount++;
                inWord = false;
            }
        }
        else if (isalpha(ch) || isdigit(ch)) {
            inWord = true;
        }
        if (ch == '.' || ch == '!' || ch == '?') {
            sentenceCount++;
        }
    }
    if (inWord) {
        wordCount++;
    }
    outFile << "\n\nCharacter count = " << charCount << endl;
    outFile << "Word count = " << wordCount << endl;
    outFile << "Sentence count = " << sentenceCount << endl;
    inFile.close();
    outFile.close();
    cout << "Processing complete. Results saved in fout.txt" << endl;
    return 0;
} */

//EXERCISE 1.5

/* #include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class House {
public:
    string owner;
    string address;
    int bedrooms;
    float price;
    void readData() {
        cout << "\nEnter Owner: ";
        getline(cin, owner);
        cout << "Enter Address: ";
        getline(cin, address);
        cout << "Number of Bedrooms? : ";
        cin >> bedrooms;
        cout << "Price: ";
        cin >> price;
        cin.ignore(); 
    }
    void displayData() const {
        cout << left << setw(15) << owner
            << setw(25) << address
            << setw(10) << bedrooms
            << setw(10) << price << endl;
    }
};
int main() {
    House available[100];
    int count = 0;
    char choice;
    do {
        cout << "\nEnter details for house " << count + 1 << ":";
        available[count].readData();
        count++;
        cout << "\nEnter another house? (Y/N): ";
        cin >> choice;
        cin.ignore(); 
    } while (toupper(choice) == 'Y' && count < 100);
    cout << "\n" << setw(15) << "Owner"
        << setw(25) << "Address"
        << setw(10) << "Bedrooms"
        << setw(10) << "Price" << endl;
    cout << string(60, '-') << endl;
    for (int i = 0; i < count; i++) {
        available[i].displayData();
    }
    return 0;
}*/