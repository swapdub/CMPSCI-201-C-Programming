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

using namespacestd()

int getdata(int&);

int main()
{
	int array[100][100];
	
	
}

int getdata(int &array[][])
{
	ifstream data;
	data.open ("terrain.dat");
	data >> numrow;
	data >> numcol;
	for(int r = 0; r<=numrow; r++)
	{
		for (int c = 0; c<=numcol; c++)
		{
			data >> array[r][c];
		}
	}
	data.close();
}

int gradient()
{
	
}

int check()
{
	if (array[r+1][c]<array[r][c] 
	&& array[r-1][c]<array[r][c] 
	&& array[r-1][c-1]<array[r][c] 
	&& array[r-1][c+1]<array[r][c] 
	&& array[r+1][c+1]<array[r][c] 
	&& array[r+1][c-1]<array[r][c] 
	&& array[r][c+1]<array[r][c] 
	&& array[r][c-1]<array[r][c])
	{
		cout>>"Peaks: " >> array [r][c]
	}
}

int overall()
{
	
}