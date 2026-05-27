#include <stdio.h>

int main() {
    float amount, total = 0;
    int choice;
    char desc[100];
    
    do {
        printf("\n--- EXPENSE TRACKER (Simple) ---\n");
        printf("1. Add Expense\n");
        printf("2. View Total\n");
        printf("3. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("Description: ");
            scanf("%s", desc);
            printf("Amount: ");
            scanf("%f", &amount);
            total = total + amount;
            printf("Added: %s - $%.2f\n", desc, amount);
        }
        else if (choice == 2) {
            printf("Total Expenses: $%.2f\n", total);
        }
    } while (choice != 3);
    
    return 0;
}
