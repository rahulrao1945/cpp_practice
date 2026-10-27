// #include<iostream>
// using namespace std;
// int main(){
//     cout << " hello"<<endl;
//     cout << "Hello everyone my name is rahul yadav";
//     return 0;
// }




// THE RELATION OF POINTERS WITH __ARRAY_OPERATORS


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int * ptr = arr;
//     // Print the address of first element or 0 index
//     cout << arr <<endl;
//     cout << arr + 0 << endl;
//     cout << &arr[0]<<endl;
//     cout << ptr<<endl;
//     // Print the address of second element or 1 index
//     cout << arr+1<<endl;
//     cout << &arr[1]<<endl;
//     // Print the value of 0 index
//     cout << arr[0]<<endl;
//     cout << *arr<<endl;
//     cout << *(arr+0)<<endl;
//     // To print all the address
//     for(int i=0;i<5;i++)
//     cout << arr+i<<endl;
//     // To print all the value in the array
//     for(int i = 0;i<5;i++)
//     cout << *arr+i<<endl;

// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int *ptr = arr;
//     cout << arr<<endl;
//     cout << *arr + 1;
// }


// # Type conversion ------
// #include <iostream>
// using namespace std;
// class tim
// {
//     int h,m;
//     public:
//     void output();
//     tim(int x)
//     {
//         h=x/60;
//         m=x%60;
//     }
//     operator int(){
//         return(m+h*60);
//     }
// };
// void tim::output()
// {
//     cout<<"time is "<<h<<" hours and "<<m<<" minutes."<<endl;
// }
// int main()
// {
//     tim t=135;
//     int min;
//     t.output();
//     min = (int)t;
//     cout << "total minutes are "<<min<<endl;
//     return 0;
// }



34
#include <iostream>
using namespace std;
class len1
{
    int f,i;
    public:
    void input();
    int getf()
    {
        return f;
    }
    int geti()
    {
        return i;
    }
    
};
void len1::input()
{
    cout<<"enter length in feets and inches : ";
    cin>>f>>i;
}
class len2
{
    int m,cm;
    public:
    void output();
    len2(len1 x)
    {
        int tin = x.geti() + (x.getf()*12);
        float tcm = tin*2.54;
        m = tcm/100;
        cm = tcm - m*100;
    }
};
void len2::output()
{
    cout<<m<<" meters and "<<cm<<" centimeters."<<endl;
}
int main()
{
    len1 l1;
    l1.input();
    len2 l2 = l1;
    l2.output();
    
    return 0;
}