/* 




*/
#include <iostream>
using namespace std;
int main()
{
	double 	choice, TempFC,TempCF,Celcius,Fahrenheit,WeightPK,WeightKP,Pounds,Kilogram,
		DistanceIC,DistanceCI, Centimeters,Inches;
cout<<	"Enter the number corresponding to the data you want to convert. Type:\n";
	1.Temperature Fahrenheit to Celcius, 
	2.Celcius to Fahrenheit, 
	3.Pounds to Kilogram, 
	4.Kilogram to Pounds, 
	5.Inches to Centimeter, 
	6.Centimeter to Inches,
	7.Quarts to Liters,
	8.Litres to Quarts.	
cin>>	choice

if (choice==1)
{
		cout<<"Enter temperature in Fahrenheits:\n";
		cin >> TempFC
	if (TempFC < -459.67)
{
		cout<<"Invalid input. Re-enter conversion value greater than -459.67.\n";
		cin>>TempFC
}
	else
{
		Celcius=(TempFC-32)/1.8
		cout<<"The temperature in degree Celcius is" << Celcius << endl;
}
else if (choice==2)
{
		cout<<"Enter temperature in Celcius:\n";
		cin >> TempCF
	if (TempFC < -273.15)
{
		cout<<"Invalid input. Re-enter conversion value greater than -273.15.\n";
		cin>>TempCF
}
	else
{
		Farhenheit=(TempCF*1.8)+32
		cout<<"The temperature in degree Fahrenheits is" << Fahrenheit << endl;
}
else if (choice==3)
{
		cout<<"Enter wieght in Pounds:\n";
		cin >> WeightPK
	if (WeightPK < 0)
{
		cout<<"Invalid input. Re-enter conversion value greater than 0.\n";
		cin>> WeightPK
}
	else
{
		Kilogram=WeightPK/2.2046
		cout<<"The weight in Kilograms is" << Kilogram << endl;
}
else if (choice==4)
{
		cout<<"Enter wieght in Kilogram:\n";
		cin >> WeightKP
	if (WeightKP < 0)
{
		cout<<"Invalid input. Re-enter conversion value greater than 0.\n";
		cin>> WeightKP
}
	else
{
		Pounds=WeightKP*2.2046
		cout<<"The weight in Pounds is" << Pounds << endl;
}
else if (choice==5)
{
		cout<<"Enter distance in Inches:\n";
		cin >> DistanceIC
	if (DistanceIC < 0)
{
		cout<<"Invalid input. Re-enter conversion value greater than 0.\n";
		cin>> DistanceIC
}
	else
{
		Centimeters=DistanceIC*2.54
		cout<<"The distance in Centimeters is" << Centimeters << endl;
}
else if (choice==6)
{
		cout<<"Enter distance in Centimeters:\n";
		cin >> DistanceCI
	if (DistanceCI < 0)
{
		cout<<"Invalid input. Re-enter conversion value greater than 0.\n";
		cin>> DistanceCI
}
	else
{
		Inches=DistanceCI/2.54
		cout<<"The distance in inches is" << Inches << endl;
}
else if (choice==7)
{
		cout<<"Enter volume in Quarts:\n";
		cin >> VolumeQL
	if (VolumeQL < 0)
{
		cout<<"Invalid input. Re-enter conversion value greater than 0.\n";
		cin>> VolumeQL
}
	else
{
		Litres=VolumeQL/1.057
		cout<<"The volume in Litres is" << Litres << endl;
}
else if (choice==8)
{
		cout<<"Enter volume in Litres:\n";
		cin >> VolumeLQ
	if (VolumeLQ < 0)
{
		cout<<"Invalid input. Re-enter conversion value greater than 0.\n";
		cin>> VolumeLQ
}
	else
{
		Quarts=VolumeLQ/1.057
		cout<<"The volume in Quartes is" << Quarts << endl;
}






1.TempFC = Temperature Fahrenheit to Celcius, 
	2.TempCF = Celcius to Fahrenheit, 
	3.WeightPK = Pounds to Kilogram, 
	4.WeightKP = Kilogram to Pounds, 
	5.DistanceIC = Inches to Centimeter, 
	6.DistanceCI = Centimeter to Inches,
	7.VolumeQL = Quarts to Liters,
	8.VolumeLQ = Litres to Quarts.