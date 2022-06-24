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

  // Quick Sort
  fillArray(a, 10000, 100000);
  cout << "\n\n\nBefore Quick Sorting : \n";
  showArray(a);

  quickSort(a, 0, ARRAY_ELEMENT - 1);
  cout << "After Quick Sorting : \n";
  showArray(a);

  return 0;
}
