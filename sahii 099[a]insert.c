//program to insert an element in the array of N elements

 #include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int i, n, pos, value;

    // Input the number of elements in the array
    printf("Enter number of elements (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position where the element should be inserted
    printf("Enter the position where you want to insert the element (1 to %d): ", n + 1);
    scanf("%d", &pos);

    // Input the element to be inserted
    printf("Enter the element to be inserted: ");
    scanf("%d", &value);

    // Shift elements to the right from pos to n
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element at the specified position
    arr[pos - 1] = value;

    // Increment the number of elements
    n++;

    // Print the updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
