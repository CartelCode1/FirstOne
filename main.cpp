#include <iostream>
#include "Annexe.hpp"
#include <string>
#include "Calculatrice.hpp"
#include <vector>

using namespace std;

int main() {
    string ligne;//On récupère la ligne de l'utilisateur

    getline(cin,ligne);
    cin.ignore();

    vector<string> arguments = getArgument(ligne);

    int a=convertisseurStringtoInt(arguments[0]);
    int b=convertisseurStringtoInt(arguments[2]);
    char op=arguments[1][0];

    cout<<calcul(a/1.,b/1.,op)<<endl;
   

    return 0;
}