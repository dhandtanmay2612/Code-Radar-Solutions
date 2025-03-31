#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &k);
    
    int missingCount = 0, current = 1, index = 0;

    while (missingCount < k) {
        if (index < n && arr[index] == current) {
            index++;
        } else {
            missingCount++;
        }
        current++;
    }

    printf("%d\n", current - 1);
    return 0;
}