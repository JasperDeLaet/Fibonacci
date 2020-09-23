#include <iostream>

using namespace std;

void printFibonacci(int n){
    int f0 = 1;
    int f1 = 1;
    int f2 = 1;
    int f3;
    if(n == 0){
        cout << f0 << endl;
    } else if(n == 1) {
    	cout << f0 << endl;
        cout << f1 << endl;
    }
    else{
        cout << f0 << endl;
        cout << f1 << endl;
        cout << f2 << endl;
        for(int i = 0 ; i < n - 1; i++){
            f3 = f2 + f1 + f0;
            
            cout << f3 << endl;
            
            f0 = f1;
            f1 = f2;
            f2 = f1;
        }
    }
}

int main(int argc, char* argv[]) {
    int n;
    
    cin >> n;
    
    printFibonacci(n);
    return 0;
}
