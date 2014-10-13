#include<iostream>
using namespace std;

/*
 * 
 */
int anInteger;
char aCharacter = 'R';
char aString[20];

void printarray(char arg[], int length);

int main(int argc, char** argv) {
    cout << "Scope " << anInteger << aCharacter;
    for (int i = 0; i < 21; i++) {
        cout << "Setting value " << i << endl;
        aString[i] = i;
    }
    cout << "somevalue" << aString << endl;
    printarray(aString, 20);
    return 0;
}

void printarray(char arg[], int length) {
    cout << "Size : " << sizeof(arg) << endl;
    for (int n = 0; n < length; ++n)
        cout << arg[n] << ' ';
    cout << '\n';
}