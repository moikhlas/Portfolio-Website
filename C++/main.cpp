#include <iostream>
#include <cmath>
#include <string>
#include <cctype>
#include <sstream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stringstream;


int main() {
  // CODE HERE
  stringstream ss;
  char character = 'z';
  char alfaBit[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

  for(int i = 0; i < 26; i++) {
    if(toupper(alfaBit[i]) == toupper(character)) {
      ss << character << " " << 65 + i;
      cout << toupper(ss.str()) << endl;
    }
  }
}

