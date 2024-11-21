#include <stdio.h>

void sort(int *a, int n) {
    int i = 0, j, t;
    while (i < n - 1) {
        j = i + 1;
        while (j < n) {
            if (a[i] > a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
            j++;
        }
        i++;
    }
}

int main() {
    int n, a[100], even[100], odd[100], e = 0, o = 0, i = 0;
    scanf("%d", &n);
    while (i < n) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0) even[e++] = a[i];
        else odd[o++] = a[i];
        i++;
    }
    sort(even, e);
    sort(odd, o);
    i = 0;
    while (i < e) printf("%d ", even[i++]);
    i = 0;
    while (i < o) printf("%d ", odd[i++]);
    return 0;
}
