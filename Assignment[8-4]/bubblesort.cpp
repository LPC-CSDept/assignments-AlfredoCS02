#include <iostream>
#include <fstream>
using namespace std;

const int 	MAX_LEN = 20;
const int 	NUM_SCORES = 2;
struct Students {
	int 	id;
	char 	name[MAX_LEN];
	double 	scores[NUM_SCORES];
};

void bubbleSortbyID(Students [], int );
void bubbleSortbyName(Students [], int );
void bubbleSortbyScores(Students [], int );
void makeStudents(Students [], int );
void printStudents(Students [], int );

int main()
{
	const int 	N = 10;
	Students 	s[N];

	makeStudents(s, N);
	cout << "Initial Student's Struct Array \n";
	printStudents(s, N);
	bubbleSortbyID(s, N);
	cout << "After Sorting by ID \n";
	printStudents(s, N);
	bubbleSortbyName(s, N);
	cout << "After Sorting by Name \n";
	printStudents(s, N);
	bubbleSortbyScores(s, N);
	cout << "After Sorting by Scores \n";
	printStudents(s, N);
}

void bubbleSortbyID(Students s[], int N)
{
 int i,j;
 for(i=0;i<N-1; i++)
      for(j=0;j < N-i-1; j++)
      if (s[j].id > s[j+1].id)
      swap(s[j], s[j+1]);  
}

void bubbleSortbyName(Students s[], int N)
{
   int i,j;
 for(i=0;i<N-1; i++)
      for(j=0;j < N-i-1; j++)
    {
	 
	     // recommend to use string member functions
	      // strcmp(str1, str2);
	      // returns 0 if they are same, returns < 0 if str1 < str2, return >0 if str1 < str2
	      
	      
	      
	      
      int x=0;
      if (s[j].name[x] > s[j+1].name[x]) //check first character
      swap(s[j], s[j+1]);
      else
      {
      while(s[j].name[x] == s[j+1].name[x]) //if they are the same, search for a different character
      x++;
      if(s[j].name[x] > s[j+1].name[x])
      swap(s[j], s[j+1]);
      }
    }
      
      
}

void bubbleSortbyScores(Students s[], int N)
{
    int i,j;
 for(i=0;i<N-1; i++)
 {
      for(j=0;j < N-i-1; j++)
    {
      int tot1 = s[j].scores[0] + s[j].scores[1];
      int tot2 = s[j+1].scores[0] + s[j+1].scores[1]; 
      if (tot1 > tot2)
      swap(s[j], s[j+1]); 
    }
 }
}

void makeStudents(Students s[], int N)
{
	ifstream ifs;
	ifs.open("students.txt");
	if ( ifs.fail())
	{
		cerr << "File Open Error\n";
		exit(0);
	}

	for(int i=0;i<N;i++)
	{
		ifs >> s[i].id >> s[i].name;
		for(int j=0; j<NUM_SCORES; j++)
			ifs >> s[i].scores[j] ;
		
	}
}

void printStudents(Students s[], int N)
{
	for(int i=0;i<N;i++)
	{
		cout << s[i].id << "\t" << s[i].name << "\t";
		for(int j=0; j<NUM_SCORES; j++)
			cout <<  s[i].scores[j] << "\t";
		cout << endl;
	}
	cout << "==== End of Record === \n";
}
