/** @file 
    jsearch.h
    
  * @brief description
    API to interface the jump search function
   
  * @author
    Abdulmaguid Eissa

  * @date
    Feb, 2019

  *	@COPYRIGHT NOTICE 
  *
  *
  *
* */


#ifndef JUMPSEARCH__H
#define JUMPSEARCH__H


// ************* jump_search **************
// brief description: 
// inputs:  pointer to array of integers, 
//          the array size,
//          integer number to search for. 
// outputs: position of the number if found,
//          255 indicating ERROR or not found number.         
// NOTES:   jump search requires a sorted array
uint8_t 
jump_search(int32_t* arr, uint8_t size, int32_t num);







#endif  // ************* JUMPSEARCH__H *************

        // ************* end of file *************
