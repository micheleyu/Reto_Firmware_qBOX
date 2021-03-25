#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>


void handle_infix(char *line, int size) {
    if (size < 3) { printf("Operacion invalida\n"); }
    return 0;
}

void handle_postfix(char *line, int size) {
    if (size < 3) { printf("Operacion invalida\n"); }
    return 0;
}

void handle_prefix(char *line, int size) {
    char op;
    int x;
    int y;

    if (size < 3) { printf("Operacion invalida\n"); }

    op = line[0];
    line++;
    
    while (line == ' ') {
        if (line == '\0') {
        }
    }
    x = strtol(line[0], 0, 10);
    while (line++ == ' ') ;
    y = strtol(line[0], 0, 10);

    switch (op) {
        case '+':
            printf("%i\n", x + y);
            break;
        case '-':
            printf("%i\n", x - y);
            break;
        case '*':
            printf("%i\n", x * y);
            break;
        case '/':
            if (y == 0) {
                printf("No se puede dividir entre cero\n";

            }
            printf("%i\n", x / y);
            break;
}

bool is_infix(char c) {
    return true;
}

int main()
{
    char test1[] = "5+6";
    char test2[] = "5 + 6";
    char test3[] = "-78";
    char test4[] = "*2 3";
    char test5[] = "5 7 /";
    char test6[] = "60/";
    char test7[] = "5++";

    printf("%s\n", test1);
    
    switch (test1[0]) {
        case ' ':
            continue;
        case '\t':
            continue;
        case '+':
        case '-':
        case '*':
        case '/':
            handle_prefix(test1);
            break;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            if (is_infix(test1)) {
                handle_infix(test1, strlen(test1));
            }
            else {
                handle_postfix(test1, strlen(test1));
            }
            break;

    }
    
    return 0;
}
