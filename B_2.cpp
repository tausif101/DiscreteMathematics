#include<iostream>
#include<vector>
#include<ctime>
#include<algorithm>
#include<cmath>
#include<iomanip>

using namespace std;

class Set
{
protected:
    long long int n,i,j,temp,Search;
    vector<long long int> A;
public:
    void setN(long long int);
    void createSet();
    void getSet();
    void Sorting();
    void LinearSearch();
    void BinarySearch();
};


int main()
{
    srand(time(NULL));
    clock_t BeginL, EndL, BeginB, EndB;

    while(1)
    {
        long long int x;
        cout<<"Input the value of n: ";
        cin>>x;
        cout<<endl<<endl;

        Set S;
        S.setN(x);
        S.createSet();
        cout<<endl<<endl;
        S.getSet();

    }
}





void Set::setN(long long int N)
{
    n=N;
}


void Set::createSet()
{
    Search=(rand()*rand());
    for(i=0;i<n;i++)
    {
        temp=(rand()*rand());
        int c=0;
        do
        {
            c=0;
            if(count(A.begin(),A.end(),temp))
            {
                temp=(rand()*rand());
                c=1;
            }
        }while(c==1);
        A.push_back(temp);
    }
    cout<<endl<<"Randomly Searching Value is: "<<Search<<endl<<endl;
}


void Set::getSet()
{
    cout<<"The set is=  { ";
    for(i=0; i<n; i++)
    {
        cout<<A[i];
        if(i!=n-1)
        {
            cout<<", ";
        }
    }
    cout<<" }"<<endl<<endl<<endl;
}
