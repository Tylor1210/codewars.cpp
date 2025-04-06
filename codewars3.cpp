#include <string>
#include <iostream>

unsigned int strCount(const std::string& word, char letter){
  unsigned int count = 0;
  //Loop through letters in word
  for (int i = 0; i < word.length(); i++) {
    if (word[i] == letter){
      //add to count
      count++;
    }
  }
  return count;
}