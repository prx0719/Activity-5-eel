# Activity-5-eel
ACTIVITY 5
AIM: 
String operations using user defined functions.

THEME:
StringOperations
Develop a program to implement following operations on string (without
using built in functions, write user defined functions):
∙ Comparison of two strings
∙ Copy of one string into another
∙ Finding the length of the string
∙ Concatenating two strings into one



RESEARCH: 

https://www.w3schools.com/c/

https://www.geeksforgeeks.org/c/c-programming-language/

https://www.tutorialspoint.com/cprogramming/c_structures.htm


HOW IT WORKS:
This program checks whether a given word is a palindrome using user-defined string functions.
 It also includes all required operations:
 ✔ length
 ✔ copy
 ✔ compare
 ✔ concatenation
 ✔ palindrome check

📌 USER-DEFINED FUNCTIONS (Custom String Functions)

1️⃣ stringLength(char str[])
Purpose: Count how many characters are in the string manually.
How it works:
Start from index 0


Keep moving forward until you see '\0' (end of string)


Count each character


int stringLength(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

If input = "MADAM"
 Output = 5

2️⃣ stringCopy(char dest[], char src[])
Purpose: Copy one string into another without strcpy()
How it works:
Loop through each character of source string


Copy into destination one-by-one


Add '\0' at end


void stringCopy(char dest[], char src[]) {
    int i;
    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
}


3️⃣ stringCompare(char a[], char b[])
Purpose: Compare two strings
Returns:
0 → Strings are SAME


1 → Strings are DIFFERENT


Logic:
Check each character at same index


If any mismatch → return DIFFERENT


If loop finishes → return SAME


int stringCompare(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' || b[i] != '\0') {
        if (a[i] != b[i])
            return 1;   // different
        i++;
    }
    return 0;           // same
}


4️⃣ stringConcat(char a[], char b[])
Purpose: Append string b to the end of string a
Steps:
Find end of string a


Start copying characters of b behind it


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

(Not used in palindrome logic, but added because assignment requires it)

🟦 MAIN PROGRAM EXPLANATION

1️⃣ Input from user
scanf("%s", str);

User enters a single word like "level".

2️⃣ Find the length of the string
len = stringLength(str);

If input = "level", length = 5

3️⃣ Create a reverse string
We reverse the string manually:
for (i = 0; i < len; i++) {
    rev[i] = str[len - i - 1];
}
rev[i] = '\0';

Example:
str = L E V E L
 index = 0 1 2 3 4
Reverse logic:
i
rev[i] = str[len-i-1]
char
0
str[4]
L
1
str[3]
E
2
str[2]
V
3
str[1]
E
4
str[0]
L

rev = "LEVEL"

4️⃣ Compare original string with reversed string
if (stringCompare(str, rev) == 0)

If both match → palindrome


Else → not palindrome



5️⃣ Output
printf("It is a palindrome.\n");

or
printf("Not a palindrome.\n");



