#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void makeArray(int [] , int);
void printArray(int [] , int);
void selectionSort(int [], int );

int main()
{
    const int N= 10;
    int array[N];

    srand(time(0));
    makeArray(array, N);
    cout << " Initial Array : " ;
    printArray(array, N);

    selectionSort(array, N);
    cout << " Sorted Array : " ;
    printArray(array, N);
    

}

void makeArray(int array[], int N)
{
    for(int i=0; i<N; i++)
        array[i] = rand() % 100 + 1;
}
void printArray(int array[], int N)
{
    for(int i=0; i<N; i++)
        cout << array[i]  << "  " ; 
    cout << endl;
}

void selectionSort(int array[], int N)
{
	int min_index;
	for(int i=0; i < N-1; i++)
	{
    min_index = i;
		for(int j=i+1; j<N; j++){
			if (array[j] < array[min_index])
      min_index = j;
		}
    swap(array[min_index], array[i]);
	}
}
