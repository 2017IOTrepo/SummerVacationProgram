#ifndef HAFFMANTREE_H
#define HAFFMANTREE_H


class HaffmanTree
{
public:
    HaffmanTree();
    HaffmanTree(HaffmanTree *, HaffmanTree *, int, int);

    HaffmanTree *left;
    HaffmanTree *right;

    int engNum;
    int weight;

};

#endif // HAFFMANTREE_H
