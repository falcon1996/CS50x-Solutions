/**
 * dictionary.c
 *
 * Computer Science 50
 * Problem Set 5
 *
 * Implements a dictionary's functionality.
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <math.h>

#include "dictionary.h"
int hash_fn(const char* word);

#define HASH_SIZE 500


 // node declare
 typedef struct node
   {
       char* word;
       struct node* next;
   }
   node;
   
   
  // hash_table 
  node* hash_table[HASH_SIZE];
  

  char word[LENGTH+1];
  
  int count = 0;
   

/**
 * Returns true if word is in dictionary else false.
 */
bool check(const char* word) 
{
    
       int z =  hash_fn(word);
       
       node* crawler = malloc(sizeof(node));
       crawler = hash_table[z];
       
       while( crawler )
       {
           
           if(strcasecmp (crawler->word, word) == 0)
           {
               return true;
           }
           
          crawler = crawler->next;
       }
       
       //free(crawler);
       return false;
}


/**
 * Loads dictionary into memory.  Returns true if successful else false.
 */
bool load(const char* dictionary)
{
    
      FILE* ptr = fopen(dictionary , "r");
    
      if( ptr == NULL)
      {
      return false;
      }
    
    
   
      while(fscanf(ptr, "%s\n", word) != EOF)     //new_node->word is destination of string from file
      {
          node* new_node = malloc(sizeof(node));
          new_node->word = malloc(strlen(word)+1);
          
          
          strcpy(new_node->word, word);
        
          int h = hash_fn(word);
        
          if(hash_table[h] == NULL)
          {
            
              hash_table[h] = new_node;  
              new_node->next = NULL;
              
          }
        
          else
          {
              
              new_node->next = hash_table[h];
              hash_table[h] = new_node;
              
             
          }
          
          count++;
        }
    
    
    fclose(ptr);
    
    return true;
   
}


 // hash function
  int hash_fn(const char* word)
   {
    
    int index = 0;
    int i;

    // sum ascii values
    for ( i = 0; word[i] != '\0'; i++)
        // search for lower cases wordss
        index += tolower(word[i]);

    // mod by size to stay w/in bound of table
    return index % HASH_SIZE;
    
   }


/**
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
unsigned int size(void)
{
    
    return count;
}

/**
 * Unloads dictionary from memory.  Returns true if successful else false.
 */
bool unload(void)
{
    int n;
    
   for( n=0; n<HASH_SIZE; n++)
   {
       
       node* cursor;
       cursor = hash_table[n];
       
       while(cursor)
       {
           node* temp = cursor;
           cursor = cursor->next;
           free(temp);
           return true;
       }
         
         hash_table[n] = NULL;
       
   }
   return false;
   
}
