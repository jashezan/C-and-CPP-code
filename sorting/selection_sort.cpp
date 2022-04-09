#include <iostream>
using namespace std;

/**
 * @brief
 * It will print array
 *
 * @param a - pointer of array
 * @param n - size of array
 */
void print(int *a, int n)
{
  cout << "[ ";
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << "\t";
  }
  cout << "]\n\n\n";
}

/**
 * @brief
 * SELECTION_SORT will indentify the min number in array and will push that at left position (increasing order)
 * 1 --> loop from o to n
 * 2 --> set first index-(0) as MINIMUM_NUMBER_INDEX
 * 3 --> another loop to compare this minimum number with right side element
 * 4 --> if found any minimum number then set that element's index as MINIMUM_NUMBER_INDEX
 * 5 --> SWAP array[i] with array[MINIMUM_NUMBER_INDEX]
 * 6 --> increase the value of i to compare next element
 *
 * @param array - pointer of array
 * @param ARRAY_SIZE - size of array
 */

void insertion(int *array, int ARRAY_SIZE)
{
  // loop from o to n
  for (int i = 0; i < ARRAY_SIZE; i++)
  {
    // set first index-(0) as MINIMUM_NUMBER_INDEX
    int MINIMUM_NUMBER_INDEX = i;

    // another loop to compare this minimum number with right side element
    for (int j = i + 1; j < ARRAY_SIZE; j++)
    {
      // if found any minimum number then set that element's index as MINIMUM_NUMBER_INDEX
      if (array[MINIMUM_NUMBER_INDEX] > array[j])
      {
        MINIMUM_NUMBER_INDEX = j;
      }
    }

    // SWAP array[i] with array[MINIMUM_NUMBER_INDEX]
    int temp = array[i];
    array[i] = array[MINIMUM_NUMBER_INDEX];
    array[MINIMUM_NUMBER_INDEX] = temp;
  }
}

int main()
{
  int a[] = {5, 9, 8, 54, 0, 10};
  int n = sizeof(a) / sizeof(int);
  cout << "Before Sorting:\n";
  print(a, n);
  cout << "-----------------\n\n\n";
  insertion(a, n);
  cout << "\n\n\n-----------------";
  cout << "After Sorting:\n";
  print(a, n);

  return 0;
}
