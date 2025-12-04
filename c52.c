
#include <stdio.h>


int stringLength(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}


void stringCopy(char dest[], char src[]) {
    int i;
    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
}

// compare strings (0 = same, 1 = different)
int stringCompare(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' || b[i] != '\0') {
        if (a[i] != b[i])
            return 1;   
        i++;
    }
    return 0;          
}

// concatenate strings
void stringConcat(char a[], char b[]) {
    int i = 0, j = 0;

    
    while (a[i] != '\0') {
        i++;
    }

    
    while (b[j] != '\0') {
        a[i] = b[j];
        i++;
        j++;
    }
    a[i] = '\0';
}



int main() {
    char str[100], rev[100];
    int len, i;

    printf("Enter a word: ");
    scanf("%s", str);

    
    len = stringLength(str);

   
    for (i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[i] = '\0';

    
    if (stringCompare(str, rev) == 0)
        printf("It is a palindrome.\n");
    else
        printf("Not a palindrome.\n");

    return 0;
}

