#include <stdio.h>
int max(int a, int b) {
    return a > b ? a : b;
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int leaves[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &leaves[i]);
        }
        int dynamic[n];
        dynamic[0] = leaves[0];
        int max_magic = dynamic[0];
        for (int i = 1; i < n; i++) {
            if (leaves[i] == 0) {
                dynamic[i] = 0;
            } else {
                dynamic[i] = leaves[i];
                if (leaves[i-1] > 0) {
                    dynamic[i] += dynamic[i-1];
                }
            }
            max_magic = max(max_magic, dynamic[i]);
        }
        printf("%d\n", max_magic);
    }
    return 0;
}
