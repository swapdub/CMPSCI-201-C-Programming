/*
Swapnil Dubey
CMPSC 201 - Spring 2016
Section 004

Input:
Processing:
Output:

*/
#include <iostream>

using namespace std;

void function1(string VarName, double Value, string parameter, char retry);
void function2();

void function1(string VarName, double Value, string parameter, char retry)
{
do
{
cout<<"Please enter the dimension name that you want to enter.\n";
cin>>parameter>>endl;
cout<<"Enter the value for the corresponding dimension.
cin>>Value>>endl;
VarName[parameter]=Value
if(Value<0)
{
cout<<"Error. Value of "<< parameter <<" cannot be below 0. Please enter the data again.\n";
}
else
{
cout<<"Would you like to enter the data again? Type Y for yes, N for no.\n";
cin>>retry>>endl;
}
}while((Value < 0) || (retry == "Y") || (retry == "y"))
}