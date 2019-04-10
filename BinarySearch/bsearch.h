/** @file 
    bsearch.h
    
  * @brief description
    API to interface the binary search function
   
  * @author
    Abdulmaguid Eissa

  * @date
    Feb, 2019

  *	@COPYRIGHT NOTICE 
  *
  *
  *
* */


#ifndef BINARYSEARCH__H
#define BINARYSEARCH__H


// ************* binary_search **************
// brief description: 
// inputs:  pointer to array of integers, 
//          the array size,
//          integer number to search for. 
// outputs: position of the number if found,
//          255 indicating ERROR or not found number.         
// NOTES:   binary search requires a sorted array
uint8_t 
binary_search(int32_t* arr, uint8_t size, int32_t num);







#endif  // ************* BINARYSEARCH__H *************

         // ************* end of file *************
