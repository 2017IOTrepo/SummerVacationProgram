#pragma once

#include <QByteArray>

class Node {
public:
	int weight; // Ȩ��
	char ch; // �洢���ַ�
	QByteArray huffArray;

	Node();
	~Node();
};



Node::Node() {
	weight = 0;
	ch = '\0';
}


Node::~Node() {

}
