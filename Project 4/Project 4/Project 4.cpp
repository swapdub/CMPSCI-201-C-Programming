/*********************
Swapnil Dubey
CMPSC 201 Section 004
Spring 2016

Input: 2D Array
Processing: Calculate Peaks and Valleys
Output: The location of those peaks and Valleys. The average elevation of the array
		and the maximum gradient of the slope between any 2 cells.
**********************/

#include <iostream>
#include <fstream> 
#include <cmath>

using namespace std;
const int x = 100;
const int y = 100;

void getdata(int [x][y], int &, int&);
void check(int [x][y], int, int);
void gradient(int [x][y], int numrow, int numcol);
int overall();

int main()
{
	int numrow, numcol;
	int aray[x][y];
	getdata(aray, numrow, numcol);
	check(aray, numrow, numcol);
	gradient(aray, numrow, numcol);
}


void getdata(int aray[x][y], int &refrow, int &refcol) // getting data from file
{
	int r, c;
	ifstream data;
	data.open("V:\\Desktop\\CMPSC 201\\Project 4\\Project 4\\terrain.dat");
	data >> refrow;
	data >> refcol;
	for (int r = 0; r < refrow; r++)
	{
		for (int c = 0; c < refcol; c++)
		{
			data >> aray[r][c];
		}
	}
	data.close();
}

void gradient(int aray[x][y], int numrow, int numcol)
{
	int sum = 0, maxgrad = 0, final, avg;
	for (int r = 0; r < numrow; r++)
	{
		int osc;
		osc = r%2;
		if (osc == 1)
		{
			final = 0;
		}
		else
		{
			final = 1;
		}

		for(int c = final; c < numcol; c = c + 2)
		{
			if (c == 0 && r == 0)
			{
				sum = sum + abs(aray[r + 1][c] - aray[r][c]);
				sum = sum + abs(aray[r][c + 1] - aray[r][c]);

				if (abs(aray[r + 1][c] - aray[r][c]) > maxgrad)
				{
					maxgrad = (aray[r + 1][c] - aray[r][c]);
				}
				if (abs(aray[r][c + 1] - aray[r][c]) > maxgrad)
				{
					maxgrad = (aray[r][c + 1] - aray[r][c]);
				}
			}
			else if (c == 0 && r != 0)
			{
				sum = sum + abs(aray[r + 1][c] - aray[r][c]);
				sum = sum + abs(aray[r - 1][c] - aray[r][c]);
				sum = sum + abs(aray[r][c + 1] - aray[r][c]);

				if (abs(aray[r + 1][c] - aray[r][c]) > maxgrad)
				{
					maxgrad = (aray[r + 1][c] - aray[r][c]);
				}
				if (abs(aray[r - 1][c] - aray[r][c]) > maxgrad)
				{
					maxgrad = (aray[r - 1][c] - aray[r][c]);
				}
				if (abs(aray[r][c + 1] - aray[r][c]) > maxgrad)
				{
					maxgrad = (aray[r][c + 1] - aray[r][c]);
				}
			}
			else if (c < numcol-1 && c>0)
			{
				sum = sum + abs(aray[r + 1][c] - aray[r][c]);
				sum = sum + abs(aray[r - 1][c] - aray[r][c]);
				sum = sum + abs(aray[r][c + 1] - aray[r][c]);
				sum = sum + abs(aray[r][c - 1] - aray[r][c]);

				if (abs(aray[r + 1][c] - aray[r][c]) > maxgrad)
				{
					maxgrad = (aray[r + 1][c] - aray[r][c]);
				}
				if (abs(aray[r - 1][c] - aray[r][c]) > maxgrad)
				{
					maxgrad = (aray[r - 1][c] - aray[r][c]);
				}
				if (abs(aray[r][c + 1] - aray[r][c]) > maxgrad)
				{
					maxgrad = (aray[r][c + 1] - aray[r][c] > maxgrad);
				}
				if (abs(aray[r][c - 1] - aray[r][c]) > maxgrad)
				{
					maxgrad = (aray[r][c - 1] - aray[r][c]);
				}
			}
			else if (c == numcol-1 && r != numrow-1)
			{
				sum = sum + abs(aray[r + 1][c] - aray[r][c]);
				sum = sum + abs(aray[r - 1][c] - aray[r][c]);
				sum = sum + abs(aray[r][c - 1] - aray[r][c]);

				if (abs(aray[r + 1][c] - aray[r][c]) > maxgrad)
				{
					maxgrad = (aray[r + 1][c] - aray[r][c]);
				}
				if (abs(aray[r - 1][c] - aray[r][c]) > maxgrad)
				{
					maxgrad = (aray[r - 1][c] - aray[r][c]);
				}
				if (abs(aray[r][c - 1] - aray[r][c]) > maxgrad)
				{
					maxgrad = (aray[r][c - 1] - aray[r][c]);
				}
			}
			else if (c == numcol-1 && r == numrow-1)
			{
				sum = sum + abs(aray[r - 1][c] - aray[r][c]);
				sum = sum + abs(aray[r][c - 1] - aray[r][c]);

				if (abs(aray[r - 1][c] - aray[r][c]) > maxgrad)
				{
					maxgrad = (aray[r - 1][c] - aray[r][c]);
				}
				if (abs(aray[r][c - 1] - aray[r][c]) > maxgrad)
				{
					maxgrad = (aray[r][c - 1] - aray[r][c]);
				}
			}
		}
	}
	avg = (sum / (numrow*numcol));
	ofstream peaks;
	peaks.open("name.dat", ios::app);
	peaks << "Average elevation: " << avg << endl;
	peaks << "Maximum Gradient: " << maxgrad << endl;
}

void check(int aray[x][y], int numrow, int numcol)
{
	int r, c;
	for (r = 1; r < numrow - 1; r++) // locating and outputing peaks and valleys
	{
		for (c = 1; c < numcol - 1; c++)
		{
			if (aray[r + 1][c]<aray[r][c]
				&& aray[r - 1][c]<aray[r][c]
				&& aray[r - 1][c - 1]<aray[r][c]
				&& aray[r - 1][c + 1]<aray[r][c]
				&& aray[r + 1][c + 1]<aray[r][c]
				&& aray[r + 1][c - 1]<aray[r][c]
				&& aray[r][c + 1]<aray[r][c]
				&& aray[r][c - 1]<aray[r][c])
			{
				ofstream peaks;
				peaks.open("name.dat", ios::app);
				peaks << "Peaks: " << r + 1 << " " << c + 1 << endl;
			}
			else if (aray[r + 1][c]>aray[r][c]
				&& aray[r - 1][c]>aray[r][c]
				&& aray[r - 1][c - 1]>aray[r][c]
				&& aray[r - 1][c + 1]>aray[r][c]
				&& aray[r + 1][c + 1]>aray[r][c]
				&& aray[r + 1][c - 1]>aray[r][c]
				&& aray[r][c + 1]>aray[r][c]
				&& aray[r][c - 1]>aray[r][c])
			{
				ofstream val;
				val.open("name.dat", ios::app);
				val << "Valleys: " << r + 1 << " " << c + 1 << endl;
			}
		}
	}
}