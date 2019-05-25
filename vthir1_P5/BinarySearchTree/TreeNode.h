#include <iostream>
#include <regex>
using namespace std;
class TreeNode {
        private:
            string data;
            TreeNode *leftNode = NULL;
            TreeNode *rightNode = NULL;
        public:
            TreeNode(string data);
            ~TreeNode();
            void insert(string value);
            void print5();
            string getData();
            void setData(string data);
            TreeNode getLeftNode();
            void setLeftNode(TreeNode *leftNode);
            TreeNode getRightNode();
            void setRightNode(TreeNode *rightNode);

        };


