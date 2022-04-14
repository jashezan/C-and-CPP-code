#include <iostream>

#define QUEUE_MAX 5

/**
 * @brief 
 * 
 * @methods
 *  1. Enqueue()
 *  2. Dequeue()
 *  3. isEmpty()
 *  4. isFull()
 *  5. count()
 *  6. display()
 * 
 */

using namespace std;
class Queue
{
private:
  int front;
  int rear;
  int a[QUEUE_MAX];

public:
  Queue()
  {
    front = -1;
    rear = -1;
    for (int i = 0; i < QUEUE_MAX; i++)
    {
      a[i] = 0;
    }
  }
  bool isEmpty()
  {
    return (rear == -1 && front == -1);
  }

  bool isFull()
  {
    return (rear == QUEUE_MAX - 1);
  }

  void enqueue(int val)
  {
    if (isFull())
    {
      cout << "Queue is FULL";
      return;
    }
    else if (isEmpty())
    {
      rear = 0;
      front = 0;
      a[rear] = val;
    }
    else
    {
      rear++;
      a[rear] = val;
    }
  }

  int dequeue()
  {
    int x = 0;
    if (isEmpty())
    {
      cout << "Queue is EMPTY\n";
      return -2;
    }
    else if (rear == front)
    {
      x = a[front];
      a[front] = 0;
      rear = -1;
      front = -1;
    }
    else
    {
      x = a[front];
      a[front] = 0;
      front++;
    }
    return x;
  }

  int count(){
    return (rear-front+1);
  }

  void display(){
    cout << "|";
    for (int i = 0; i < QUEUE_MAX; i++)
    {
      cout << "  " << a[i] << "  |";
    }
    cout << "\n";
  }
};
int main()
{
  Queue q;
  int option,val;
  do
  {
    cout << "\n\nSelect Option number[0 is deafult value in QUEUE]\n";
    cout << "0. Exit\n";
    cout << "1. Enqueue()\n";
    cout << "2. Dequeue()\n";
    cout << "3. isEmpty()\n";
    cout << "4. isFull()\n";
    cout << "5. count()\n";
    cout << "6. display()\n";
    cout << "7. Clear Screen"
         << "\n\n";
    cin >> option;

    switch (option)
    {
    case 0:
      break;
    case 1:
      cout << "Enter value you want to put: ";
      cin >> val;
      q.enqueue(val);
      cout << "\n";
      break;
    case 2:
      cout << "Dequeued value : " << q.dequeue() << "\n";
      break;
    case 3:
      if (q.isEmpty())
      {
        cout << "Queue is EMPTY\n";
      }else{
        cout << "Queue is not EMPTY\n";
      }
      break;
    case 4:
            if (q.isFull())
      {
        cout << "Queue is FULL\n";
      }else{
        cout << "Queue is not FULL\n";
      }
      break;
    case 5:
      cout << "Queue count : " << q.count() << "\n";
      break;
    case 6:
      cout << "\nQueue: \n";
      q.display();
      break;
    case 7:
      system("CLS");
      break;
    default:
      cout << "Enter Given Option.\n";
    }
  } while (option != 0);
  return 0;
}
