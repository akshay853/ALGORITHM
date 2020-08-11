#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>

using namespace std;

//Global swap code
class Bubblesort
{

public:

    void swap(int *a, int *b)
    {
     int temp;
      temp = *a;
      *a = *b;
      *b = temp;
    }

//bubblesort code

      void bubblesort()
      {
        int n=10;
        int arr[n];
        cout<<"enter the element";
        for(int i=0;i<n;i++)
        {
          cin>>arr[i];
        }

        for(int i=0;i<n-2;i++)
        {
          for(int j=0;j<n-i-1;j++)
          {
            if(arr[j]>arr[j+1])
            {
              swap(&arr[j],&arr[j+1]);
            }
          }

        }

        for(int i=0;i<n;i++)
        {
          cout<<arr[i]<<"\t";
        }

      }
//algorithm sort
                void algo_sort()
                {

                  vector<int> vec;
                  for(int k=10;k>0;k--)
                  {
                    vec.push_back(k);
                  }
                  cout<<"\n\n";
                 sort(vec.begin(),vec.end());
                 cout<<"\n";
                 for(int i=0;i<10;i++)
                 {
                   cout<<vec[i]<<"\t";
                 }

                }

};

class InsertionSort
{

public:



   InsertionSort() {
     cout<<"insertsort performing"<<"\n\n"<<"Array before sort"<<"\n\n";

     int arr[]={5,4,8,1,9,2,4,7,4,6,3,1,10,90,92,89};
     int n = sizeof(arr)/sizeof(int);
     int i,j,key;
     for(int i = 0; i < n-1; i++)
     {
       cout<<arr[i]<<"\t";
     }
     cout<<"\n\n\n";

    for(int i=1;i<n-1;i++)
    {
      key = arr[i];
      j=i-1;
      while(j>=0 && arr[j]>key)
      {
        arr[j+1] = arr[j];
        j=j-1;
      }
      arr[j+1]=key;
    }

    for(int i = 0; i < n-1; i++)
    {
      cout<<arr[i]<<"\t";
    }



  }

};

int main()
{
  int choice;
 clock_t time,time1;

  cout<<"1 bubblesort\n";
  cout<<"2. InsertionSort \n";

  cout<<"Enter choice"<<"\n\n";
  cin>>choice;
  switch (choice)
  {

      case 1:Bubblesort Bubble;
             time = clock();
             Bubble.bubblesort();
             time = clock() - time;
             cout<<(float)time/CLOCKS_PER_SEC<<"seconds"<<"\n\n";
             time1= clock();
             Bubble.algo_sort();
             time1 = clock() - time1;
             cout<<(float)time1/CLOCKS_PER_SEC<<"seconds"<<"\n\n";
               break;


      case 2:time1 = clock();
             InsertionSort insertsort;
             time1 = clock()-time1;
             cout<<(float)time1/CLOCKS_PER_SEC<<"Seconds";
             break;


  }
  return 0;
}
