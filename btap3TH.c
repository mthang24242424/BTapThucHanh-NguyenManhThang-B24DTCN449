#include <stdio.h>

int main() {
    int n, a[100], i, j, min, t, step = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) if (a[j] < a[min]) min = j;
        if (min != i) { t = a[i]; a[i] = a[min]; a[min] = t; }

        printf("Buoc %d: ", step++);
        for (j = 0; j < n; j++) printf("%d ", a[j]);
        printf("\n");
    }

    return 0;
}
