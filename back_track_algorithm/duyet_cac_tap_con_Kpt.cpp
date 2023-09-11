#include <iostream>
#include <cmath>

void Try(int arr[], int n, int k, int i)
{
    for (int j = arr[i - 1] + 1; j <= n; j++) // Sửa điều kiện của vòng lặp
    {
        arr[i - 1] = j;
        if (i == k)
        {
            for (int h = 0; h < k; h++)
            {
                std::cout << arr[h] << " ";
            }
            std::cout << "\n";
        }
        else
            Try(arr, n, k, i + 1);
    }
}

int main()
{
    int n, k;
    std::cin >> n >> k;
    int arr[k];
    for (int i = 0; i < k; i++)
    {
        arr[i] = i + 1;
    }
    Try(arr, n, k, 1); // Bắt đầu từ i = 1
}
