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


int main()
{
  int a[ARRAY_ELEMENT];

  // Insertion Sort
  fillArray(a, 100, 1000);
  cout << "\n\n\nBefore Insertion Sorting : \n";
  showArray(a);

  insertion_sort(a, ARRAY_ELEMENT);
  cout << "After Insertion Sorting : \n";
  showArray(a);

  return 0;
}
