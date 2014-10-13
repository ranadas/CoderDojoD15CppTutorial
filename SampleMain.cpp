/* 
 * File:   SampleMain.cpp
 * Author: rdas
 *
 * Created on 13 October 2014, 17:34
 */

#include <cstdlib>
#include<iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cout << "Hello World" << endl;
    
    double radius, length;
    // accept some user input
    cout << "Enter the radius and length of cylinder" << endl;       
    cin >> radius >> length;
    
    // calculate area and print
    cout << "The area is " << (radius * radius * 3.14159) << endl;
    
    // calculate volume = area * length
    cout << "The volume is " << ((radius * radius * 3.14159) * length)  << endl;
    return 0;
}