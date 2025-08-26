#include <iostream>
using namespace std;

int main() {
   string arr[6];  
   
    cout << "Enter 6 names:" << endl;
    for (int i = 0; i < 6; i++) {
       cout << "Enter name "<<i+1 << "  ";
	    cin >> arr[i];
    }
    cout << "You entered: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}



