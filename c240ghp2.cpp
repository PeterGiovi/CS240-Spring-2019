/*#####################################################

	This Program will take in a value n and create a 
	magic square of n X n and print that to the user.
	
	Written by: Peter Giovi
	Date of revision: 2/15/2019
	v6.13
	Language: C++ (g++ Compiler Target)
	Written for Cygwin64 Environment

#####################################################*/

#include<iostream>

using namespace std;

int main(void){
	
	cout<<"Please input a positive odd integer n for the dimension of the magic cube (n X n): ";
	int n;
	cin>>n;
	int square[50][50];

	for(int i = 0; i < n; i++){ //setting the starting values in the square to 0
		for(int j = 0; j < n; j++){
			square[i][j] = 0;
		}
	}
	
	int done = n * n;
	int check = 0;
	int value = 1;
	int y = (n / 2) + (n % 2) - 1;
	int x = 0;
	
	while(check < done){
		square[x][y] = value; //setting value
		value++;
		check++;
		int tempX;
		int tempY;
		
		if((y == n - 1) && (x == 0)) //checks to see if the current cordinate is = 0 and if so, 
			x = 1;					 //the next value will be displayed here, otherwise checks 
		else{						 //the next cordinate for a value and so on.
			if(x == 0){
				tempX = n - 1;
			}
			else
				tempX = x - 1;
			if(y == n - 1){
				tempY = 0;
			}
			else
				tempY = y + 1;
			if(square[tempX][tempY] != 0){
				if(x == 0 )
					x = n + 1;
				else
					x++;
			}
			else{
				x = tempX;
				y = tempY;
			}
		}
	}
	
	for(int i = 0; i < n; i++){ //displays the completed square
		for(int j = 0; j < n; j++){
			cout<<square[i][j]<<"    ";
		}
		cout<<endl;
	}
	
	return 0;	
	
}
