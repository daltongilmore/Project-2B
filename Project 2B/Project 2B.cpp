﻿/*

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


//setting up map
map<char, string> MorseMap;
map<char, string>::iterator iterator;


//Symbols for morse code
string symbol1 = ".";
string symbol2 = "_";


//morse code map based on text
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

//=======================================
Binary_Tree MorseTree;

//builds the tee from the used source
MorseTree.insert(WordTree[i]);

//decode function
void decode(MorseTree, WordTree){

	MorseTree.insert(WordTree[i]);

}

//encode function
void encode(SecondMorseTree, MorseWordTree){
	
	SecondMorseTree.insert(MorseWordTree[i]);
	
}

//=======================================


int main()
{
	// Binary tree as shown on PDF
	vector<std::string> WordTree{ "h","v","f","l","p","j","NULL","b","x","c","y","z","q","NULL",
								"s","u","r","w","d","k","g","o","NULL","i","a","n","m","NULL",
								"e", "t", "NULL" };
 
}

 
