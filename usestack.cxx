// usestack.cpp - for CS 24 lab practice using stacks
// VIKRAM THARAKAN, 5/16/17, Mathew Ennis

#include "intstack.h"
#include <iostream>
using namespace std;

int main() {
    Stack s;
    /*
    s.push(10);
    s.push(20);

    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    */

    // evaluating "9 2 4 + * "
    // 9*(2+4)

    // start with an empty stack

    Stack numbers;

    // first three tokens all numbers to push "9 2 4":
    numbers.push(9);
    numbers.push(2);
    numbers.push(4);

    // fourth token is calculation to do "*":
    int right = numbers.top();
    numbers.pop();
    int left = numbers.top();
    numbers.pop();
    numbers.push(left + right);

    // last token is another calculation "+":
    right = numbers.top();
    numbers.pop();
    left = numbers.top();
    numbers.pop();
    numbers.push(left * right);

    // done - print result:
    cout << numbers.top() << endl;
    //Should be 54
    
    return 0;
}
