#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

double *makeNumbers(int N);
void printNumbers(double * const ptr, int N);
void sortNumbers(double * const ptr, int N);
void deleteNumbers(double * ptr);


int main()
{
	const 	int N=10;
	double 	*ptr=nullptr;

	ptr = makeNumbers(N);
	cout << "Initial Double Values \n";
	printNumbers(ptr, N);
	sortNumbers(ptr, N);
	cout << "Sorted Double Values \n";
	printNumbers(ptr, N);
	deleteNumbers(ptr);
}


double *makeNumbers(int N){

  double *ptr = new double[N];
  srand(time(0));

 for(int i=0; i<N; i++)
    *(ptr+i) = rand() % 100 + 1;

  return ptr;
 
}
void printNumbers(double * const ptr, int N){
for(int i=0; i<N; i++)
cout<<*(ptr+i)<<endl;
}

void sortNumbers(double * const ptr, int N){
	int min_index;
	for(int i=0; i < N-1; i++)
	{
    min_index = i;
		for(int j=i+1; j<N; j++){
			if (ptr[j] < ptr[min_index])
      min_index = j;
		}
    swap(ptr[min_index], ptr[i]);
	}
}

void deleteNumbers(double * ptr){
delete[] ptr;
}