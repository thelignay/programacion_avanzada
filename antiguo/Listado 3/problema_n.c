#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int nums[n];
        bool diffs[3001] = {false};
        bool is_jolly = true;

        for (int i = 0; i < n; i++) {
            scanf("%d", &nums[i]);
        }

        //jolly
        if (n > 1) {
            for (int i = 0; i < n - 1; i++) {
                //diferencia
                int diff = abs(nums[i] - nums[i + 1]);
                if (diff >= 1 && diff < n && !diffs[diff]) {
                    diffs[diff] = true;
                } else {
                    is_jolly = false;
                }
            }
            for (int i = 1; i < n; i++) {
                if (!diffs[i]) {
                    is_jolly = false;
                    break;
                }
            }
        }

        if (is_jolly) {
            printf("Jolly\n");
        } else {
            printf("Not jolly\n");
        }
    }

    return 0;
}