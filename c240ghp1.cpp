/*#####################################################

	Program will query the user for a value to be
	searched for in a predetermined 2x2 matrix.
	If value is found then program will congradulate
	user on their fabulous ability to guess an integer.

	Written by: Peter Giovi
	Date of revision: 01/28/2019
	v3.10
	Language: C++ (g++ Compiler Target)
	Written for Cygwin64 Environment

#####################################################*/
#include<iostream>

using namespace std;

/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

	main() will create a matrix at compile time and 
	query user for an integer. Main will then search 
	the matrix to see if the input is part of the 
	matrix, printing the result and then terminating 
	main().

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/

int main(void){
	
	int m[2][2] {{1,2},{3,4}};
	int n = 0;
	
	cout<<"Please input an integer that may or may not be in my matrix"<<endl;
	cin>>n;

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			if(n == m[i][j]){
				cout<<"Congrats! "<<n<<" was in the matrix!"<<endl;
				return 0;
			}
		}
	}
	cout<<"Data not found in the matrix"<<endl;
}
