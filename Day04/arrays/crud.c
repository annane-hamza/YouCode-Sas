#include <stdio.h>

// Function to read array elements
void readarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("added\n");
}

// Function to print array elements
void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

// Function to update an element at a given index
void update(int arr[], int size, int index, int val)
{
    if (index < 0 || index >= size)
    {
        printf("invalid index\n");
        return;
    }

    arr[index] = val;
    printf("update: \n");
    printarr(arr, size);
}

// Function to delete an element at a given position
int delete(int arr[], int size, int pos)
{
    if (pos < 0 || pos >= size)
    {
        printf("invalid position\n");
        return size;
    }

    for (int i = pos; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    return size - 1; 
}

int main()
{
    int size = 7;
    int arr[size];

    // Read array
    readarr(arr, size);

    // Print original array
    printf("original array: ");
    printarr(arr, size);

    // Update array
    update(arr, size, 4, 34);

    // Delete element
    printf("deleted: ");
    size = delete(arr, size, 3);
    printarr(arr, size);

    return 0;
}
