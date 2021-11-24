#include "Course.hpp"
#include <fstream>

using namespace std;

int main(){
 Course course[4];
 ifstream file;
 file.open("coursestudents.txt");
 

 for(int i=0; i<4; i++){
 file>>course[i];
 cout<<course[i]<<endl;
}


}