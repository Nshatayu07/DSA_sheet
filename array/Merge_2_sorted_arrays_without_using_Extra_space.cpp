#include <bits/stdc++.h>
using namespace std;

// Merge ar1[] and ar2[] with O(1) extra space
void merge(int ar1[], int ar2[], int n, int m)
{
	for(int i=0;i<n;i++){
        if(ar1[i]>ar2[0]){
            swap(ar1[i], ar2[0]);
            for(int j=1;j<m;j++){
                if(ar2[j]<ar[j-1]){
                    swap(ar2[j], ar2[j-1]);
                }
            }
        }
    }
}

// Driver code
int main()
{
	int ar1[] = { 1, 5, 9, 10, 15, 20 };
	int ar2[] = { 2, 3, 8, 13 };
	int m = sizeof(ar1) / sizeof(ar1[0]);
	int n = sizeof(ar2) / sizeof(ar2[0]);
	merge(ar1, ar2, m, n);

	cout << "After Merging \nFirst Array: ";
	for (int i = 0; i < m; i++)
		cout << ar1[i] << " ";
	cout << "\nSecond Array: ";
	for (int i = 0; i < n; i++)
		cout << ar2[i] << " ";
	return 0;
}
