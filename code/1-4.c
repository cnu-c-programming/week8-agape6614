#include<stdio.h>
#include<string.h>
int my_strcmp(const char *a, const char *b){
    int i = 0;

    while(a[i] != '\0' || b[i] != '\0'){
        if(a[i] != b[i]){
            return (unsigned char)a[i] - (unsigned char)b[i];
        }
        i++;
    }

    return 0;
}

int main(){
    printf("%d\n", my_strcmp("abc", "abcd"));
    printf("%d\n", my_strcmp("abc", "abc"));
    printf("%d\n", my_strcmp("b", "a"));
    return 0;
}