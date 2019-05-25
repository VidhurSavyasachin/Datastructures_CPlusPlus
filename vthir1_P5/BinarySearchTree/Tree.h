#include<iostream>
#include "TreeNode.h"
class Tree{
private:
    
    TreeNode *root;
public:
    void insert(string value);
    void print5();
    string ltrim(const string& s);
    string rtrim(const string& s);
    string trim(const string& s);
};
