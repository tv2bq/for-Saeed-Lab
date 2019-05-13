#include<iostream>
#include <map>
#include "programming_practice.h"

using namespace std;
std::string translate(string sequence){
std:: map<std::string, std::string> m;
string endResult;
m["GCA"] = "A"; m["GCC"] = "A"; m["GCG"] = "A"; m["GCU"] = "A";
m["UGC"] = "C"; m["UGU"] = "C";
m["GAC"] = "D"; m["GAU"] = "D";
m["GAA"] = "E"; m["GAG"] = "E";
m["UUC"] = "F"; m["UUU"] = "F";
m["GGA"] = "G"; m["GGC"] = "G"; m["GGG"] = "G";
m["CAC"] = "H"; m["CAU"] = "H";
m["AUA"] = "I"; m["AUC"] = "I"; m["AUU"] = "I";
m["AAA"] = "K"; m["AAG"] = "K";
m["UUA"] = "L"; m["UUG"] = "L"; m["CUA"] = "L"; 
m["CUC"] = "L"; m["CUG"] = "L"; m["CUU"] = "L";
m["AUG"] = "M";
m["AAC"] = "N"; m["AAU"] = "N";
m["CCA"] = "P"; m["CCC"] = "P";
m["CCG"] = "P"; m["CCU"] = "P";
m["CAA"] = "Q"; m["CAG"] = "Q";
m["AGA"] = "R"; m["AGG"] = "R"; m["CGA"] = "R";
m["CGC"] = "R"; m["CGG"] = "R"; m["CGU"] = "R";
m["AGC"] = "S"; m["AGU"] = "S"; m["UCA"] = "S";
m["UCC"] = "S"; m["UCG"] = "S"; m["UCU"] = "S";
m["ACA"] = "T"; m["ACC"] = "T"; m["ACG"] = "T";
m["ACU"] = "T";
m["GUA"] = "V"; m["GUC"] = "V"; m["GUG"] = "V"; 
m["GUU"] = "V"; m["UGG"] = "W"; m["UAC"] = "Y";
m["UAU"] = "Y";
for(int i=0;i<sequence.length();i++){
	if(sequence.length()<3){
		endResult = "Input too short. Please enter a valid codon.";
	}
	else{
	 	string test = "";
	 	test+=sequence[i];
		test+=sequence[i+1];
		test+=sequence[i+2];
		if(test.length()>2)
		endResult += m[test];
	}
}
if(endResult == ""){
	endResult+="Invalid input. Please enter a valid codon.";
}
cout << endResult << endl;

return endResult;
}
int main(){
	string sequence;
	cout << "Please enter your sequence: " << endl;
	cin >> sequence;
	translate(sequence);
	return 0;
}