/* hannah mathew 115441475 */

#include <stdio.h>
#include <string.h>

int main() {
    char str[11]; 
    int i = 0;
    
    printf("Enter a string (up to 10 characters): ");
    scanf("%s", str);

    int len = strlen(str); 
    
    for (i = 0; i < len; i++) {
        printf("%s\n", &str[i]);  
    }

    return 0;
}
