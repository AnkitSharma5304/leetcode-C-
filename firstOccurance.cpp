#include <iostream>
using namespace std;

int firstoccurance(int arr[], int n, int key)
{
    int start = 0;

    int end = n - 1;
     int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
          end=mid-1;//end mid -1 hoga taki first occuraNCE Check kr ske 
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}
int main(int argc, char const *argv[])
{
    int even[] = {1, 2, 2, 2, 3, 4, 5, 6};
    int key, index1;
    cout << "enter key" << endl;
    cin >> key;

    index1 = firstoccurance(even, 8, key);
    cout << "your first occurance is at index: " << index1 << endl;

    return 0;
}
