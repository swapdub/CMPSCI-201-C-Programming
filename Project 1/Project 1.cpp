/*
Name :Swapnil Dubey
CMPSC 201 - Spring 2016
Section 004

Purpose: Make a program that allows the user to convert their measurement data
		from one unit to another. They will choose which physical quantity is being converted,
		and from which unit to which unit. This would tell the program what are the valid 
		parameters and the method of converting from one unit to another corresponding to its 
		physical quantity and unit conversion.

Input: Data type that needs to be converted should be chosen from the menu.
	   The value of the data which is being converted to another unit.
Processing: Choosing what data type is being converted. Checking if 
			the input data for conversion is valid or not. Using the 
			corresponding formula to calculate the value after the conversion. 
Output: The original data entered by the user, with converted data.

Test Data:
Fahrenheit to Celcius	: 5 F = -15 C

Celcius to Fahrenheit	: -15 C = 5 F

Inches to Centimeters	: 6 Inch = 15.24 Cm

Centimeters to Inches	: 15.24 Cm = 6 Inch

Pounds to Kilograms		: 154.322 lb = 70 Kg

Kilograms to Pounds		: 70 Kg = 154.322 lb

Quarts to Liters		: 100 Quarts = 94.6074 L

Liters to Quarts.		: 94.6074 L = 100 Quarts

*/
#include <iostream>

using namespace std;

int main()
{
	double 	choice, TempFC, TempCF, Celcius, Fahrenheit, WeightPK, WeightKP, Pounds, Kilogram,
		DistanceIC, DistanceCI, Centimeters, Inches, VolumeQL, VolumeLQ, Quarts, Litres;
	cout << "Enter the number corresponding to the data you want to convert. Type:\n";
	cout << "1.Fahrenheit to Celcius\n";
	cout << "2.Celcius to Fahrenheit\n";
	cout << "3.Pounds to Kilogram\n";
	cout << "4.Kilogram to Pounds\n";
	cout << "5.Inches to Centimeter\n";
	cout << "6.Centimeter to Inches\n";
	cout << "7.Quarts to Liters\n";
	cout << "8.Litres to Quarts\n";
	cin >> choice;

	if (choice == 1)
	{
		cout << "Enter temperature in Fahrenheits:\n";
		cin >> TempFC;
		if (TempFC < -459.67)
		{
			cout << "Invalid input. Restart program and enter conversion value greater than -459.67.\n";
		}
		else
		{
			Celcius = (TempFC - 32) / 1.8;
			cout << "The temperature, " << TempFC << " Fahrenheits, in degree Celcius is " << Celcius << endl;
		}
	}
	else if (choice == 2)
	{
		cout << "Enter temperature in Celcius:\n";
		cin >> TempCF;
		if (TempCF < -273.15)
		{
			cout << "Invalid input. Restart program and enter conversion value greater than -273.15.\n";
		}
		else
		{
			Fahrenheit = (TempCF*1.8) + 32;
			cout << "The temperature, "<< TempCF << " Celcius, in degree Fahrenheits is " << Fahrenheit << endl;
		}
	}
	else if (choice == 3)
	{
		cout << "Enter wieght in Pounds:\n";
		cin >> WeightPK;
		if (WeightPK < 0)
		{
			cout << "Invalid input. Restart program and enter conversion value greater than 0.\n";
		}
		else
		{
			Kilogram = WeightPK / 2.2046;
			cout << "The weight, "<< WeightPK << " Pounds, in Kilograms is " << Kilogram << endl;
		}
	}
	else if (choice == 4)
	{
		cout << "Enter wieght in Kilogram:\n";
		cin >> WeightKP;
		if (WeightKP < 0)
		{
			cout << "Invalid input. Restart program and enter conversion value greater than 0.\n";
		}
		else
		{
			Pounds = WeightKP*2.2046;
			cout << "The weight," << WeightKP<< " Kilograms, in Pounds is " << Pounds << endl;
		}
	}
	else if (choice == 5)
	{
		cout << "Enter distance in Inches:\n";
		cin >> DistanceIC;
		if (DistanceIC < 0)
		{
			cout << "Invalid input. Restart program and enter conversion value greater than 0.\n";
		}
		else
		{
			Centimeters = DistanceIC*2.54;
			cout << "The distance, "<< DistanceIC << " Inches, in Centimeters is " << Centimeters << endl;
		}
	}
	else if (choice == 6)
	{
		cout << "Enter distance in Centimeters:\n";
		cin >> DistanceCI;
		if (DistanceCI < 0)
		{
			cout << "Invalid input. Restart program and enter conversion value greater than 0.\n";
		}
		else
		{
			Inches = DistanceCI / 2.54;
			cout << "The distance, "<< DistanceCI <<" Centimeters, in Inches is " << Inches << endl;
		}
	}
	else if (choice == 7)
	{
		cout << "Enter volume in Quarts:\n";
		cin >> VolumeQL;
		if (VolumeQL < 0)
		{
			cout << "Invalid input. Restart program and enter conversion value greater than 0.\n";
		}
		else
		{
			Litres = VolumeQL / 1.057;
			cout << "The volume, "<< VolumeQL <<" Quarts, in Litres is " << Litres << endl;
		}
	}
	else if (choice == 8)
	{
		cout << "Enter volume in Litres:\n";
		cin >> VolumeLQ;
		if (VolumeLQ < 0)
		{
			cout << "Invalid input. Restart program and enter conversion value greater than 0.\n";
		}
		else
		{
			Quarts = VolumeLQ * 1.057;
			cout << "The volume, "<<VolumeLQ<<" Litres, in Quartes is " << Quarts << endl;
		}
	}
	else
	{
		cout << "Not a valid input. Restart program and choose values 1 to 8 to choose a data type for conversion.\n";

		return 0;
	}
}