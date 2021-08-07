void quickSort(int[], int, int);
int  Quick(int[], int, int);
void swap(int*, int*);

int main()
{
    int n,i,a[100];

    printf("Enter the Number : ");
    scanf("%d",&n);

    printf("Enter the  Elements number : \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    quickSort(a,0,n-1);

    printf("After the QuickSort\n");

    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");

    return 0;
}

void quickSort(int a[], int start, int end)
{
    if(start < end)
    {
        int k = Quick(a, start, end);
        quickSort(a, start, k-1);
        quickSort(a, k+1, end);
    }
}

int Quick(int arr[], int start, int end)
{
    int Index = start;
    int pivot = arr[end];
    int i;
    for(i = start; i < end; i++)
    {
        if(arr[i] < pivot)
        {
            swap(&arr[i], &arr[Index]);
            Index++;
        }
    }
    swap(&arr[end], &arr[Index]);
    return Index;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
