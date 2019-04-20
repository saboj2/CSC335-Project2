all:
	gcc -o kmin_heap kmin_heap.c
	gcc -o kmin_sort kmin_sort.c
clean:
	rm kmin_heap
	rm Kmin_sort
