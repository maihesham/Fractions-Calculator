#include "fraction.h"
#include <iostream>
using namespace std;
Fraction::Fraction()
{
      extend=0;
      Status=0;
      sign='/';
}
Fraction:: Fraction(int i1,char i,int i2){
    extend=i1;
      Status=i2;
      sign=i;
}
Fraction Fraction:: operator+(Fraction &f1){
    Fraction result;
    result.extend=(extend*f1.Status)+(f1.extend*Status);
    result.Status=Status*f1.Status;
     return reducing(result);
}

 Fraction Fraction:: operator -(Fraction &f1){
    Fraction result;
    result.extend=(extend*f1.Status)-(f1.extend*Status);
    result.Status=Status*f1.Status;
    return reducing(result);
}
Fraction Fraction:: operator /(Fraction &f1){
     Fraction result;
     result.extend=extend*f1.Status;
     result.Status=Status*f1.extend;
     return reducing(result);
}
istream& operator >>(istream &input,Fraction &f1){
    input>>f1.extend;
    input>>f1.sign;
    input>>f1.Status;
    return input;
}
ostream& operator <<(ostream &output ,const Fraction &f1){
    output<<f1.extend;
    output<<f1.sign;
    output<<f1.Status;
    return output;
}
Fraction Fraction:: operator *(Fraction &f1){
    Fraction result;
    result.extend=extend*f1.extend;
    result.Status=Status*f1.Status;
    return reducing(result);
}
Fraction Fraction:: reducing(Fraction &f1){
    int maxx=0,final1=0;bool sign1=0;
    Fraction result;
    if(f1.Status<0){f1.Status*-1;sign1=1;}
    if(f1.extend<0){f1.extend*-1;sign1=1;}
    if(f1.Status==f1.extend){
           if(sign1==1){
                result.extend=-1;
                result.Status=1;}
           else{
            result.extend=1;
            result.Status=1;
            }
            return result;
            }
    else if(f1.extend>f1.Status && f1.extend%f1.Status==0){
            if(sign1==1){
                    result.extend=(f1.extend/f1.Status)*-1;
                    result.Status=f1.Status/f1.Status;
            }
            else{
                result.extend=f1.extend/f1.Status;
                    result.Status=f1.Status/f1.Status;
            }
            return result;
    }
   else if(f1.extend<f1.Status && f1.Status%f1.extend==0){
        if(sign1==1){
                result.extend=(f1.extend/f1.extend)*-1;
                result.Status=f1.Status/f1.extend;
                }

        else{
            result.extend=f1.extend/f1.extend;
            result.Status=f1.Status/f1.extend;
            }
        return result;
    }
   else{
        if(f1.extend<f1.Status){maxx=f1.Status;}else{maxx=f1.extend;}
        for(int y=2;y<=maxx;y++){
            if(f1.Status%y==0 &&f1.extend%y==0){
                final1=y;
                break;
            }
        }
        if(final1!=0){
                if(sign1==1){
                        result.extend=(f1.extend/final1)*-1;
                        result.Status=f1.Status/final1;
                }
                else{
                        result.extend=f1.extend/final1;
                        result.Status=f1.Status/final1;
                }

            return result;
    }else if(final1==0){
        if(sign1==1){
            result.extend=(f1.extend)*-1;
            result.Status=f1.Status;

        }
        else{
            result.extend=f1.extend;
            result.Status=f1.Status;
        }

            return result;
   }
   }
}
bool Fraction:: operator ==(Fraction &f1){
    Fraction x=reducing(f1);
    Fraction r;
    r.extend=extend; r.Status=Status;
    Fraction i=reducing(r);
    if(i.extend==x.extend && i.Status==x.Status){return true;}
    else{
        return false;
    }

}

bool Fraction:: operator >(Fraction &f1){
     Fraction i1;
    i1.extend=f1.extend*Status;
    i1.Status=f1.Status*Status;
    Fraction  i2;
    i2.extend=extend*f1.Status;
    i2.Status=Status*f1.Status;
    if(i2.extend>i1.extend){return true;}
    else {
        return false;
    }



}
//x constructor i2
    //y f1 i1
    //if(x<y)(i2<i1)
bool Fraction:: operator <(Fraction &f1){
    cout<<"H    "<<f1<<endl;
    Fraction i1;
    i1.extend=f1.extend*Status;
    i1.Status=f1.Status*Status;
    Fraction  i2;
    i2.extend=extend*f1.Status;
    i2.Status=Status*f1.Status;
    if(i2.extend<i1.extend){return true;}
    else {
        return false;
    }


}
bool Fraction:: operator >=(Fraction &f1){
     Fraction i1;
    i1.extend=f1.extend*Status;
    i1.Status=f1.Status*Status;
    Fraction  i2;
    i2.extend=extend*f1.Status;
    i2.Status=Status*f1.Status;
    if(i2.extend>=i1.extend){return true;}
    else {
        return false;
    }


}
bool Fraction:: operator <=(Fraction &f1){
    cout<<"H    "<<f1<<endl;
    Fraction i1;
    i1.extend=f1.extend*Status;
    i1.Status=f1.Status*Status;
    Fraction  i2;
    i2.extend=extend*f1.Status;
    i2.Status=Status*f1.Status;
    if(i2.extend<=i1.extend){return true;}
    else {
        return false;
    }


}

void Fraction::Get_extend(int y){extend=y;}
void Fraction::Get_sign(char y){sign=y;}
void Fraction::Get_Status(int y){Status=y;}
int Fraction::Set_extend(){return extend;}
char Fraction::Set_sign(){return sign;}
int Fraction::Set_Status(){return Status;}
















