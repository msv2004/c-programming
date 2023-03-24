 #include <stdio.h>

int* findMinMax(int values[], int length);

int main() {
    int values[5];
    int i;

    printf("Enter 5 values:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &values[i]);
    }

    int* minMax = findMinMax(values, 5);

    printf("Minimum value: %d\n", minMax[0]);
    printf("Maximum value: %d\n", minMax[1]);

    return 0;
}

int* findMinMax(int values[], int length) {
    static int result[2];

    result[0] = values[0];
    result[1] = values[0];

    int i;
    for (i = 1; i < length; i++) {
        if (values[i] < result[0]) {
            result[0] = values[i];
        }
        if (values[i] > result[1]) {
            result[1] = values[i];
        }
    }

    return result;
}

//output:

Enter 5 values:
25 11 35 65 20
Minimum value: 11
Maximum value: 65
