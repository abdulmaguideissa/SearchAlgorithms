/** @file
    jsearch.c

  * @brief description
    This search algorithm requires a sorted array.
	Rather than looping the entire array, it makes block jumps 
	through the array searching for a given number.
  
  * @author
    Abdulmaguid Eissa
  
  * @date
    Feb, 2019
  
  *	@COPYRIGHT NOTICE
  *
  *
  *
* */


#include <stdint.h>
#include <math.h>

#include "jsearch.h"

// ************* jump_search **************
uint8_t 
jump_search(int32_t* arr, uint8_t n, int32_t number) {
	int8_t  position;
	uint8_t jump;
	uint8_t high;
	uint8_t low;
	uint8_t index;

	position = 255;
	jump     = sqrt(n);
	high     = n - 1;
	low      = 0;
	index    = 0;

	while ( index < jump ) {      // Find range for the given number
		if ( arr[jump] > number )
			high = jump - 1;
		else
			low = jump + 1;
		index++;
	}
	index = low;		// Set the lower bound to begin searching 
	while ( index <= high ) {
		if ( arr[index] == number )
			return index;
		index++;
	}
	return (255);
}

// ************* end of file *************
