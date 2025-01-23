#include <stdio.h>

// Function to sort the array in ascending order
void sortAscending(int arr[], int length) {
    int temp;
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to sort the array in descending order
void sortDescending(int arr[], int length) {
    int temp;
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n, length;

    printf("Welcome to Array Sort Program\n");
    printf("How many numbers do you want to input? : ");
    scanf("%d", &length);

    // Ensure valid length input
    if (length <= 0 || length > 100) {
        printf("Invalid input! Please enter a number between 1 and 100.\n");
        return 1;
    }

    int A[100]; // Array to store user input

    // Taking user input for the array
    for (int i = 0; i < length; i++) {
        printf("Enter value for index %d: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nWhat do you want?\n\n");
    printf("1. Sort from Max to Min\n");
    printf("2. Sort from Min to Max\n");
    printf("Enter your choice: ");
    scanf("%d", &n);

    switch (n) {
        case 1:
            sortDescending(A, length);
            printf("\nArray sorted from Max to Min:\n");
            break;
        case 2:
            sortAscending(A, length);
            printf("\nArray sorted from Min to Max:\n");
            break;
        default:
            printf("\nInvalid choice! Please restart the program and enter 1 or 2.\n");
            return 1;
    }

    // Displaying the sorted array
    for (int i = 0; i < length; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
