#include <stddef.h>

enum membership { OPEN = 1, SENIOR = 2 };

void open_or_senior(size_t n, const int members[n][2], enum membership memberships[n]) {
    for (size_t i = 0; i < n; i++) {
        int age = members[i][0];
        int handicap = members[i][1];

        if (age >= 55 && handicap > 7) {
            memberships[i] = SENIOR;
        } else {
            memberships[i] = OPEN;
        }
    }
}