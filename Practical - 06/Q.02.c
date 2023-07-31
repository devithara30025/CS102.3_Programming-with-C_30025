#include <stdio.h>

void arrayvalues(int size, float arr[]) {
    for (int i = 0; i < size; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%f", &arr[i]);
    }
}

float scalarsum(int size, float arr[]) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

void vectorsum(int size, float arr1[], float arr2[], float result[]) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}

int main() {
    int size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Size should be a positive integer.\n");
        return 1;
    }

    float array1[size], array2[size], vectorsumresult[size];

    printf("\nEnter values for the first array:\n");
    arrayvalues(size, array1);

    printf("\nEnter values for the second array:\n");
    arrayvalues(size, array2);


    float scalarsumresult = scalarsum(size, array1);
    printf("\nScalar Sum (Sum of elements in the first array): %.2f\n", scalarsumresult);


    vectorsum(size, array1, array2, vectorsumresult);
    printf("\nVector Sum (Sum of corresponding elements from both arrays):\n");
    for (int i = 0; i < size; i++) {
        printf("%.2f ", vectorsumresult[i]);
    }
    printf("\n");

    return 0;
}
