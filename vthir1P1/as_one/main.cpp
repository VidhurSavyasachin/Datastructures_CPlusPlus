
#include <iostream>
#include <regex>
using namespace std;

int main(int argc, const char * argv[]) {
    // initializing input mask to true.
    bool alphabets[26] = {true};
    string enterTheInput;
    char value = '.';
    int index;
    //Reading input untill '.' is encountered.
    getline(cin, enterTheInput,value);
    //Removing whitespaces using Regex expressions
    enterTheInput =  regex_replace(enterTheInput, std::regex("\\s+"), "" );
    //loop to check whether char is an alphabet, if it is, changing the bool to false
    for(int i=0;i<enterTheInput.length();i++){
        if(isalpha(enterTheInput[i])){
                index = ((int)toupper(enterTheInput[i])) - 65;
                alphabets[index] = 1;
        }
    }
    //printing the letters that are not used.
     for (int i=0; i<26; i++) {
        if(alphabets[i] == 0){
          cout<<char(65+i)<< " ";
        }
    }
    return 0;
}


