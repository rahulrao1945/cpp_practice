// #include<iostream>
// using namespace std;
// int main(){
//     cout << " hello"<<endl;
//     cout << "Hello everyone my name is rahul yadav";
//     return 0;
// }




// THE RELATION OF POINTERS WITH __ARRAY_OPERATORS


#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int * ptr = arr;
    // Print the address of first element or 0 index
    cout << arr <<endl;
    cout << arr + 0 << endl;
    cout << &arr[0]<<endl;
    cout << ptr<<endl;
    // Print the address of second element or 1 index
    cout << arr+1<<endl;
    cout << &arr[1]<<endl;
    // Print the value of 0 index
    cout << arr[0]<<endl;
    cout << *arr<<endl;
    cout << *(arr+0)<<endl;
    // To print all the address
    for(int i=0;i<5;i++)
    cout << arr+i<<endl;
    // To print all the value in the array
    for(int i = 0;i<5;i++)
    cout << *arr+i<<endl;

}