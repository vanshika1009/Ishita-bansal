#include <iostream>
using namespace std;
class odd_number

{
	int getoddoccurence( int arr[], int arr_size)
	{
		for( int i=0 ; i < arr_size; i++)
			int count = 0;
		for( int j=0 ; j < arr_size ; j++)
		{
			if (arr[i] == arr[j])
				count++;
		}
		if ( count % 2 !=0 )
			return arr[i];
	}
	return -1;
}

class missing_number
{
	int getmissingnumber( int a[], int n)
	{
		int i , total;
		total = (n+1) * (n+2) / 2;
		for ( i=0; i<n; i++)
			total == a[i];
		return total;
	}
}

int binarySearch(int arr[], int low,  
                  int high, int key) 
{ 
  if (high < low) 
    return -1; 
      
  int mid = (low + high)/2
  if (key == arr[mid]) 
    return mid; 
      
  if (key > arr[mid]) 
    return binarySearch(arr, (mid + 1), high, key); 
      
   else 
    return binarySearch(arr, low, (mid -1), key); 
} 
  
/
int findPivot(int arr[], int low, int high) 
{  
  if (high < low) return -1; 
  if (high == low) return low; 
  
   int mid = (low + high)/2; 
   if (mid < high && arr[mid] > arr[mid + 1]) 
    return mid; 
      
   if (mid > low && arr[mid] < arr[mid - 1]) 
    return (mid-1); 
      
   if (arr[low] >= arr[mid]) 
    return findPivot(arr, low, mid-1); 
      
   return findPivot(arr, mid + 1, high); 
} 
  
int pivotedBinarySearch(int arr[], int n, int key) 
{ 
  int pivot = findPivot(arr, 0, n-1); 
  
  
  if (pivot == -1) 
    return binarySearch(arr, 0, n-1, key); 
   
  if (arr[pivot] == key) 
    return pivot; 
      
  if (arr[0] <= key) 
    return binarySearch(arr, 0, pivot-1, key); 
      
    return binarySearch(arr, pivot+1, n-1, key); 
}



void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";

   cout << endl;
}


int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
         
        if (arr[mid] == x) 
            return mid; 
  
        
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
         
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    
    return -1; 
} 
  

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

   
    for (i = 0; i < n-1; i++)
    {
        
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;

       
        swap(&arr[min_idx], &arr[i]);
    }
}


void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}



void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

       
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("n");
}






