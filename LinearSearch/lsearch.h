/** @file 
    lsearch.h
    
  * @brief description
    API to interface the linear search function
   
  * @author
    Abdulmaguid Eissa

  * @date
    Feb, 2019

  *	@COPYRIGHT NOTICE 
  *
  *
  *
* */


#ifndef LINEARSEARCH__H
#define LINEARSEARCH__H


// ************* interpolation_search **************
// brief description: 
// inputs:  pointer to array of integers, 
//          the array size,
//          integer number to search for. 
// outputs: position of the number if found,
//          255 indicating ERROR or not found number.         
// NOTES:   linear search does not require a sorted array
uint8_t 
linear_search(int32_t* arr, uint8_t size, int32_t num);







#endif  // ************* LINEARSEARCH__H *************

        // ************* end of file *************
