// Implements a dictionary's functionality
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

#include "dictionary.h"

FILE *dict;
// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1]; //The word
    struct node *next; //Pointer to the next word (linked list type connection)
}
node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[N];



// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    dict = fopen("dictionaries/large", "r");

    if (dict == NULL)
    {
        return false;
    }
    else
    {
        return true;
    }
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    char character;
    int counter = 0;

    if (dict == NULL)
    {
        return 0;
    }
    else
    {
        while((character = fgetc(dict)) != EOF)
        {
            if (character == '\n')
            {
                counter++;
            }
            else
            {
                continue;
            }
        }
        //printf("Total words: %i\n", counter);
       return counter;
    }
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
}

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    
    return true;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    if (fclose(dict) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}