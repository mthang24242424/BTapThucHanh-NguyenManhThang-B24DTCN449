#include <stdio.h>

struct number { int val, fre; };

int check(int n) {
    while (n >= 10) if (n % 10 < (n / 10) % 10) return 0, n /= 10;
    return 1;
}

int find(struct number a[], int n, int x) {
    int i = 0;
    while (i < n) {
        if (a[i].val == x) return i;
        i++;
    }
    return -1;
}

int main() {
    struct number a[100001];
    int n = 0, x;

    while (scanf("%d", &x) != EOF)
        if (check(x)) {
            int idx = find(a, n, x);
            if (idx != -1) a[idx].fre++;
            else { a[n].val = x; a[n].fre = 1; n++; }
        }

    int i = 0;
    while (i < n) printf("%d %d\n", a[i++].val, a[i].fre);

    return 0;
}
