#include <iostream>
using namespace std;


void myfunct(int a){
    cout << a << endl;
    
    if(a < 3){
        myfunct(a+1);
    }

    cout << a << endl;

}

int main(){
    myfunct(0);
}