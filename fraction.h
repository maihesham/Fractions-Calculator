#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
using namespace std;

class Fraction
{
    public:
        Fraction();
        Fraction(int i1,char i,int i2);
        Fraction operator+(Fraction &f1);
        Fraction operator-(Fraction &f1);
        Fraction operator*(Fraction &f1);
        bool operator==(Fraction &f1);
        bool operator>=(Fraction &f1);
        bool operator<=(Fraction &f1);
        bool operator<(Fraction &f1);
        bool  operator>(Fraction &f1);
        Fraction operator/(Fraction &f1);
        Fraction reducing(Fraction &f1);
        void Get_extend(int y);
        void Get_sign(char y);
        void Get_Status(int y);
        int Set_extend();
        char Set_sign();
        int Set_Status();
        friend ostream &operator <<(ostream &output ,const Fraction &f1);
        friend istream &operator>>( istream  &input, Fraction &f1 );
    protected :
         int extend;
        int Status;
        char sign;

};

#endif // FRACTION_H
