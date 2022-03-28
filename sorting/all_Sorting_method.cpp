#include <iostream>
#include <ctime>
#include <cstdlib>

#define ARRAY_ELEMENT 6

using namespace std;

void fillArray(int a[], int min, int max)
{
  srand(time(0));
  for (int i = 0; i < ARRAY_ELEMENT; i++)
  {
    a[i] = (min + rand() % (max - min));
    // cout << (min + rand() % (max - min)) << endl;
  }
}

void showArray(int a[])
{
  cout << "[";
  for (int i = 0; i < ARRAY_ELEMENT; i++)
  {
    cout << "\t" << a[i];
  }
  cout << "\t]\n\n";
}

void bubble_sort(int a[], int length)
{
  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < (length - i - 1); j++)
    {
      if (a[j] > a[j + 1])
      {
        swap(a[j], a[j + 1]);
      }
    }
  }
}

void selection_sort(int a[], int count)
{
  for (int i = 0; i < count; i++)
  {
    int minIndex = i;
    for (int j = i; j < count; j++)
    {
      if (a[minIndex] > a[j])
      {
        minIndex = j;
      }
    }
    swap(a[minIndex], a[i]);
  }
}

void insertion_sort(int a[], int count)
{
  for (int i = 1; i < count; i++)
  {
    int key = a[i];
    int j = i - 1;
    while (j >= 0 && a[j] > key)
    {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = key;
  }
}

void merge(int a[], int si, int ei)
{
  int mid = si + (ei - si) / 2;

  int n1 = mid + 1 - si;
  int n2 = ei - mid;

  int i, j, k;

  int left[n1], right[n2];

  for (i = 0; i < n1; i++)
    left[i] = a[si + i];
  for (j = 0; j < n2; j++)
    right[j] = a[mid + 1 + j];

  i = 0;
  j = 0;
  k = si;

  while (i < n1 && j < n2)
  {
    if (left[i] <= right[j])
    {
      a[k] = left[i];
      i++;
    }
    else
    {
      a[k] = right[j];
      j++;
    }
    k++;
  }

  while (i < n1)
  {
    a[k] = left[i];
    i++;
    k++;
  }

  while (j < n2)
  {
    a[k] = right[j];
    j++;
    k++;
  }
}

void mergeSort(int a[], int si, int ei)
{
  if (si < ei)
  {
    int mid = si + (ei - si) / 2;
    mergeSort(a, si, mid);
    mergeSort(a, mid + 1, ei);
    merge(a, si, ei);
  }
}

int partition(int a[], int si, int ei)
{
  int pivot = a[ei];
  int partitionIndex = si;
  for (int i = si; i < ei; i++)
  {
    if (a[i] < pivot)
    {
      swap(a[i], a[partitionIndex]);
      partitionIndex++;
    }
  }
  swap(a[partitionIndex], a[ei]);
  return partitionIndex;
}

void quickSort(int a[], int si, int ei)
{
  if (si < ei)
  {
    int pidx = partition(a, si, ei);
    quickSort(a, si, pidx - 1);
    quickSort(a, pidx + 1, ei);
  }
}

int main()
{
  int a[ARRAY_ELEMENT];

  // Bubble Sort
  fillArray(a, 1, 10);
  cout<< "Before Bubble Sorting : \n";
  showArray(a);

  bubble_sort(a,ARRAY_ELEMENT);
  cout << "After Bubble Sorting : \n";
  showArray(a);

  // Selection Sort
  fillArray(a, 10, 100);
  cout << "\n\n\nBefore Selection Sorting : \n";
  showArray(a);

  selection_sort(a, ARRAY_ELEMENT);
  cout << "After Selection Sorting : \n";
  showArray(a);

  // Insertion Sort
  fillArray(a, 100, 1000);
  cout << "\n\n\nBefore Insertion Sorting : \n";
  showArray(a);

  insertion_sort(a, ARRAY_ELEMENT);
  cout << "After Insertion Sorting : \n";
  showArray(a);

  // Merge Sort
  fillArray(a, 1000, 10000);
  cout << "\n\n\nBefore Merge Sorting : \n";
  showArray(a);

  mergeSort(a, 0, ARRAY_ELEMENT - 1);
  cout << "After Merge Sorting : \n";
  showArray(a);

  // Quick Sort
  fillArray(a, 10000, 100000);
  cout << "\n\n\nBefore Quick Sorting : \n";
  showArray(a);

  quickSort(a, 0, ARRAY_ELEMENT - 1);
  cout << "After Quick Sorting : \n";
  showArray(a);

  return 0;
}
