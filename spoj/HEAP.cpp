#include <bits/stdc++.h>

struct Heap {
	int nodes, *max, *tab;

	Heap(int n) {
		this->nodes = n;
		this->tab = new int [n+1];
		this->max = &(tab[1]);
	}
	
	void printHeap() {
		for(int i=1; i<=nodes; i++) printf("%d ", tab[i]);
		printf("\n");
	}
	
	void buildHeap() {
		for(int i=nodes/2; i>=1; i--) heapify(i);
	}
	
	void heapify(int n) {
		int minimal = n;
		if(2*n <= nodes and tab[2*n] < tab[minimal]) minimal = 2*n;
		if(2*n+1 <= nodes and tab[2*n+1] < tab[minimal]) minimal = 2*n + 1;
		if(minimal != n)
		{
			int x = tab[minimal];
			tab[minimal] = tab[n];
			tab[n] = x;
			heapify(minimal);
		}
	}
	
	void delMax() {
		printf("%d\n", *max);
		tab[1] = tab[nodes--];
		this->buildHeap();
	}
	
	~Heap() { delete [] tab; }
};

int main()
{
	char ch;
	int t, nodes, queries;
	
	scanf("%d\n", &t);
	while(t --> 0)
	{
		scanf("%d\n", &nodes);
		Heap *heap = new Heap(nodes);
		for(int i=1; i<=nodes; i++) scanf("%d", &heap->tab[i]);
        
		heap->buildHeap();
	
		scanf("%d\n", &queries);
		while(queries --> 0)
		{
			scanf("%c\n", &ch);
			if(ch == 'P') heap->printHeap();
			else if (ch == 'E') heap->delMax();
		}
	}
		
	return 0;
}