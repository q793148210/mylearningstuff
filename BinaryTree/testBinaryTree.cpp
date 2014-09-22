#include <iostream>
#include "BinaryTree.h"
#include "BinaryTree.cpp"

using namespace std;

int main()
{
	int array1[] = { 1, 2, 3, 4, 5, 6 };

	BinaryTree<int> binaryTree(array1, 6);

	binaryTree.inorder();




	return 0;
}
