# stringB
Extention of std::string adding permanent char id memory and flags

## What it's for?

Consider next problem:

You have a string of chars. Every char in the string is the same value/character, for example - 'a'.

Your string looks something like this - "aaaaa"

If you randomly erase a char in this string - string looks like so - "aaaa"

What would be a good system that will allow to tell which char got randomly erased.

Problem is not difficult, but a good solution, in my opinion, would be creating a subclass that inherites std::string that will store unique ids for every char and overwrites methods in the original std::string that manipulate the string with instructions. This subclass will store continous ids for every char in std::vector inside the subclass. If character is erase so should that specific element in the vector

We'll get something like this (tester.cpp):

<img src="readMe\1.png"></img>
