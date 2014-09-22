
#ifndef MAXHEAP_H
#define MAXHEAP_H

template <typename Elem>

class maxheap
{

private:
	Elem *Heap;
	int size;
	int n;
	void siftdown(int);

public:


	maxheap(Elem *h, int num, int max)
	{
		Heap = h;
		n = num;
		size = max;
		buildHeap();

	}

	int heapsize() const
	{
		return n;
	}

	int leftChild(int pos) const
	{
		return 2 * pos + 1;
	}

	int rightChild(int pos) const
	{
		return 2 * pos + 2;
	}

	void buildHeap()
	{
		for (int i = n / 2 - 1; i >= 0; i--)
			siftdown(i);
	}

	bool isLeaf(int pos) const
	{
		return (pos >= n / 2 && pos < n);
	}

//	friend void heapSort(Elem a[],int n);

	bool removemax(Elem &it);

	bool insert(const Elem& val);

	int parent(int pos) const
	{
		return pos / 2 - 1;
	}


};


template <typename Elem>
void maxheap<Elem>::siftdown(int pos)
{
	while (!isLeaf(pos)) //stop if pos is leaf
	{
		int j=leftChild(pos);
		int rc = rightChild(pos);

		if (rc < n&&(Heap[j] < Heap[rc]))
			j = rc;
		if (!(Heap[pos] < Heap[j])) 
			return;
		
		Elem temp = Heap[j];
		Heap[j] = Heap[pos];
		Heap[pos] = temp;

		pos = j;//move down



	}
}


template <typename Elem>
bool maxheap<Elem>::removemax(Elem & it)
{
	if(n==0)
		return false;
	int m = --n;
	Elem temp = Heap[0];
	Heap[0] = Heap[m];
	Heap[m] = temp;

	if (n != 0)
		siftdown(0);
	it = Heap[n];
	return true;
}


template <typename Elem>
void heapSort(Elem a[], int n)
{
	Elem mval;
	maxheap<Elem> H(a, n, n);
	for (int i = 0; i < n; i++)
		H.removemax(mval);

}


template <typename Elem>

bool maxheap<Elem>::insert(const Elem& var)

{
	if (n >= size) //heap is full;
		return false;
	int curr = n++;
	Heap[curr] = var;

	while (Heap[curr]>Heap[parent(curr)]&&curr!=0)
	{
		Elem temp = Heap[curr];
		Heap[curr] = Heap[parent(curr)];
		Heap[parent(curr)] = temp;

		//交换子节点和父节点

		curr = parent(curr);

	}

	return true;



}







#endif