#include<bits/stdc++.h>

using namespace std;

// int main(){

//     cout<<"Hello World!";


//     return 0;

// }

// int sum(int a, int b){
//     return a+b;
// }

// int main(){

//     int n1,n2;
//     cin>>n1,n2;
//     // int sum=0;
//     cout<<sum(2,10);;
    
    

//     return 0;

// }

// int maxi(int n1, int n2){
//     if (n1>n2){
//         return n1;
//     }
//     return n2;
// }

// int maxi(int n1, int n2, int n3){
//     if(n1>n2){
//         if(n1>n3)return n1;
//         return n3;
//     }
//     else{
//         if (n2>n3)return n3;
//         return n3;
//     }
// }

// int maxi(int n1, int n2, int n3, int n4){
//     // int a= maxi(n1,n2);
//     // int b= maxi(n3,n4);
//     // int c= maxi(a,b);

//     int a = maxi(n1,n2,n3);
//     return maxi(a,n4);

// }

// int main(){

//   cout<<maxi(2,5);
//   cout<<maxi(2,5,3);
//   cout<<maxi(2,3,5,7);


//     return 0;

// }

// void increment(int&a){
//     a++;
// }

// int main(){
//     int i =11;
//     increment(i);
//     cout<<i<<endl;

//     return 0;

// }//this will increment the function as we are calling by pointers
// while in the case below it will not incremetn the value
void increment(int a){
    a++;
    return ;
}
int main(){

int i=11;
int &j=i;// this assign the same address to the j that i is having
i++; cout<<i<<endl;
// increment(i);
// cout<<i<<endl;
    return 0;

}


