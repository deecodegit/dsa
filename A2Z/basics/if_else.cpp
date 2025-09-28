//
// Created by Devanshi Sahu on 28-09-2025.
//
#include <iostream>
using namespace std;

void printGrade() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 90)
        cout << "A" << endl;
    else if (marks >= 70)
        cout << "B" << endl;
    else if (marks >= 50)
        cout << "C" << endl;
    else if (marks >= 35)
        cout << "D" << endl;
    else
        cout << "Fail" << endl;
}

int main() {
    printGrade();
    return 0;
}
