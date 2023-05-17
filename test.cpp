#include <iostream>
using namespace std;
// g++ [filename] to compile
// ./a.out to run
int main() {
    // Basic print text
    cout << "Hello world!" << endl;

    // Variable
    int num = 17;
    cout << num << endl;
    cout << "The number is " << num << endl;

    // Addition
    int x = 15, y = 12;
    int sum = x + y;
    cout << sum << endl;

    const int minPerHr = 60;

    int minutes;
    cout << "How many minutes did you exercise? ";
    cin >> minutes;
    double hours = minutes / minPerHr;
    cout << "You exercised for " << hours << " hours." << endl;
    return 0;
}