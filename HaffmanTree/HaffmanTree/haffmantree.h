#ifndef HAFFMANTREE_H
#define HAFFMANTREE_H

#include <QString>
#include <iostream>

class HaffmanTree
{
public:
    HaffmanTree();
    HaffmanTree(char, int);
    HaffmanTree(HaffmanTree *, HaffmanTree *, char, int);

    HaffmanTree *left;//左节点
    HaffmanTree *right;//右节点

    char fileChar;
    int weight;
    QString charWeight;
};

#endif // HAFFMANTREE_H
