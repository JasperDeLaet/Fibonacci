#include <iostream>

using namespace std;

void printFibonacci(int n){
    int f0 = 0;
    int f1 = 1;
    int f2;
    if(n == 0){
        cout << f0 << endl;
    } else{
        cout << f0 << endl;
        cout << f1 << endl;
        for(int i = 0 ; i < n - 1; i++){
            f2 = f1 + f0;
            
            cout << f2 << endl;
            
            f0 = f1;
            f1 = f2;
        }
    }
}

int main(int argc, char* argv[]) {
    int n;
    
    cin >> n;
    
    printFibonacci(n);
    return 0;
}
