#include <iostream>
#include "Annexe.hpp"
#include <string>
#include "Calculatrice.hpp"
#include <vector>

using namespace std;

int main() {
    string ligne;//On récupère la ligne de l'utilisateur

    getline(cin,ligne);
    cout<<calcul(convertisseurStringtoInt(getArgument(ligne)[0])/1.,convertisseurStringtoInt(getArgument(ligne)[2])/1.,getArgument(ligne)[1][0])<<endl;
   

    return 0;
}