#include <iostream>
using namespace std;

class baseclass {
    public:
        void fxn() { cout << "ran base class version of fxn()" << endl; };
        // virtual void fxn() { cout << "ran base class version of fxn()" << endl; };
};

class derivedclass : public baseclass {
    public:
        void fxn() { cout << "ran derived class version of fxn()" << endl; };
};

int main()
{
    baseclass base;
    derivedclass derived;   

    cout << "This program demonstrates the use of the virtual keyword." << endl;
    cout << "Try running this with and without the virtual keyword in class base." << endl;
    cout << "Press enter to continue, CTRL+C to exit early." << endl;
    cout << "-------------------------------------" << endl;
    getchar();
    cout << "calling base.fxn(). Do you think this will run the base class's version of fxn(), or the derived?" << endl;
    getchar();
    cout << "base.fxn() output: ";
    base.fxn();
    getchar();

    cout << "-------------------------------------" << endl << endl;
    cout << "calling derived.fxn(). What do you think this will output?" << endl;
    getchar();
    cout << "derived.fxn() output: ";
    derived.fxn();
    getchar();

    cout << "-------------------------------------" << endl << endl;
    cout << "Here's where things get juicy: what happens when we have a base pointer, pointing to a derived class?" << endl;
    cout << " It depends on whether or not you use the virtual keyword." << endl;
    getchar();
    baseclass * bp = &derived;
    cout << "bp = &derived" << endl;
    cout << "running: bp->fxn(). Will this run the base, or derived class's fxn()?" << endl;
    getchar();
    cout << "\033[1;36m";
    bp->fxn();
    cout << "\033[0m";
    getchar();
    cout << "Try adding the virtual keyword in main.cpp and recompiling." << endl << endl;
    cout << "-------------------------------------" << endl ;
}

