#include <stdio.h>
#include <string.h>

// List of C keywords
const char *keywords[] = {
    "auto", "break", "case", "char", "const", "continue", "default", "do", "double",
    "else", "enum", "extern", "float", "for", "goto", "if", "inline", "int", "long",
    "register", "restrict", "return", "short", "signed", "sizeof", "static", "struct",
    "switch", "typedef", "union", "unsigned", "void", "volatile", "while", "_Alignas",
    "_Alignof", "_Atomic", "_Bool", "_Complex", "_Generic", "_Imaginary", "_Noreturn",
    "_Static_assert", "_Thread_local"
};

// Function to check if a word is a keyword
int isKeyword(char word[]) {
    int n = sizeof(keywords) / sizeof(keywords[0]);
    for (int i = 0; i < n; i++) {
        if (strcmp(word, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

int main() {
    char word[50];

    // User input
    printf("Enter a word: ");
    scanf("%s", word);

    // Check if the word is a keyword
    if (isKeyword(word))
        printf("\"%s\" is a valid C keyword.\n", word);
    else
        printf("\"%s\" is NOT a C keyword.\n", word);

    return 0;
}
