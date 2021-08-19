/*********************
Swapnil Dubey
CMPSC 201 Section 004
Spring 2016

Input:
Processing:
Output:
**********************/

#include <iostream>
#include <fstream> 

using namespace std;
const int x = 100;
const int y = 100;

int getdata(int [x][y], int &, int&);
int check(int [x][y], int, int);
int gradient(int [x][y], int numrow, int numcol);
int overall();

int main()
{
	int numrow, numcol;
	int aray[x][y];
	getdata(aray, numrow, numcol);
	check(aray, numrow, numcol);
	gradient(aray, numrow, numcol);
}


int getdata(int aray[x][y], int &refrow, int &refcol) // getting data from file
{
	int r, c;
	ifstream data;
	data.open("V:\\Desktop\\CMPSC 201\\Project 4\\Project 4\\araydata.txt");
	data >> refrow;
	data >> refcol;
	for (int r = 0; r <= refrow; r++)
	{
		for (int c = 0; c <= refcol; c++)
		{
			data >> aray[r][c];
		}
	}
	data.close();
	for (r = 0; r < refrow; r++) // outputting aray
	{
		for (c = 0; c < refcol; c++)
		{
			cout << " " << aray[r][c];
		}
		cout << endl;
	}
	return 0;
}

int gradient(int aray[x][y], int numrow, int numcol)
{
	int sum, maxgrad, final;
	for (double r = 0; r <= numrow; r = r + 1)
	{
		double osc;
		osc = r%2;
		if (osc!=0.5)
		{
			final = 0;
		}
		else
		{
			final = 1;
		}
		
		//add if function for perimater checks
		
		for(int c = final; c <= numcol; c = c + 2)
		{
			sum = sum + abs(aray[r+1][c] - aray[r][c]);
			sum = sum + abs(aray[r-1][c] - aray[r][c]);
			sum = sum + abs(aray[r][c+1] - aray[r][c]);
			sum = sum + abs(aray[r][c-1] - aray[r][c]);

			if(aray[r+1][c] - aray[r][c] > maxgrad)
			{
				maxgrad = (aray[r+1][c] - aray[r][c]);
			}
			else if(aray[r-1][c] - aray[r][c])
			{
				maxgrad = (aray[r-1][c] - aray[r][c]);
			}
			else if(aray[r][c+1] - aray[r][c])
			{
				maxgrad = (aray[r][c+1] - aray[r][c]);
			}
			else if (aray[r][c - 1] - aray[r][c])
			{
				maxgrad = (aray[r][c-1] - aray[r][c]);
			}
		}
	}
	cout << "Average elevation: " << sum/(numrow*numcol) << endl;
	cout << "Mximum Gradient: " << maxgrad <<endl;
	return 0;
}

int check(int aray[x][y], int numrow, int numcol)
{
	int r, c;
	for (r = 1; r < numrow; r++) // outputing peaks and valleys
	{
		for (c = 1; c < numcol; c++)
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
				cout << "Peaks: " << r + 1 << " " << c + 1 << endl;
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
				cout << "Valleys: " << r + 1 << " " << c + 1 << endl;
			}
		}
	}
}
/*int overall()
{

}*/
/*
ofstream outfile;
outfile.open("name.dat", fstream.app);
				OR ios.app ;
*/