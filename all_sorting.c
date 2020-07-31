
#include <stdio.h>


void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int mx(int a[], int n)
{
    int m=a[0];
    for(int i=0;i<n;i++)
    {
            if(a[i]>m)
        {
            m=a[i];
        }
    }
    return m;
}


void show(int a[], int n)
{
        for(int i =0;i<n;i++)
    {

        printf("%d ",a[i]);
    }
}
void insertionsort(int a[],  int n)
{   int temp;
    for (int i=1;i<n; i++)
    {
        temp= a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp )
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("\n INSERTION SORTED ARRAY:");
    show(a,n);

}

void bubblesort(int a[],  int n)
{   int temp;
    for (int i=0;i<n; i++)
    {
        for(int j=i+1; j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n BUBBLE SORTED ARRAY:");
    show(a,n);

}
void selectionsort(int a[],  int n)
{   int temp;
    int index;

    for (int i=0;i<n; i++)
    {     index=i;
           for(int j=i+1;j<n;j++)
           {
                if(a[j]<a[index])
                {
                    index=j;
                }
            }
            temp=a[index];
            a[index]=a[i];
            a[i]=temp;
    }
    printf("\n SELECTION SORTED ARRAY:");
    show(a,n);

}

int partition(int a[], int low , int high)
{
    int i=low-1;
    for(int j=low;j<high;j++)
    {
        if(a[j]<a[high])
        {   i++;
            swap(&a[j],&a[i]);
        }
    }
    swap(&a[i+1],&a[high]);
    return(i+1);
}
void quicksort(int a[],int low, int high)
{
    if(low<high)
    {
            int pivot=partition(a,low,high);

            quicksort(a,low,pivot-1);
            quicksort(a,pivot+1,high);


    }

 }

 void countingsort(int a[],int n, int exp)
 {


     int output[n];
     int count[10]={0};

     for(int i=0;i<n;i++)
     {
         count[(a[i]/exp)%10]++;
     }
     for(int i=1;i<10;i++)
     {
         count[i]+=count[i-1];
    }


    for(int i=n-1; i>=0;i--)
    {
        output[count[(a[i]/exp)%10] -1]=a[i];
        count[(a[i]/exp)%10]--;
    }
    for (int i=0;i<n;i++)
    {
        a[i]=output[i];
    }
    show(a,n);

 }
 void radixsort(int a[], int n)
 {

     int m=mx(a,n);

     for(int exp=1; m/exp>0;exp*=10)
     {
         countingsort(a,n,exp);
     }
 }

 void merge(int a[], int l, int m , int r)
 {

    int i, j, k;
int n1=m-l+1;
int n2=r-m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (j = 0; j < n2; j++)
        R[j] = a[m + 1+ j];

    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
 }


 void mergesort(int a[],int l,int r)
 {
     if(l<r)
     {


     int m = l+(r-l)/2;
     mergesort(a,l,m);
     mergesort(a,m+1,r);
     merge(a,l,m,r);
     }

 }

 int shellSort(int arr[], int n)
{
    for (int gap = n/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
        {
            int temp = arr[i];

            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];

            arr[j] = temp;
        }
    }
    return 0;
}

void bucketSort(int array[], int size)
{
  // The size of bucket must be at least the (max+1) but
  // we cannot assign declare it as int bucket(max+1) in C as
  // it does not support dynamic memory allocation.
  // So, its size is provided statically.
  int bucket[10];
  const int max = mx(array, size);
  for (int i = 0; i <= max; i++)
  {
    bucket[i] = 0;
  }
  for (int i = 0; i < size; i++)
  {
    bucket[array[i]]++;
  }
  for (int i = 0, j = 0; i <= max; i++)
  {
    while (bucket[i] > 0)
    {
      array[j++] = i;
      bucket[i]--;
    }
  }
}

void heapify(int arr[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int l = 2*i + 1; // left = 2*i + 1
    int r = 2*i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i=n-1; i>=0; i--)
    {
         swap(&arr[0], &arr[i]);

        heapify(arr, i, 0);
    }
}

int main(void)
{

int a[] = {1,5,3,6,78,4,69,0,2,55,8,92};

	int n = sizeof(a)/sizeof(a[0]);
 printf(" BEFORE SORTING THE ARRAY IS:");
 for(int i=0;i<n;i++)
 {

     printf(" %d",a[i]);

 }

	 insertionsort(a,n);

	bubblesort(a,n);

	selectionsort(a,n);

    quicksort(a,0,n-1);
    printf("\nQuick sorted array :");
    show(a,n);


    radixsort(a,n);
     printf("\nradix sorted array:");

show(a,n);

  mergesort(a,0,n-1);

     printf("\nmerge sorted array :");

     show(a,n);



    shellSort(a,n);
     printf("\nshell sorted array :");

show(a,n);

heapSort(a,n);
     printf("\nheap sorted array :");

show(a,n);

     bucketSort(a,n);
     printf("\nbucket sorted array :");

show(a,n);



	return 0;
}
/*
OUTPUT:

 BEFORE SORTING THE ARRAY IS: 1 5 3 6 78 4 69 0 2 55 8 92
 INSERTION SORTED ARRAY:0 1 2 3 4 5 6 8 55 69 78 92
 BUBBLE SORTED ARRAY:0 1 2 3 4 5 6 8 55 69 78 92
 SELECTION SORTED ARRAY:0 1 2 3 4 5 6 8 55 69 78 92
Quick sorted array :0 1 2 3 4 5 6 8 55 69 78 92 0 1 2 92 3 4 5 55 6 8 78 69 0 1 2 3 4 5 6 8 55 69 78 92
radix sorted array:0 1 2 3 4 5 6 8 55 69 78 92
merge sorted array :0 1 2 3 4 5 6 8 55 69 78 92
shell sorted array :0 1 2 3 4 5 6 8 55 69 78 92
bucket sorted array :0 1 2 3 4 5 6 8 55 69 78 92
Process returned -1073741819 (0xC0000005)   execution time : 9.834 s
Press any key to continue.


*/
