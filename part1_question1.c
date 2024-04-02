/* hannah mathew 115441475 */

#include <stdio.h>

int my_isalpha(char c){
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        return 1;
    } 
    return 0;
}

int my_isdigit(char c){
    if(c >= '0' && c <= '9'){
        return 1;
    }
    return 0;
}

char my_is_upper(char c){
    if(c >= 'A' && c <= 'Z'){
        return 1;
    }
    return 0;
}

char my_to_upper(char c){
    if(c >= 'a' && c <= 'z'){
        return c - 32;
    }
    return c;
}

char my_to_lower(char c){
    if(c >= 'A' && c <= 'Z'){
        return c + 32;
    }
    return c;
}

int main(){
    char c;
    int i = 0;
    
    while(i < 2){
    printf("Enter a character: ");
    scanf("%c", &c); getchar(); 
    
    printf("Is '%c' an alphabet? %d\n", c, my_isalpha(c));
    
    printf("Is '%c' a digit? %d\n", c, my_isdigit(c));
    
    printf("Is '%c' uppercase? %d\n", c, my_is_upper(c));

    printf("Uppercase of '%c': %c\n", c, my_to_upper(c));

    printf("Lowercase of '%c': %c\n", c, my_to_lower(c));
    
    i++;
    
}
    return 0;
    
}
