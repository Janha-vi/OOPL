#include <bits/stdc++.h>
using namespace std; //defining prebuilt functions and attributes
//create a class
class passenger{
//access specifier - can be private,public or protected
public:
//Data members - details of passenger
char name[100];
int age;
string flight_no;
string dep_time;
string source;
string dest;

//funtion for passenger info collection
void info(){
cout<<"Enter your Name: ";
cin>>name;
cout<<"Enter your Age: ";
cin>>age;
cout<<"Enter your Flight number: ";
cin>>flight_no;
cout<<"Enter the Departure time: ";
cin>>dep_time;
cout<<"Enter your Departure location: ";
cin>>source;
cout<<"Enter your Destination: ";
cin>>dest;
cout<<"\n";
}

//function to display passenger info
void display(){
cout<<"Passenger information: \n";
cout<<"Name of the passenger: \n"<<name;
cout<<"\n";
cout<<"Age of the passenger: \n"<<age;
cout<<"\n";
cout<<"Flight number of the passenger: \n"<<flight_no;
cout<<"\n";
cout<<"Departure time of the passenger: \n"<<dep_time;
cout<<"\n";
cout<<"Departure location of the passenger: \n"<<source;
cout<<"\n";
cout<<"Destination of the passenger: \n"<<dest;
cout<<"\n";cout<<"\n";
}
};

int main(){
//Declare objects passenger 1 and passenger 2 of class passenger
passenger pass1;
passenger pass2;

//Get information and display information of both the passengers
pass1.info();
pass2.info();
pass1.display();
pass2.display();

}
