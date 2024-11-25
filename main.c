#include "libftprintf.h"
int main(){
    char h = 'q';
    char *s = "hello";
    // ft_printf("%s %c\n", s, h);
    //printf("%s\n", "ziad");
    printf("F:%d\nO:%d \n", ft_printf("%X\n", "ziad"), printf("%X\n", "ziad"));
}