
#include "TreeNode.h"

TreeNode::TreeNode(string data){
    this->data = data;
}


void TreeNode::insert(string value){
    if(value == data) return ;
    if(value.compare(data) < 0){
        if(leftNode == NULL){
            leftNode = new TreeNode(value);
        }else{
            leftNode -> insert(value);
        }
    }else{
        if(rightNode == NULL){
            rightNode = new TreeNode(value);
        }else{
            rightNode->insert(value);
        }
    }
}
void TreeNode::print5(){
    if(leftNode != NULL) {
        leftNode->print5();
    }
    cout<< data << " ";
    if(rightNode != NULL) {
        rightNode->print5();
    }
}




string ltrim(const string& s) {
    return regex_replace(s, regex("^\\s+"), string(""));
}

string rtrim(const string& s) {
    return regex_replace(s, regex("\\n\\s+$"), string(""));
}

string trim(const string& s) {
    return ltrim(rtrim(s));
}

string TreeNode::getData(){
    return data;
}
void TreeNode::setData(string data){
    this->data = data;
}
TreeNode TreeNode::getLeftNode(){
    return *leftNode;
}
void TreeNode::setLeftNode(TreeNode *leftNode){
    this->leftNode = leftNode;
}
TreeNode TreeNode::getRightNode(){
    return *rightNode;
}
void TreeNode::setRightNode(TreeNode *rightNode){
    this->rightNode = rightNode;
}




