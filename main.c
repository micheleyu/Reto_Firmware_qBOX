#include <stdio.h>
#include <stdbool.h>


int handle_infix(char *line) {
    return 0;
}

int handle_postfix(char *line) {
    return 0;
}

int handle_prefix(char *line) {
    return 0;
}

bool is_infix(char *line) {
    return true;
}

int main()
{
    char test[10];
    printf("introduce la operación: \n");
    scanf("%s",&test);

    for (int i=0; ; i++) {
        if (test[i] == '\0')
            break;
        switch (test[i]) {
            case ' ':
                continue;
            case '\t':
                continue;
            case '+':
            case '-':
            case '*':
            case '/':
                handle_prefix(test);
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
            if (is_infix(test)) {
                handle_infix(test);
            }
            else {
                handle_postfix(test);
            }
            break;

        }
        printf("%c\n", test[i]);
    }
    
    return 0;
}
