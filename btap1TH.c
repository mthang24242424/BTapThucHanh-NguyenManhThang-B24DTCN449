#include <stdio.h>
#include <string.h>

#define MAX 30000

void find_most_frequent(int *arr, int n) {
    int freq[MAX + 1] = {0}, max_freq = 0;
    int i; // Khai báo `i` trý?c
    for (i = 0; i < n; i++) {
        freq[arr[i]]++;
        if (freq[arr[i]] > max_freq) max_freq = freq[arr[i]];
    }
    for (i = 0; i < n; i++) {
        if (freq[arr[i]] == max_freq) {
            printf("%d ", arr[i]);
            freq[arr[i]] = 0; // Ðánh d?u ð? tránh in trùng
        }
    }
    printf("\n");
}

int main() {
    int T, n, arr[100], i; // Khai báo `i` trý?c
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        for (i = 0; i < n; i++) scanf("%d", &arr[i]);
        find_most_frequent(arr, n);
    }
    return 0;
}

