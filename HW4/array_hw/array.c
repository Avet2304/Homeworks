#include "array.h"

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

// this function creates a new array and sets its initial size with  capacity
struct array* array_create()
{
	struct array* a = (struct array*)malloc(sizeof(struct array));
	assert(a != NULL);  // Make sure memory allocation succeeded
	memset(a, 0, sizeof(struct array));  // Set all values to 0 just to be safe

	a->size = 0;        // No elements yet
	a->capacity = 2;    // Start small, we'll grow as needed
	a->start = (element_type*)malloc(a->capacity * sizeof(element_type));
	return a;
}

// adds a new element at the end of the array
void array_push_back(struct array* a, element_type e)
{
	assert(a != NULL);

	// if there's no space left multiply the capacity by 2
	if (a->size >= a->capacity) {
		a->capacity *= 2;
		a->start = (element_type*)realloc(a->start, a->capacity * sizeof(element_type));
		assert(a->start != NULL);  // Check that realloc didn't fail
	}

	// put new element at the end and update size
	a->start[a->size] = e;
	a->size++;
}

// removes the last element in the array
void array_pop_back(struct array* a)
{
	assert(a != NULL);

	// only shrink the size if the array isn't already empty
	if (a->size > 0) {
		a->size--;
	}
}

// inserts a new element at the given index and shifts everything to the right
void array_insert(struct array* a, size_type index, element_type e)
{
	assert(a != NULL);
	assert(index <= a->size);  // Can't insert past the end

	// if  out of space make the array bigger
	if (a->size >= a->capacity) {
		a->capacity *= 2;
		a->start = (element_type*)realloc(a->start, a->capacity * sizeof(element_type));
		assert(a->start != NULL);
	}

	// move elements one spot to the right starting from the end
	for (size_type i = a->size; i > index; --i) {
		a->start[i] = a->start[i - 1];
	}

	// Place the new element and update the size
	a->start[index] = e;
	a->size++;
}

// returns the number of elements currently in the array
size_type array_size(struct array* a)
{
	assert(a != NULL);
	return a->size;
}

// returns how much space the array can hold
size_type array_capacity(struct array* a)
{
	assert(a != NULL);
	return a->capacity;
}

// prints all elements in the array with its size and capacity
void array_print(struct array* a)
{
	assert(a != NULL);
	for (size_type i = 0; i < a->size; ++i) {
		printf("%d ", a->start[i]);
	}
	printf("\nsize = %d", a->size);
	printf("\ncapacity = %d\n\n", a->capacity);
}

// Returns 1 (true) if the array is empty, 0 (false) otherwise
int array_empty(struct array* a)
{
	assert(a != NULL);
	return a->size == 0;
}

