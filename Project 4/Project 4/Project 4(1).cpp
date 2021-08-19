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

int getdata(int);
int check(int, int, int);
int gradient(int, int numrow, int numcol);
int overall();

int main()
{
	int numrow, numcol;
	const int x=100;
	const int y=100;
	int array[x][y];
	getdata(array);
	check(array, numrow, numcol);
}


int getdata(int array[100][100])
{
	int numrow, numcol, r, c;
	ifstream data;
	data.open("V:\\Desktop\\CMPSC 201\\Project 4\\Project 4\\arraydata.txt");
	data >> numrow;
	data >> numcol;
	for (int r = 0; r <= numrow; r++)
	{
		for (int c = 0; c <= numcol; c++)
		{
			data >> array[r][c];
		}
	}
	data.close();
	for (r = 0; r < numrow; r++) // outputting array
	{
		for (c = 0; c < numcol; c++)
		{
			cout << " " << array[r][c];
		}
		cout << endl;
	}
	return numrow, numcol;
}

int gradient(int array[][], int numrow, int numcol)
{
	int sum, maxgrad;
	for (int r = 0; r <= numrow; r = r + 2)
	{
		bool osc,final;
		osc = r%4;
		final = !osc;
		for(int c = final; c <= numcol; c = c + 2)
		{
			sum = sum + abs(array[r+1][c] - array[r][c]);
			sum = sum + abs(array[r-1][c] - array[r][c]);
			sum = sum + abs(array[r][c+1] - array[r][c]);
			sum = sum + abs(array[r][c-1] - array[r][c]);

			if(array[r+1][c] - array[r][c] > maxgrad)
			{
				maxgrad = (array[r+1][c] - array[r][c]);
			}
			else if(array[r-1][c] - array[r][c])
			{
				maxgrad = (array[r-1][c] - array[r][c]);
			}
			else if(array[r][c+1] - array[r][c])
			{
				maxgrad = (array[r][c+1] - array[r][c]);
			}
			else if (array[r][c - 1] - array[r][c])
			{
				maxgrad = (array[r][c-1] - array[r][c]);
			}
		}
	}
	cout << "Average elevation: " << sum/(numrow*numcol) << endl;
	cout << "Mximum Gradient: " << maxgrad <<endl;
	return 0;
}

int check(int array[][],int numrow, int numcol)
{
	int r,c ;
	for (r = 1; r < numrow; r++) // outputing peaks and valleys
	{
		for (c = 1; c < numcol; c++)
		{
			if (array[r + 1][c]<array[r][c]
				&& array[r - 1][c]<array[r][c]
				&& array[r - 1][c - 1]<array[r][c]
				&& array[r - 1][c + 1]<array[r][c]
				&& array[r + 1][c + 1]<array[r][c]
				&& array[r + 1][c - 1]<array[r][c]
				&& array[r][c + 1]<array[r][c]
				&& array[r][c - 1]<array[r][c])
			{
				cout << "Peaks: " << r + 1 << " " << c + 1 << endl;
			}
			else if (array[r + 1][c]>array[r][c]
				&& array[r - 1][c]>array[r][c]
				&& array[r - 1][c - 1]>array[r][c]
				&& array[r - 1][c + 1]>array[r][c]
				&& array[r + 1][c + 1]>array[r][c]
				&& array[r + 1][c - 1]>array[r][c]
				&& array[r][c + 1]>array[r][c]
				&& array[r][c - 1]>array[r][c])
			{
				cout << "Valleys: " << r + 1 << " " << c + 1 << endl;
			}
		}
}

//int overall()
{

}