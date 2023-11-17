// #include <iostream>
// #include <ctime>
// using namespace std;

// void merge(int arr[], int l, int m, int r)
// {
// 	int n1 = m - l + 1;
// 	int n2 = r - m;
// 	int L[n1];
// 	int R[n2];
// 	for (int i = 0; i < n1; i++)
// 		L[i] = arr[l + i];
// 	for (int j = 0; j < n2; j++)
// 		R[j] = arr[m + 1 + j];
// 	int i = 0, j = 0;
// 	int k = l;
// 	while (i < n1 && j < n2) 
//     {
// 		if (L[i] <= R[j]) 
//         {
// 			arr[k++] = L[i];
// 			i++;
// 		}
// 		else
//         {
// 			arr[k++] = R[j];
// 			j++;
// 		}
// 	}
// 	while (i < n1)
//     {
// 		arr[k] = L[i];
// 		i++;
// 		k++;
// 	}
// 	while (j < n2)
//     {
// 		arr[k] = R[j];
// 		j++;
// 		k++;
// 	}
// }

// void sort(int arr[], int l, int r)
// {
// 	if(l < r) 
//     {
// 		int p = l + (r - l) / 2;
// 		sort(arr, l, p);
// 		sort(arr, p + 1, r);
// 		merge(arr, l, p, r);
// 	}
// }

// void display(int ar[], int n)
// {
//     for (int i = 0; i < n; i++) 
//         cout<<ar[i]<<" ";
// }

// int main()
// {
//     int n;
//     clock_t t;
//     t = clock();
//     cout<<"********MERGE SORT********"<<endl;
//     cout<<"Timer stars"<<endl;
//     cout<<"Enter the number of n"<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     sort(arr,0,n-1);
//     display(arr,n);
//     t = clock() - t;
//     double time = ((double)t)/CLOCKS_PER_SEC;
//     cout<<"The program took "<<time<<" seconds to execute"<<endl;
// }