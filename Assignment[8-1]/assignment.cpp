#include <iostream>
#include <algorithm>

using namespace std;

int binarySearch(int[], int, int);

int main(){
    const int N = 10;
    int array[N] = {10,25,30,35,40,45,55,60,65,70};
    int target = 30;
    int index;

    index = binarySearch(array, N, target);

    if( index == -1)
     cout<<"The target was not found.."<<endl;
     else
     cout<<"The number "<<target<<" was found in the array (Index: "<<index<<")"<<endl;

    return 0;

}

int binarySearch(int array[], int N, int target)
{
    int first, last, mid;
    first =0;
    last = N-1;
    while (first <= last)
    {
        mid = (first + last) /2;
        if (array[mid] == target)
            return mid;
        else if (array[mid] < target)
            first = mid + 1;
        else if (array[mid] > target)
            last = mid - 1;
    }
return -1;
}
     


