#include <iostream>
using namespace std;

int main(){
    int n;
    int a = 0;
    int b = 1;
    int next;
    cout<<"How many Fibonacci numbers? ";
    cin>>n;
    cout<<"Fibonacci Sequence: ";
    for(int i = 0; i < n; i++){
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    return 0;
}
