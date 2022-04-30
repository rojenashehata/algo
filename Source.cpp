#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include <map>
#include <iterator>
#include <math.h>
constexpr int n(int l) {
	return l;
}
//void fun(int n, string s) {
//	string s[];
//}
using namespace std;
int main() {

	/*string;
	fstream  src;
	src.open("chrmt.fsa");

	filebuf *in = src.rdbuf();

	char c[10];
	for(int i=0;i<10;i++){
		c[i]=in -> sbumpc();

	cout << c[i];
	}*/

	string s;
	auto ss = ostringstream{};
	ifstream in("chrmt.fsa");

	getline(in, s);
	ss << in.rdbuf();
	//cout << ss.str();
	in.close();

	//cout << endl << ss.str().length();
	//begin
	const int a = ss.str().length();
	// fun(a, ss.str());
	/*string *suffix;
	suffix = new string[a];
	suffix[0] = ss.str()[0];
	cout << endl << suffix[0];*/
	// ss.str().suffi();
	//const int n = ss.str().length();
	ss.str() += '$';
	try
	{
		
		string* k;
		k = new string[ss.str().length()];
		
		for (int i = 0; i < ss.str().length(); i++) {
			k[i] = ss.str().erase(0, i + 1);

		}
		
		
		//cout << k[ss.str().length() - 5];
	}
	catch (const std::exception&)
	{
		cout << "11";
	}


	return 0;
}