#pragma once

#include <QByteArray>

class Node {
public:
	int weight; // È¨ÖØ
	char ch; // ´æ´¢µÄ×Ö·û
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
