#include <iostream>
using namespace std;

int main(){
string op;
int a;
int b;
int c;
cout<<"A Simple Calculator\n"<<endl;
cin>>op;
cin>>a;
cin>>b;

if (op == "+"){
  c=a+b;
   cout<<"Penjumlahan"<<endl;
   cout<<a<<" + "<<b<<" = "<<c<<endl;
 } 
 
 else if (op == "-"){
  c=a-b;
   cout<<"Pengurangan"<<endl;
   cout<<a<<" - "<<b<<" = "<<c<<endl;
 } 
 
 else if (op=="*"){
  c=a*b;
   cout<<"Perkalian"<<endl;
   cout<<a<<" × "<<b<<" = "<<c<<endl;
 } 
 
 else if(op=="/"){
  c=a/b;
   cout<<"Pembagian"<<endl;
   cout<<a<<" ÷ "<<b<<" = "<<c<<endl;
 } 
 
 else if(op=="%"){
  c=a%b;
   cout<<"Sisa Bagi"<<endl;
   cout<<a<<" % "<<b<<" = "<<c<<endl;
 } else {
 cout<<"Operator Tidak Dikenali"<<endl;
 }

return 0;
}
