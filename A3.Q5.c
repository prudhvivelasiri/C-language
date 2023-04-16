#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

Int main() {
    Char str[MAX_SIZE];
    Int freq[MAX_SIZE];
    Int I, j, max, len;

    Printf(“Enter a string: “);
    Gets(str);

    Len = strlen(str);

    For(I = 0; I < len; i++) {
        Freq[i] = 1;
        For(j = I + 1; j < len; j++) {
            If(str[i] == str[j]) {
                Freq[i]++;
                Str[j] = ‘0’;
            }
        }
    }

    Max = freq[0];
    For(I = 0; I < len; i++) {
        If(max < freq[i]) {
            Max = freq[i];
        }
    }

    Printf(“Max repeated character in the string = “);
    For(I = 0; I < len; i++) {
        If(freq[i] == max && str[i] != ‘ ‘ && str[i] != ‘0’) {
            Printf(“%c “, str[i]);
            Printf(“It occurs %d times.”, max);
        }
    }

    Return 0;
}

