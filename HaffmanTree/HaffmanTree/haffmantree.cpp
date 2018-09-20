#include "haffmantree.h"

HaffmanTree::HaffmanTree()
{
    left = right = nullptr;
    weight = 0;
    fileChar = '\0';
}

HaffmanTree::HaffmanTree(char fileChar, int weight)
{
    this->fileChar = fileChar;
    this->weight = weight;
    left = right = nullptr;
}

HaffmanTree::HaffmanTree(HaffmanTree *left, HaffmanTree *right, char fileChar, int weight){
    this->left = left;
    this->right = right;
    this->fileChar = fileChar;
    this->weight = weight;
}
