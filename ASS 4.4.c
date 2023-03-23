#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100    // maximum size of the string

int main() {
    char str[MAX_SIZE];
    int freq[256] = {0};
  int i, max_freq = -1;
    char max_char;
    
    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);
    
    for(i=0; i<strlen(str); i++) {
        freq[str[i]]++;
    }
    
    for(i=0; i<strlen(str); i++) {
        if(freq[str[i]] > max_freq) {
            max_freq = freq[str[i]];
            max_char = str[i];
        }
    }
    
    printf("The maximum occurring character in the string is '%c' with frequency %d", max_char, max_freq);
    
    return 0;
}

output;
Enter a string: 55
The maximum occurring character in the string is '5' with frequency 2
