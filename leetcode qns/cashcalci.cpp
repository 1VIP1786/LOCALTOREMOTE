// -------------------JAI SHREE KRISHNA-------------------

#include<bits/stdc++.h>

using namespace std;

int main(){
int amt;
int n500,n100,n50,n20,n10,n5,n2,n1;
n1=n2=n5=n10=n20=n50=n100=n500=0;
cout<<"Enter the amount you want to calculate notes of "<<endl;
cin>>amt;
switch(amt>=500){
case 1:
n500=amt/500;
amt-=(n500*500);
break;
}
switch(amt>=100){
case 1:
n100=amt/100;
amt-=(n100*100);
break;
}
switch(amt>=50){
case 1:
n50=amt/50;
amt-=(n50*50);
break;
}
switch(amt>=20){
case 1:
n20=amt/20;
amt-=(n20*20);
break;
}
switch(amt>=10){
case 1:
n10=amt/10;
amt-=(n10*10);
break;
}
switch(amt>=5){
case 1:
n5=amt/5;
amt-=(n5*5);
break;
}
switch(amt>=2){
case 1:
n2 =amt/2;
amt-=(n2*2);
break;
}
switch(amt>=1){
case 1:
n1=amt/1;
amt-=(n1*1);
break;
}
cout<<"No. of notes required of 500 ="<<n500<<endl;
cout<<"No. of notes required of 100 ="<<n100<<endl;
cout<<"No. of notes required of 50 ="<<n50<<endl;
cout<<"No. of notes required of 20 ="<<n20<<endl;
cout<<"No. of notes required of 10 ="<<n10<<endl;
cout<<"No. of notes required of 5 ="<<n5<<endl;
cout<<"No. of notes required of 2 ="<<n2<<endl;
cout<<"No. of notes required of 1 ="<<n1<<endl;
return 0;
}