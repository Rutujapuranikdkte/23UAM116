#include<stdio.h>

struct job {
    int id;
    int profit;
    int resources;
    int ratio; // profit per resource (approx, as int)
};
struct job j[50];
int main() {
    
    int size, i, k, total_resources, total_profit = 0;

    printf("Enter number of jobs: ");
    scanf("%d", &size);

    for (i = 0; i < size; i++) {
        printf("\nJob %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &j[i].id);
        printf("Profit: ");
        scanf("%d", &j[i].profit);
        printf("Resources required: ");
        scanf("%d", &j[i].resources);
        j[i].ratio = j[i].profit / j[i].resources; // integer ratio
    }

    printf("Enter total available resources: ");
    scanf("%d", &total_resources);

    // Sort by ratio (profit/resource) in descending order
    for (i = 0; i < size - 1; i++) {
        for (k = 0; k < size - i - 1; k++) {
            if (j[k].ratio < j[k + 1].ratio) {
                struct job temp = j[k];
                j[k] = j[k + 1];
                j[k + 1] = temp;
            }
        }
    }

    printf("\nJobs sorted by profit/resource ratio (highest first):\n");
    for (i = 0; i < size; i++) {
    printf("Job ID: %d, Profit: %d, Resources: %d, Ratio: %d\n", j[i].id, j[i].profit, j[i].resources, j[i].ratio);
    }

    printf("\nSelected Jobs:\n");
    for (i = 0; i < size; i++) {
        if (j[i].resources <= total_resources) {
            total_profit += j[i].profit;
            total_resources -= j[i].resources;
            printf("Job ID: %d (Profit: %d, Resources: %d)\n", j[i].id, j[i].profit, j[i].resources);
        }
    }

    printf("\nTotal Profit: %d\n", total_profit);

    return 0;
}

