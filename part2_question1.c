/* hannah mathew 115441475 */

#include <stdio.h>
#include <string.h>

int my_strcmp(const char *s1, const char *s2) {
    int i = 0;
    while (s1[i] == s2[i]) {
        if (s1[i] == '\0')
            return 0;
        i++;
    }
    return 1;
}

int my_strncmp(const char *s1, const char *s2, size_t n) {
    size_t i = 0;
    while (i < n && s1[i] == s2[i]) {
        if (s1[i] == '\0' || i == n - 1)
            return 0;
        i++;
    }
    return 1;
}

char *my_strcpy(char *dest, const char *src) {
    char *temp = dest;
    while ((*dest++ = *src++) != '\0');
    return temp;
}

char *my_strcat(char *dest, const char *src) {
    char *temp = dest;
    while (*dest)
        dest++;
    while ((*dest++ = *src++) != '\0');
    return temp;
}

char *my_reverse(char *dest, const char *src) {
    int length = 0, i = 0;
    while (src[length])
        length++;
    for (i = 0; i < length; i++)
        dest[length - i - 1] = src[i];
    dest[length] = '\0';
    return dest;
}

int main() {
    char str1[100], str2[100];
    
    printf("testing my_strcmp:\n");
    my_strcpy(str1, "lab");
    my_strcpy(str2, "lab");
    printf("the result of strcmp: %d\n", my_strcmp(str1, str2)); 
    
    my_strcpy(str2, "eight");
    printf("the result of strcmp: %d\n", my_strcmp(str1, str2)); 
    
    printf("\ntesting my_strncmp:\n");
    my_strcpy(str1, "lab");
    my_strcpy(str2, "lab");
    printf("the result of strncmp: %d\n", my_strncmp(str1, str2, 3)); 
    my_strcpy(str2, "eight");
    printf("the result of strncmp: %d\n", my_strncmp(str1, str2, 3)); 
    
    printf("\ntesting my_strcpy:\n");
    printf("the copied string: %s\n", my_strcpy(str1, "copy this string")); 
    
    printf("\ntesting my_strcat:\n");
    my_strcpy(str1, "lab ");
    printf("the concatenated string: %s\n", my_strcat(str1, "eight")); 
    
    printf("\ntesting my_reverse:\n");
    printf("the reversed string: %s\n", my_reverse(str1, "thgie")); 
    
    return 0;
}
