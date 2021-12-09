void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void sortArray(int *arr, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int sumOfArray(int *arr, int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int power(int x, int y)
{
    int i, p = 1;
    for (i = 1; i <= y; i++)
    {
        p *= x;
    }
    return p;
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

void reverse(char *str)
{
    int i, j, len = strlen(str);
    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        swap(&str[i], &str[j]);
    }
}

void printArray(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}



int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, n);
    printf("Sorted array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Factorial of 5 is %d\n", factorial(5));
    printf("Sum of array is %d\n", sumOfArray(arr, n));
    return 0;
}