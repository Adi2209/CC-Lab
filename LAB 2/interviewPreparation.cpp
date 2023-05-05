// // #include <iostream>
// // #include <bits/stdc++.h>
// // using namespace std;

// // class Node
// // {
// //     public:
// //     int val;
// //     Node *next;

// //     Node(int val){
// //         this->val=val;
// //         this->next=NULL;
// //     }
// // };

// // int main()
// // {
// //     Node* node1= new Node(10);
// //     cout<<node1->val<<endl;
// //     cout<<node1->next<<endl;

// //     return 0;
// // }

// // ________________________________________________________ Now the class waala code and the driver code for writing a Solution

// // //{ Driver Code Starts
// // // Initial Template for C++
// // #include <bits/stdc++.h>
// // using namespace std;

// // // } Driver Code Ends
// // // User function Template for C++
// // class Solution {
// //   public:
// //     long long int nthFibonacci(long long int n){
// //         // code here
// //     }
// // };

// // //{ Driver Code Starts.
// // int main() {
// //     int t;
// //     cin >> t;
// //     while (t--) {
// //         long long int n;
// //         cin >> n;
// //         Solution ob;
// //         cout << ob.nthFibonacci(n) << endl;
// //     }
// //     return 0;
// // }

// // _______________________________________________ Making constructor again for a linked list

// // #include <iostream>
// // #include <bits/stdc++.h>
// // using namespace std;

// // class ListNode
// // {
// // public:
// //     int val;
// //     int *next;

// //     ListNode(int val)
// //     {
// //         this->val = val;
// //         this->next = NULL;
// //     }
// // };

// // int main()
// // {

// //     ListNode *head = new ListNode(10);

// //     cout << head->val << endl;
// //     return 0;
// // }

// // #include<bits/stdc++.h>
// // using namespace std;

// // class Solution{
// //     public:
// //     int findMaximum(vector<int> nums){
// //         int maxi=-1e9;
// //         int n=nums.size();
// //         for(int ind=0;ind<n;ind++){
// //             maxi=max(nums[ind],maxi);
// //         }
// //         return maxi;
// //     }
// // };

// // int main(){

// //     int testCases;
// //     cin>>testCases;
// //     vector<int> nums{4,5,2,1,4,5,13,53,11,10};
// //     Solution object;
// //     while(testCases--){
// //         cout<<object.findMaximum(nums)<<endl;
// //     }
// //     return 0;
// // }

// // _______________________________________ Dynamic Memory Allocation

// // #include <iostream>
// // #include <bits/stdc++.h>
// // using namespace std;

// // int main()
// // {
// //     // char ch = 'a';
// //     // cout << "Size of : " << sizeof(ch) << endl;

// //     // char *c = &ch;
// //     // cout << "Size of : " << sizeof(c) << endl;

// //     // int *arr=new int[5];

// //     // cout<<"Size of arr: "<<sizeof(arr)<<endl;
// //     // cout<<"Size of arr: "<<sizeof(int[5])<<endl;

// //     return 0;
// // }

// // #include <bits/stdc++.h>
// // using namespace std;

// // class Solution
// // {
// // public:
// //     int countPrimes(int n)
// //     {

// //     }
// // };

// // int main()
// // {
// //     int t;
// //     cin >> t;

// //     while (t--)
// //     {
// //         int n=0;
// //         cin>>n;
// //         Solution ob;
// //         cout<<ob.countPrimes(n)<<endl;
// //     }
// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//     int solve(int n){
//         cout<<"Correct"<<endl;
//         return 0;
//     }
// };

// int main(){

//     int testCases;
//     cin>>testCases;
//     while(testCases--){
//         int n;
//         cin>>n;
//         Solution ob;
//         ob.solve(n);
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
// Function Overloading------------->
// class overload{
//     public:
//     void sum(int a,int b){
//         cout<<"a+b="<<a+b<<endl;
//     }
//     void sum(int a,int b,int c){
//         cout<<"a+b+c="<<a+b+c<<endl;
//     }
// };
// Function overridng----------------->
// class override{
//     public:
//     void sum(int a,int b){
//         cout<<"a+b= "<<a+b<<endl;
//     }
// };
// class derived : public override{
//     public:
//     void sum(int a,int b){
//         cout<<"a+b= from derived"<<endl;
//     }
// };
/*
Operator Overloading------------------->
class Complex
{
private:
    int real, img;
public:
    Complex(){
        real=0;
        img=0;
    }
    Complex(int r,int i){
        real=r;
        img=i;
    }
    void print(){
        cout<<real <<" + "<< img<<"i"<< endl;
    }

    Complex operator +(Complex c){
        Complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
};
*/
// Friend Function----------------------> 
class Distance{
    private:
    int meters;
    public:
    Distance(){
        meters=0;
    }
    void displayData(){
        cout<<"The distance is: "<<meters<<endl;
    }
    friend void addValue(Distance &d);
};

void addValue(Distance &d){
    d.meters=d.meters+5;
}

int main()
{
    // override b;
    // derived d;
    // b.sum(10, 20);
    // d.sum(10, 20);
    // Complex c1(10,20);
    // Complex c2(20,30);
    // Complex c3;
    // c3=c1+c2;
    // c3.print();
    Distance d;
    addValue(d);
    d.displayData();



    return 0;
}