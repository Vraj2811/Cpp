#include <iostream>

void sortZeroesAndOne(int arr[], int size)
{
    int i = 0;
    int j = size - 1;

    while (i <= j)
    {
        if (arr[i] == 1 && arr[j] == 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        else if (arr[i] == 0 && arr[j] == 1)
        {
            i++;
            j--;
        }
        else if (arr[i] == 0)
        {
            i++;
        }
        else if (arr[j] == 1)
        {
            j--;
        }
    }
}

int main()
{
    int arr[7] = {1, 0, 1, 0, 1, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortZeroesAndOne(arr, size);

    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
