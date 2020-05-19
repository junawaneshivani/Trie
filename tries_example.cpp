/*
Tries that can store word count of only small alphabets
*/

#include <iostream>
using namespace std;

#include "tries.h"

int main(){

    Trie oTrie;

    vector<string> words = { "cat", "car", "cart", "ball", "bat", "bats"};
    for(string word: words)
        oTrie.insertWord(word);

    string word = "car";
    oTrie.searchWord(word) ? printf("\n Word %s is present.", word.c_str()) : printf("\n Word %s is not present.", word.c_str());
    
    word = "cart";
    oTrie.searchWord(word) ? printf("\n Word %s is present.", word.c_str()) : printf("\n Word %s is not present.", word.c_str());

    word = "car";
    oTrie.deleteWord(word) ? printf("\n Word %s is deleted.", word.c_str()) : printf("\n Word %s is not deleted.", word.c_str());
    oTrie.searchWord(word) ? printf("\n Word %s is present.", word.c_str()) : printf("\n Word %s is not present.", word.c_str());
    word = "cart";
    oTrie.searchWord(word) ? printf("\n Word %s is present.", word.c_str()) : printf("\n Word %s is not present.", word.c_str());
     
    word = "carrom"; 
    oTrie.searchWord(word) ? printf("\n Word %s is present.", word.c_str()) : printf("\n Word %s is not present.", word.c_str());
    oTrie.updateWord("car", "carrom");
    oTrie.searchWord(word) ? printf("\n Word %s is present.", word.c_str()) : printf("\n Word %s is not present.", word.c_str()); 
    word = "car";
    oTrie.searchWord(word) ? printf("\n Word %s is present.", word.c_str()) : printf("\n Word %s is not present.", word.c_str()); 
    
    cout << endl << endl;
    return 0;
}


