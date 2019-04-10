/** @file
    isearch.c
  
  * @brief description
    Source file for interpolation search algorithm
    Divide and conquer algorithm.
    Requires a sorted array to search.
	Dividing the list to be searched into two unequal halves
	Setting the mid index to the extreme position and check
	the same way as binary search.
  
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

#include "isearch.h"


// ************* interpolation_search **************
// this implementation assumes the provided array is sorted 
// in ascending order.
uint8_t 
interpolation_search(int32_t* arr, uint8_t size, int32_t num) {
	uint8_t mid;
	int8_t  position;
	uint8_t low;
	uint8_t high;

	position = 255;
	low      = 0;
	high     = size - 1;

	while ( low <= high ) {
		mid = low + (high - low) * ((num - arr[low]) / (arr[high] - arr[low]));
		if ( arr[mid] == num ) {
			position = mid;
			break;
		}
		else if ( arr[mid] > num ) {
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	return (position);
}

// ************* end of file *************
