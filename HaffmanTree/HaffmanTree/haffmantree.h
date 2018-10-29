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

    char fileChar;//字符
    int weight;//权重
    QString charWeight;//哈夫曼编码
};

#endif // HAFFMANTREE_H
