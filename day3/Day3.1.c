#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 20000
#define ll long long

int getNumber(char s[]) {
    int res = 0;

}

int main(void) {
    ll res = 0;

    char* s = (char*)calloc(SIZE, sizeof(char));
    if(s == NULL) return 0;

    int n = 0; 
    for(int i = 0; s[i] != '\0'; i++, n++) {
        scanf("%c", s[i]);
    }
    
    char* tmp = (char*)realloc(s, (n + 6) * sizeof(char));
    if(tmp == NULL) return 0;

    s = tmp;

    for(int i = 0; i < n; i++) {
        if(s[i] == 'm') {
            if(s[i + 1] == 'u' && s[i + 2] == 'l' && s[i + 3] == '(') {
                i += 4;
                int tmp = isOutOfBound(&s);
                if(isOutOfBOund(&s)) {
                    res += getDigs(s);
                    i += tmp;
                    if(s[i + 1] == ',' && isOutOfBound(&s)) {
                        
                    }
                }
            }
        } 
    }

    return 0;
}