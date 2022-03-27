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

  return 0;
}
