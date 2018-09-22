#include "haffmantree.h"
#include <iostream>

HaffmanTree::HaffmanTree()
{
    left = right = NULL;
    weight = 0;
    fileChar = '\0';
    charWeight = "";
}

HaffmanTree::HaffmanTree(char fileChar, int weight)
{
    this->fileChar = fileChar;
    this->weight = weight;
    charWeight = "";
    left = right = NULL;
}

HaffmanTree::HaffmanTree(HaffmanTree *left, HaffmanTree *right, char fileChar, int weight){
    charWeight = "";
    this->left = left;
    this->right = right;
    this->fileChar = fileChar;
    this->weight = weight;
}
