////
////  main.cpp
////  Assignment_2
////
////  Created by Vidhur Savyasachin on 10/6/18.
////  Copyright © 2018 Vidhur Savyasachin. All rights reserved.
////
////Create a file and write the values of A to Z to it.
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct Letters
{
    Letters() : freq(0){}
    Letters(char letter,int freq) {
        this->freq = freq;
        this->letter = letter;
    }
    char letter;
    int freq;
};

bool Greater(const Letters& a, const Letters& b)
{
    if(a.freq == b.freq)
        return a.letter < b.letter;
    return a.freq > b.freq;
}

int main () {
   
    string input =  "rqhpngvba vf gur zbfg cbjreshy jrncba juvpu lbh pna hfr gb punatr gur jbeyq. aryfba znaqryn";
    int asciiValue;
    char letters_1;
      cout<<"Encrypted Word " << " English Word" << "\n";
    for (int i=0; i<input.size(); i++) {
        asciiValue = input[i];
//        cout<<input[i]<<" ";
        if(asciiValue>=110&&asciiValue<=122){
            asciiValue = input[i]-13;
            letters_1 =asciiValue;
            cout<<"\n";
            cout<<"\t"<<input[i]<<"\t\t\t\t\t "<< letters_1<< " ";
        }else if(asciiValue>=97&&asciiValue<=109){
            asciiValue = input[i]+13;
             letters_1 =asciiValue;
             cout<<"\n";
             cout<<"\t"<<input[i]<<"\t\t\t\t\t "<< letters_1<< " ";
        }
        //114,98,97,110
       
        
    }
    vector<Letters> count;
    int letters[26]= {0};
    for (int x = 0; x < input.length(); x++) {
        if (isalpha(input[x])) {
            int c = tolower(input[x] - 'a');
            letters[c]++;
        }
        
    }
    
    for (int x = 0; x < 26; x++) {
        if (letters[x] > 0) {
            char c = x + 'a';
            count.push_back(Letters(c, letters[x]));
        }
    }
    
    
    return 0;
}

