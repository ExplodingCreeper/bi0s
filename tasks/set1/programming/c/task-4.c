#include <stdio.h>

int main() {
    int t, x, y, n;
    scanf("%d", &t);
    while (t--){
        scanf("%d %d", &x, &y);
        scanf("%d", &n);
        int output;
        if (n%3==0) {
            output=x;
        }
        else if (n%3==1) {
            output=y;
        }
        else {
            output=x^y;
        }
        printf("%d\n", output);
    }
    return 0;
}