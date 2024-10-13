#include<iostream>
using namespace std;

int main() {
    int i;

    cout << "Enter a number: ";
    cin >> i;

    do{
        int  j = i;

        do{
            cout << "* ";
            j--;
        }while(j > 0);

        cout << endl;
        i--;
    }while(i > 0);
    
    return 0;

}