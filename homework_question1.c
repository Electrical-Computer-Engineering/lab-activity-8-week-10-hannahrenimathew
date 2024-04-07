/*hannah mathew 115441475*/

#include <stdio.h>
#include <string.h>

int isVowel(char c) {
    c = tolower(c); 
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

char* ToPigLatin(char* word) {
    static char pigLatin[40]; 
    int len = strlen(word);
    int i;

    if (isVowel(word[0])) {
        strcpy(pigLatin, word);
        strcat(pigLatin, "way");
    } else { 
        for (i = 0; i < len; i++) {
            if (isVowel(word[i]))
                break;
        }
        strcpy(pigLatin, word + i);
        strncat(pigLatin, word, i);
        strcat(pigLatin, "ay");
    }

    if (word[0] >= 'A' && word[0] <= 'Z') {
        pigLatin[0] = pigLatin[0] - 'a' + 'A'; 
    }

    return pigLatin;
}

int main() {
    char words[5][40];
    char pigLatin[5][40];
    int i;

    printf("Input 5 words: ");
    for (i = 0; i < 5; i++) {
        scanf("%s", words[i]);
    }

    printf("Pig Latin version of the 5 words:\n");
    for (i = 0; i < 5; i++) {
        strcpy(pigLatin[i], ToPigLatin(words[i]));
        printf("%s ", pigLatin[i]);
    }
    printf("\n");

    return 0;
}