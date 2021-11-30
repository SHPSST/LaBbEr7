#include<iostream>
#include<string>

using namespace std;
string z,v;
string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string z = "";
	while(i < L){
		z += toupper(x[i]);
		i++;
	}
	return z;	
}

string func3(string x){
	int i = 0, L = x.size();
	string v = "",M;
	while(i < L){
		v += tolower(x[i]);
		i++;
	}
	return v;
}

string newfunc(string x){
	int i=0,L = x.size();
	while(i<L)
		{
			if(x[i]==x[L-i-1])
				{
					i++;
				}
			else if(x[i]==z[L-i-1])
				{
					i++;
				}
			else if(x[i]==v[L-i-1])
				{
					i++;
				}
			else
				{
					cout << "No";
					return 0;
				}		
		} 
	cout << "Yes";
	return 0;
}


int main(){
	string M;
    cout << "Input text: "	;
	cin >> M;
    cout << "Reversed text: "<<	func1(M)<<"\n";
    cout << "Palindrome: "<<newfunc(M)	;
    return 0;
}
