#include <iostream>

using namespace std;

int main(){
    int number = 100;
    while (number <= 1000){
        number += 10;
        cout << 'Now your number is: ' << number << endl;
    }
    cout << "Everything gone ok"<< endl;
    return 0;
}
