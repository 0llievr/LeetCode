#include <iostream>
using namespace std;

int main(){
    string tmp = "testtest";
    char a[]="penis";
    strcpy(a, tmp.c_str() );
    cout << a[3] << endl;
    printf("%s\n", a);
    printf("%d\n", strlen(a));
}