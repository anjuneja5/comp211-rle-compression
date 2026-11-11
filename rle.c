#include <stdio.h>
#include <string.h>

void compress(char str[]) {
    int count = 1;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (i + 1 < len && str[i] == str[i + 1]) {
            count++;
        } else {
            printf("%d%c", count, str[i]);
            count = 1;
        }
    }

    printf("\n");
}

int main() {
    char text[] = "AAAABBBCC";

    printf("Original: %s\n", text);
    printf("Compressed: ");

    compress(text);

    return 0;
}
