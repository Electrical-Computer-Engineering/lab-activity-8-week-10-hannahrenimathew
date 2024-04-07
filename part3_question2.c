/*hannah mathew 115441475*/
#include <stdio.h>
#include <string.h>

int removeChars(char s1[], char s2[]) {
    int i, j;
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    for (i = 0; i < len2; i++) {
        for (j = 0; j < len1; j++) {
            if (s1[j] == s2[i]) {
                for (int k = j; k < len1 - 1; k++) {
                    s1[k] = s1[k + 1];
                }
                len1--;
                j--;
            }
        }
    }

    return len1;
}

int main() {
    char s1[100], s2[100];

    printf("Enter string s1: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter string s2: ");
    fgets(s2, sizeof(s2), stdin);

    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    int newLength = removeChars(s1, s2);

    printf("Output: %s\n", s1);

    return 0;
}
