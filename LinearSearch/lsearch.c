/** @file
    lsearch.c
    
  * @brief description
    linear search algorithm to find the position of the required number.
	does not require sorted array.
  
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

#include "lsearch.h"

// ************* linear_search **************
uint8_t 
linear_search(int32_t* arr, uint8_t size, int32_t num) {
	int8_t  position;
	uint8_t arr_i;

	position = 255;
	arr_i    = 0;

	for ( arr_i = 0; arr_i < size; arr_i++ ) {
		if ( arr[arr_i] == num ) {
			position = arr_i;
			break;
		}
	}
	return (position);  // 255 means no match
}

// ************* end of file *************