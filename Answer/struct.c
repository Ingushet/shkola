#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[20];
    int score;
};

double mean(struct Student *students, int n) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += students[i].score;
    }
    return sum / n;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("n/a");

    } else {
        struct Student *students = malloc(sizeof(struct Student) * n);
        for (int i = 0; i < n; i++) {
            scanf("%s", students[i].name);
            scanf("%d", &students[i].score);
        }
        double mean_v = mean(students, n);
        int j = 0;
        for (int i = 0; i < n; ++i) {
            if (students[i].score >= mean_v) {
                if (j != 0) {
                    printf(", ");
                }
                printf("%s", students[i].name);
                ++j;
            }
        }
        if (j == 0) {
            printf("No matches");
        }

        free(students);
    }
    return 0;
}
