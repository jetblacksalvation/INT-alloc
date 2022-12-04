// Memalloc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct vector {
	int* ptr;
	size_t len;
	size_t bytes;
};

typedef struct vector* Vector;

void create_vec(struct vector** vector, size_t length) {
	*vector = malloc(sizeof(Vector));
	(*vector)->ptr = malloc(sizeof(int) * (length * length));//allocate extra memory, you dont want to run out of it, than you would need to realloc. 
	(**vector).len = length;
	(**vector).bytes = (length * length);

}
void free_vector(struct vector* vector) {
	//free((*vector)->ptr);
	free(vector);
	return;
}


int main()
{
	struct vector* bruh = 0;
	
	create_vec(&bruh, 3);
	bruh->ptr[0] = 20;
	printf("%i", bruh->ptr[0]);

	//free(bruh);
	//memcpy(bruh->ptr, "helo", 4);
	//printf("%i",bruh->ptr[4]);
	//free_vector(bruh);
}
