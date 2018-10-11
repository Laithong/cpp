#include <iostream>
int main (){
int a,b; char x; bool ck=true;
while(ck){
cout<<"number1:" ;cin>>a;
cout<<"number2:" ;cin>>b;
cout<<a<<"+"<<b<<"="<<a+b<<enl;
cout<<"press Q to exit";
cin>>x;
if((x=='Q')||(x=='q')) ck=false;
}
}
