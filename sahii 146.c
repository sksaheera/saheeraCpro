//program to insert new elemnets in the array at the given position

#include <stdio.h>

#define MAX_SIZE 100

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int size, pos, value;


    printf("Enter number of elements in array: ");
    scanf("%d", &size);


    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position (0 to %d) where you want to insert: ", size);
    scanf("%d", &pos);

    if (pos < 0 || pos > size) {
        printf("Invalid position! Please enter a valid position.\n");
        return 1;

        }

    printf("Enter the value to insert: ");
    scanf("%d", &value);


    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;

    size++;

    printf("Array after insertion:\n");
    displayArray(arr, size);


}
