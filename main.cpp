#include <iostream>
#include "Annexe.h"
#include <string>
using namespace std;

int main() {
    string a;
    int b{2},c{3};
    cin>>b;
    cin.ignore();
    getline(cin, a);
    cout<<a<<endl;
    return 0;

}