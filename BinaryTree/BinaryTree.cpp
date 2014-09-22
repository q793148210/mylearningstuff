
#include "BinaryTree.h"
#include <cmath>
#include <iostream>



template <typename T>

BinaryTree<T>::BinaryTree()
{
	this->root = NULL;
	this->size = 0;
}

template <typename T>

BinaryTree<T>::BinaryTree(T element[], int size)
{
	this->root = NULL;
	this->size = 0;

	for (int i = 0; i < size; i++)
	{
		insert(element[i]);
	}


	
}



template <typename T>

bool BinaryTree<T>::insert(T element)
{
	if (this->root == NULL)
	{
		this->root = new TreeNode<T>(element);

	}

	else
	{
		TreeNode<T> *parent = NULL;
		TreeNode<T> *current = root;

		while (current != NULL)
		{
			if (element < current->element)
			{
				parent = current;
				current = current->left;
			}
			else if (element>current->element)
			{
				parent = current;
				current = current->right;
			}

			else
				return false;


			

			
		}
		if (element < parent->element)
			parent->left = new TreeNode<T>(element);
		else
		{
			parent->right = new TreeNode<T>(element);
		}
	}


	return true;


}


template <typename T>

void BinaryTree<T>::inorder()
{
	inorder(this->root);
}

template <typename T>

void BinaryTree<T>::inorder(TreeNode<T> *root)
{
	if (root == NULL)
		return;
	inorder(root->left);
	std::cout << root->element << " ";
	inorder(root->right);
}