/** @file
    bsearch.c
    
  * @brief description
    Source file for binary search algorithm 
    Divide and conquer algorithm.
    Requires a sorted array to search.
    
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

#include "bsearch.h"

// ************* binary_search **************
// this implementation assumes the provided array is sorted 
// in ascending order.
uint8_t 
binary_search(int32_t* arr, uint8_t size, int32_t num) {
	int8_t  position;
	uint8_t beg;
	uint8_t end;
	uint8_t mid;

	position = 255;
	beg      = 0;
	end      = size - 1;

	while ( beg <= end ) {
		mid = (beg + end) / 2;
		if ( arr[mid] == num ) {
			position = mid;
			break;
		}
		else if ( arr[mid] > num ) {
			end = mid - 1;
		}
		else {
			beg = mid + 1;
		}
	}
	return (position);
}

// ************* end of file *************
