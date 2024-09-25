#include <stdio.h>
#include <string.h>

int isPalindrome(char word[]) {
    int length = strlen(word);
    int isPalin = 1; 

    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - 1 - i]) {
            isPalin = 0;
            break;
        }
    }
    return isPalin;
}

int main() {
    char word[100]; 

    printf("Enter a word: ");
    scanf("%s", word); 

    if (isPalindrome(word)) {
        printf("%s is a palindrome.\n", word);
    } else {
        printf("%s is not a palindrome.\n", word);
    }

    return 0;
}
