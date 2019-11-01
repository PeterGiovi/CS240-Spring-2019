/*#####################################################

	This Program will take a file name as input and
	return the number of cons. and vowels in the file

	Written by Peter Giovi
	Date of revision: 03/02/2019
	v2.20
	Language: C++ (g++ Compiler Target)
	Written for Cygwin64 Environment

#####################################################*/
#include<iostream>
#include<fstream>
#include<string>
#include<cassert>

using namespace std;

int main(void){
	
	string fileName;
	char t;
	int c = 0;
	int v = 0;
	ifstream fileIn;
	cout<<"Enter name of file: ";
	cin>>fileName;
	fileIn.open(fileName.data());
	assert(fileIn.is_open());
	
	while(!(fileIn.eof())){
		
		t = fileIn.get();
		
		if((t >= 'A' && t <= 'Z') || (t >= 'a' && t <= 'z')){
			if((t == 'a') || (t == 'A') || (t == 'e') || (t == 'E') || (t == 'i') || (t == 'I') || (t == 'o') || (t == 'O') || (t == 'u') || (t == 'U')){
				v++;
			}
			else
				c++;
		}
	}
	cout<<"There are " << c << " Consonants and " << v << " Vowels in " << fileName <<endl;
	return 0;
}
