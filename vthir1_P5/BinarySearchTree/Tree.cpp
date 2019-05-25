#include "Tree.h"

void Tree::insert(string value){
    if(root == NULL){
        root = new TreeNode(value);
    }else{
        root->insert(value);
    }
}
void Tree::print5(){
    if(root != NULL){
        root->print5();
    }
}

string Tree::  ltrim(const string& s) {
    return regex_replace(s, std::regex("^\\s+"), string(""));
}

string Tree::  rtrim(const string& s) {
    return regex_replace(s, regex("\\n\\s+$"), string(""));
}

string Tree::  trim(const string& s) {
    return ltrim(rtrim(s));
}
