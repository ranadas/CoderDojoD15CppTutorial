
#include <iostream>
//#include <cstdlib>
//
using namespace std;

/******************************************************************************************/
/*  This is an example that shows how to write simple templated arithmetic functions calculator. */
/******************************************************************************************/

/*cin and cout functions are in "std" namespace so we are telling our compliler that we will use functions
from std namespace. If we do not include name space we can still use functions inside std namespace but 
for that we will have to write "std::" before every function that is in std namespace. like line 16 
std::cout
 */
using namespace std;

//templated function for addition
template<class type1, class type2> double add(type1 num1, type2 num2) {
    return num1 + num2;
}

//templated function for subtraction
template<class type1, class type2> double subtract(type1 num1, type2 num2) {
    return num1 - num2;
}

//templated function for division
template<class type1, class type2> double divide(type1 num1, type2 num2) {
    return num1 / num2;
}

//templated function for multiply
template<class type1, class type2> double multiply(type1 num1, type2 num2) {
    return num1*num2;
}

int main() {
    //Calculator Menu
    double num1, num2;
    char op;
    cout << "Enter Operand 1 : ";
    cin >> num1;
    cout << "Enter Operator [+,-,*,/] : ";
    cin >> op;
    //ignore and clear functions remove new line character for input buffer stream
    cin.ignore();
    cin.clear();
    cout << "Enter Operand 2 : ";
    cin >> num2;
    int result;
    
    if(op == '+'){result = add(num1, num2);}
    else if(op == '-'){result = subtract(num1, num2);}
    else if(op == '*'){result = multiply(num1, num2);}
    else{result = divide(num1, num2);}
    
    cout << "Result : " << result << endl;
    
    return 0;
}