/** @file 
    isearch.h
    
  * @brief description
    API to interface the interpolation search function
   
  * @author
    Abdulmaguid Eissa

  * @date
    Feb, 2019

  *	@COPYRIGHT NOTICE 
  *
  *
  *
* */


#ifndef INTERPOLATIONSEARCH__H
#define INTERPOLATIONSEARCH__H


// ************* interpolation_search **************
// brief description: 
// inputs:  pointer to array of integers, 
//          the array size,
//          integer number to search for. 
// outputs: position of the number if found,
//          255 indicating ERROR or not found number.         
// NOTES:   interpolation search requires a sorted array
uint8_t 
interpolation_search(int32_t* arr, uint8_t size, int32_t num);







#endif  // ************* INTERPOLATIONSEARCH__H *************

        // ************* end of file *************
