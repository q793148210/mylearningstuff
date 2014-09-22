#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "binary.h"

template <typename T>

class BinaryTree
{




public:
	BinaryTree();
	BinaryTree(T element[], int arraysize);
	bool insert(T element);
	void inorder();
	void preorder();
	void postorder();
	int getSize();


private:
	TreeNode<T> *root;
	int size;

	void inorder(TreeNode<T> *root);
	void preorder(TreeNode<T> *root);
	void postorder(TreeNode<T> *root);

};


#endif