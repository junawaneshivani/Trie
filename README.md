
## Trie Data Structure

It is a data structure used to store collection of strings for easy retrieval.

## How to run ?

#### Example Trie
<pre>
shivani@shivani-VirtualBox:~/Desktop/Tries$ g++ tries_example.cpp tries.cpp -o trie
shivani@shivani-VirtualBox:~/Desktop/Tries$ ./trie 

 Word car is present.
 Word cart is present.
 Word car is deleted.
 Word car is not present.
 Word cart is present.
 Word carrom is not present.
 Word carrom is present.
 Word car is not present.
</pre>

#### Spell Checker
<pre>
shivani@shivani-VirtualBox:~/Desktop/Trie$ g++ spell_checker.cpp tries.cpp -o spell_checker
shivani@shivani-VirtualBox:~/Desktop/Trie$ ./spell_checker 
cat ball bat bark cart
cat ball bat <ins>bark</ins> cart
</pre>

