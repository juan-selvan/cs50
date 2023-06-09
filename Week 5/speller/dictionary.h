// Declares a dictionary's functionality

#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <stdbool.h>
#define LENGTH 45

typedef struct node
{
    char word[LENGTH + 1]; //The word
    bool has_word;
    struct node *next; //Pointer to the next word (linked list type connection)
}
node;

// Maximum length for a word
// (e.g., pneumonoultramicroscopicsilicovolcanoconiosis)

// Prototypes
bool check(const char *word);
unsigned int hash(const char *word);
bool load(const char *dictionary);
unsigned int size(void);
bool unload(void);

void kick(struct node* spot);

#endif // DICTIONARY_H
