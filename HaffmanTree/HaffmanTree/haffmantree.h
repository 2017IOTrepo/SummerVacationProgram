#ifndef HAFFMANTREE_H
#define HAFFMANTREE_H


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

};

#endif // HAFFMANTREE_H
