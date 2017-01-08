/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

bool search(int value, int array[], int n)
{
  int min = 0;
  int max = n-1;
  int mid = (min + max) / 2;
  
  while( min <= max )
  {
      
      if (value == array[mid])
      {
      return true;
      }
      
     else if ( value < array[mid])
      {
          max = mid - 1;
          mid = (min + max)/2;
      }
      
      else if (value > array[mid])
      {
          min = mid + 1;
          mid = (min + max)/2;
      }
      
    
  }
  
  return false;
}





/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    
    int i, j, min, swap;
    // TODO: implement an O(n^2) sorting algorithm
    
    for( i=0; i<n; i++)
    {
        
        min = i;
        for( j=i+1; j<n; j++)
        {
            if( values[j] < values[min])
            {
                min = j;
            }
            if( min != i)
            {
                swap = values[i];
                values[i] = values[min];
                values[min] = swap;
            }
        }
        
    }
    
}