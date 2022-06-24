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


int main()
{
  int a[ARRAY_ELEMENT];

  // Merge Sort
  fillArray(a, 1000, 10000);
  cout << "\n\n\nBefore Merge Sorting : \n";
  showArray(a);

  mergeSort(a, 0, ARRAY_ELEMENT - 1);
  cout << "After Merge Sorting : \n";
  showArray(a);


  return 0;
}
