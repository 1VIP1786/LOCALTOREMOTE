 #include<iostream>
 using namespace std;
 int main()
 {
  struct {
    string brand;
    string model;
    int year;
  }car1,car2,car3;

  car1.brand="volvo";
  car2.brand="volvo";
  car3.brand="volvo";
  
  car1.model="bs6";
  car2.model="bs7";
  car3.model="bs8";
  
  car1.year=2018;
  car2.year=2019;
  car3.year=2020;
  
  cout<<car1.brand<<car1.model<<car1.year<<"\n";
  cout<<car2.brand<<car2.model<<car2.year<<"\n";
  cout<<car3.brand<<car3.model<<car3.year<<"\n";

  

  return 0;
 }