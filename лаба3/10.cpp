#include <iostream>
#include <string>

using namespace std;

int main() {
  string sentence = "Can you can a can as a canner can can a can?";
  string new_word = "new_word";

  for (int i = 0; i < sentence.length(); i++) {
    if ((sentence[i] == 'c' || sentence[i] == 'C') && sentence[i + 1] == 'a' && sentence[i + 2] == 'n' && sentence[i + 3] != 'n') {
      sentence.replace(i, 3, new_word);
    }
  }

  cout << sentence << endl;

  return 0;
}
