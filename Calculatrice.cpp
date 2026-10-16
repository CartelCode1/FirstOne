#include "Annexe.hpp"
#include <String>
#include <vector>
#include <iostream>


using namespace std;

double calcul(double a, double b, char op) {
    switch (op) {
        case '+':
            return Sum(a, b);
        case '-':
            return Diff(a, b);
        case '*':
            return Mul(a, b);
        case '/':
            return Divi(a, b);
        case '^':
            return pw(a, b);
        default:
            throw invalid_argument("Invalid operator.");
    }
}

auto getArgument(string s)
{
    int c=0;

    vector<string> arguments ={"","",""};
    string op="*/-+^";
    string digit="0123456789";

    for (int i=0; i < sizeOfString(s); i++)
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

