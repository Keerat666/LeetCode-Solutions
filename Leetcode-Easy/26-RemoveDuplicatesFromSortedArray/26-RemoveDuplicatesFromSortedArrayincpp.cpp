#include<iostream>
using namespace std;
/* Removes duplicate components
The above function will return the prototype model size
Display.*/
int removeDuplicates(int array[], int p)
{
          // Return, if array is empty
          // or contains a single element
          if (p==0 || p==1)
                   return p;
          int temp[p];
          // Start traversing elements
          int k = 0;
          for (int i=0; i<p-1; i++)
                   // If current element is not equal to next element then store that current element
                   if (array[i] != array[i+1])
                             temp[k++] = array[i];
          // Store the last element as whether it is unique or repeated, it hasn't stored previously
          temp[k++] = array[p-1];
          // Modify original array
          for (int i=0; i<k; i++)
                   array[i] = temp[i];
          return k;
}
int main()
{
          int array[] = {1, 2, 2, 3, 4, 4, 4, 5, 5, 6, 7, 7, 8, 8, 8, 9, 9 ,10, 11};
          int p = sizeof(array) / sizeof(array[0]);
          p = removeDuplicates(array, p);
          // Print updated array
          for (int i=0; i<p; i++)
          cout << array[i] << " ";
          return 0;
}
