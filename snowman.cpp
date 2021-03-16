#include "snowman.hpp"
#include <iostream>
#include <stdexcept> 
#include <cmath>
#include <cassert>


using namespace std;
namespace ariel{
const int ten=10;
const int min=1;
const int max=4;
const int split=10000000;

string hat(int a){
string s;
if(a==1){
    s=" _===_ " ;

}
if(a==2){
    s=" ___ \n .....";

}
if(a==3){
    s= "   _  \n  /_\\ ";

}
if(a==4){
    s=" ___ \n (_*_)";

}

return s;
}

string nose(int a){
string s;
if(a==1){
    s=",";
}
if(a==2){
    s=".";
}
if(a==3){
    s= "_";
}
if(a==4){
    s=" ";
}
return s ;
}

string eye_l(int a){
 string s;
if(a==1){
    s=".";
}
if(a==2){
    s="o";
}
if(a==3){
    s= "O";
}
if(a==4){
    s="-";
}
return s ;
}

string eye_r(int a){
 string s;
if(a==1){
    s=".";
}
if(a==2){
    s="o";
}
if(a==3){
    s= "O";
}
if(a==4){
    s="-";
}
return s ;
}

string arm_l_up(int a){
string s;
if(a==1){
    s=" " ;
}
if(a==2){
    s="\\";
}
if(a==3){
    s= " ";
}
if(a==4){
    s=" ";
}
return s ;
}

string arm_r_up(int a){
 string s;
if(a==1){
    s=" " ;
}
if(a==2){
    s="/";
}
if(a==3){
    s= " ";
}
if(a==4){
    s=" ";
}
return s ;
}

string arm_l(int a){
string s;
if(a==1){
    s="<" ;
}
if(a==2){
    s=" ";
}
if(a==3){
    s= "/";
}
if(a==4){
    s=" ";
}
return s ;
}

string arm_r(int a){
string s;
if(a==1){
    s=">" ;
}
if(a==2){
    s=" ";
}
if(a==3){
    s= "\\";
}
if(a==4){
    s=" ";
}
return s ;
}

string torso(int a){
string s;
if(a==1){
    s=" : ";
}
if(a==2){
    s="] [";
}
if(a==3){
    s= "> <";
}
if(a==4){
    s="   ";
}
return s ;
}

string base(int a){
 string s;
if(a==1){
    s=" : ";
}
if(a==2){
    s="\" \"";
}
if(a==3){
    s="___";
}
if(a==4){
    s="   ";
}
return s ;
}


 string snowman(int a){
// we need to chaek the input 

int h=0 ;int n=0 ;int l=0 ;int r=0 ;int x=0 ;int y=0 ;int t=0 ;int b=0 ; int cheak=0;
string level_1 ;string level_2 ;string level_3; string level_4;
int c=a/split;

if(c < min || c > max ){
  throw std::out_of_range("Invalid code " + to_string(a));
}


cheak=a%ten;
if(cheak>=min && cheak<=max){
    b=a%ten;
    a=a/ten;
}
else{
throw std::out_of_range("Invalid code " + to_string(b));
}

cheak=a%ten;
if(cheak>=min && cheak<=max){
    t=a%ten;
    a=a/ten;
}
else{
throw std::out_of_range("Invalid code " + to_string(t));
}
cheak=a%ten;
if(cheak>=min && cheak<=max){
    y=a%ten;
    a=a/ten;
}
else{
throw std::out_of_range("Invalid code " + to_string(y));
}
cheak=a%ten;
if(cheak>=min && cheak<=max){
    x=a%ten;
    a=a/ten;
}
else{
throw std::out_of_range("Invalid code " + to_string(x));
}
cheak=a%ten;
if(cheak>=min && cheak<=max){
    r=a%ten;
    a=a/ten;
}
else{
throw std::out_of_range("Invalid code " + to_string(r));
}
cheak=a%ten;
if(cheak>=min && cheak<=max){
    l=a%ten;
    a=a/ten;
}
else{
throw std::out_of_range("Invalid code " + to_string(l));
}
cheak=a%ten;
if(cheak>=min && cheak<=max){
    n=a%ten;
    a=a/ten;
}
else{
throw std::out_of_range("Invalid code " + to_string(n));
}
cheak=a%ten;
if(cheak>=min && cheak<=max){
    h=a%ten;
}
else{
throw std::out_of_range("Invalid code " + to_string(h));
}



   
level_1+=hat(h);
level_2 += "\n" + arm_l_up(x) + "(" + eye_l(l) + nose(n) + eye_r(r) + ")" + arm_r_up(y) + "\n";
level_3 += arm_l(x) + "(" + torso(t) + ")" + arm_r(y) + "\n";
level_4 +=  " (" + base(b) + ")";
 return (level_1 + level_2 + level_3 + level_4);

}
}