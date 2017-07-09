#include <iostream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>
#include<cmath>
#include <bits/stdc++.h>
#include <stdio.h>
#include <vector>
#include "fraction.h"
using namespace std;
 class FractionCalculator{
 public:
void Set_fraction(Fraction f){
         f2=f;
    }
Fraction Set_fraction(){
         return f2;
    }
Fraction Calaulatorfeaction(){
    Fraction result;
    char x,s;
    cin>>result;
        cout<<"enter the fraction like ass 1/1 + 1/12 you can change the sign like * / - "<<endl;

    while(true){
             Fraction f0;
                cin>>x>>f0>>s;
            if(x=='+'){
                result=result+f0;
            }else if(x=='-'){
                result=result-f0;

            }else if(x=='*'){
                result=result*f0;

            }else if(x=='/'){
                result=result/f0;

            }
            if(s=='!'){
                    return result;
            }else{
                cout<<result;

            }
            }
            }


 private:
    Fraction f2;
 };

int main(){
   Fraction i1;
   Fraction i2;
   FractionCalculator i;
   cout<<"if you need to end use calacualtor cin !"<<endl;
    cout<<i.Calaulatorfeaction();





    return 0;
}

