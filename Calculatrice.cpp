#include "Annexe.hpp"
#include "Calculatrice.hpp"
#include <String>
#include <vector>
#include <iostream>


using namespace std;

double calcul(double a, double b, char op) {
    switch (op) {
        case '+':
            return sum(a, b);
        case '-':
            return diff(a, b);
        case '*':
            return mul(a, b);
        case '/':
            return divi(a, b);
        case '^':
            return pw(a, b);
        default:
            throw invalid_argument("Invalid operator.");
    }
}

std::vector<std::string> getArgument(string s)
{
    int c=0;
    int n=sizeOfString(s);
    vector<string> arguments ={"","",""};
    string op="*/-+^";
    string digit="0123456789";

    for (int i=0; i < n; i++)
    {
       if (in(s[i],digit))
       {
           while(s[i]!='\0' && in(s[i],digit))
           {
            
                arguments[c]+=s[i];
                i++;
           }
           c++;
       } 


       if (in(s[i],op))
       {
            arguments[c]+=s[i];
            c++;
       }

        
    }


    return arguments;
}

