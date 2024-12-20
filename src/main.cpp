#include <iostream>
using namespace std;

int main() {

    string play_ = "__Play__";
    string play = "Play";

    string settings_ = "__Settings__";
    string settings = "Settings";

    string exit_ = "__Exit__";
    string exit = "Exit";

    int index = 1;

    while (true) {
        
        if (index == 1) {
            cout << play_ << endl;
            cout << settings << endl;
            cout << exit << endl;
        } else if (index == 2) {
            cout << play << endl;
            cout << settings_ << endl;
            cout << exit << endl;
        } else if (index == 3) {
            cout << play << endl;
            cout << settings << endl;
            cout << exit_ << endl;
        }

        char key;
        cin >> key;

        if (key == 'w') {
            if (index == 1) {
                index = 3;
            } else {index -= 1;}
        } else if (key == 's') {
            if (index == 3) {
                index = 1;
            } else {index += 1;}
        } else {
            break;
        } 

    int index = 2;
    int sum1, sum2, res;
    
    while (true) {
        if (key == q) {
            if (index == 2) {
                index = 2;
            } 
        }
    }
             
        
    }

    return 0;
}