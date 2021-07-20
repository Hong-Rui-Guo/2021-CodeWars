#include <string>

using namespace std;

int getCount(const string& inputStr){
    int num_vowels = 0;

    for (int i = 0; i < inputStr.size() ;i++)
    {
        switch(inputStr[i])
        {
            case 'a':
                num_vowels++;
                break;
            case 'e':
                num_vowels++;
                break;
            case 'i':
                num_vowels++;
                break;
            case 'o':
                num_vowels++;
                break;
            case 'u':
                num_vowels++;
                break;
            default:
                num_vowels=num_vowels;
                break;
        }
    }

    return num_vowels;
}


/*
method2 : use count_if function in iostream

bool is_vowel(char c) {
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int getCount(const string& inputStr) {
  return count_if(inputStr.begin(), inputStr.end(), is_vowel);
}
*/