/*#####################################################

	This Program will take 15 word inputs from user
	hash those inputs to store them in a vector
	return the vector, then query user for word inputs
	search vector for those inputs and return result
	have a terminal value to quit program (*)

	Written by Peter Giovi
	Date of revision: May 04, 2019
	v3.43
	Language: C++ (g++ Compiler Target)
	Written for Cygwin64 Environment

#####################################################*/

#include<iostream>
#include<vector>
#include<string.h>
#include<string>

using namespace std;

class Hash
{public:

	Hash(){ //constructor function also sets everything = to non name variable
		//cout<<"inside Hash"<<endl; //debugging line 1
		for(int i = 0; i < 23; i++){
			hashObject[i] = "*";
			//cout<<i<<hashObject[i]<<endl; //debugging line 2
		}
	}
	
	void insert(){ //insert a word into the Hash
	
		string t; int f; int l; int location; int done = 0;
		cout<<"Insert Word: ";
		cin>>t;
		
		
		f = t[0];
		l = t[t.size()];
		location = ((f)+(l))%23;
		
		while(done == 0){
			if(hashObject[location] == "*"){
				hashObject[location] = t;
				done = 1;
			}
			else if(location != 22){
				location++;
			}
			else{
				location = 0;
			}
		}
	}
	
	void out(){ //output locations that are storing a word
		int check = 0;
		while(check < 23){
			//if(hashObject[check] != "*"){
				cout<<"Location "<<check<<": "<<hashObject[check]<<endl;
				check++;
			//}
		}
	}
	
	int check(string input){//check hashObject for word
		int f; int l; int location;
		
		f = input[0];
		l = input[input.size()];
		location = ((f)+(l))%23;
		
		while(hashObject[location] != "*"){
			//cout<<"Debugg"<<endl; //debugging line 3
			if(hashObject[location] == input){
				return 1;
			}
			else if(location != 22){
				location++;
			}
			else{
				location = 0;
			}
		}
		return 0;
	}
private:
	vector<string> hashObject = vector<string>(23);
};

int main(void){
	
	Hash sarner; //creates new class of Hash
	
	for(int i = 0;i < 15; i++){ //user inputs into Hash
		sarner.insert();
	}
	
	sarner.out(); //return the vector of Hash
	
	string check;
	while(check != "*"){ //query user for words to search Hash with (terminate with input * )
		cout<<"Insert word to search for (typing * will terminate program): ";
		cin>>check;
		if(check != "*"){
			if(sarner.check(check) == 1){
				cout<<check<<" is included in the list!"<<endl;
			}
			else{
				cout<<check<<" is not included in the list"<<endl;
			}
		}		
	}
	
	return 0;
}
