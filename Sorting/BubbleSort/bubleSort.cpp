// LOGIC: repeatedly swap two adjacent elements if they are in wrong order (Left->Right)
//"BUBBLE sort": At each iteration, maximum element (of unsorted part) comes out like a bubble and settle down at appropriare position (end)

int* bubbleSort(int[] arr, int n)
{
    int temp;
    //outer loop for n-1 iterations
    for (int i = 1; i < n; i++) //i=1 so that inner loop can run n-i-1 times i.e don't access last element which is already swapped by arr[j+1] in if condition
    {
        for (int j = 0; j < n - i; j++) //n-i iterations as i elements from end have been sorted
        {
            if (arr[j] > arr[j + 1])
            {
                //swap 
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    {
        for (int j = 0; j < n - i; j++) //n-i iterations as i elements from end have been sorted
        {
            if (arr[j] > arr[j + 1])
            {
                //swap 
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    {
        for (int j = 0; j < n-i; j++) //n-i iterations as i elements from end have been sorted
        {
            if(arr[j]>arr[j+1])
            {
                //swap 
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    

}