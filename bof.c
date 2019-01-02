// gcc bof.c -o build/simple-bof -no-pie -fno-stack-protector

#include <stdio.h>

int main() {
    char name[100];
    puts("What's your name?");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    return 0;
}
