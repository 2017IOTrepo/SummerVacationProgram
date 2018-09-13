#include "haffmantree.h"

HaffmanTree::HaffmanTree()
{
    left = right = nullptr;
    weight = 0;
    engNum = -1;
}

HaffmanTree::HaffmanTree(HaffmanTree *left, HaffmanTree *right, int engNum, int weight){
    this->left = left;
    this->right = right;
    this->engNum = engNum;
    this->weight = weight;
}
