#ifndef BINARY_H
#define BINARY_H

template <typename T>
class TreeNode
{
public:
	T element;
	TreeNode<T> *left;
	TreeNode<T> *right;


	TreeNode()
	{
		left = NULL;
		right = NULL;
	}

	TreeNode(T element)
	{
		this->element = element;
		left = NULL;
		right = NULL;

	}
};






















#endif