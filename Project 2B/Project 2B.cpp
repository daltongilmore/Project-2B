/*

Project 2B

Daniel J. Oliveros Guerra
Dalton Gilmore

CS 303 
Fall 2018

*/

#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include"Binary_Search_Tree.h"
#include"Binary_Tree.h"

using namespace std;

map<char, string> MorseMap;
map<char, string>::iterator iterator;

string symbol1 = ".";
string symbol2 = "_";

void MorseCodeMap() {

	MorseMap['a'] = "._";
	MorseMap['b'] = "_...";
	MorseMap['c'] = "._._.";
	MorseMap['d'] = "_..";
	MorseMap['e'] = ".";
	MorseMap['f'] = ".._.";
	MorseMap['g'] = "__.";
	MorseMap['h'] = "....";
	MorseMap['i'] = "..";
	MorseMap['j'] = ".___";
	MorseMap['k'] = "_._";
	MorseMap['l'] = "._..";
	MorseMap['m'] = "__";
	MorseMap['n'] = "_.";
	MorseMap['o'] = "___";
	MorseMap['p'] = ".__.";
	MorseMap['q'] = "__._";
	MorseMap['r'] = "._.";
	MorseMap['s'] = "...";
	MorseMap['t'] = "_";
	MorseMap['u'] = ".._";
	MorseMap['v'] = "..._";
	MorseMap['w'] = ".__";
	MorseMap['x'] = "_.._";
	MorseMap['y'] = "_.__";
	MorseMap['z'] = "__..";
	

}

int main()
{
 
}

 