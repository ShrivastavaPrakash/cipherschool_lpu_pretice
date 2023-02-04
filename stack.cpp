// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     stack<int> st; //creating a stack..

//     st.push(2);//push 2 into the stack
//     st.push(5);
//     st.push(3);
//     cout<<st.size()<<endl;
//     cout<<st.top()<<endl;
//     st.pop();
//     cout<<st.top()<<endl;


// }

#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<int> st; //creating a stack..

    st.push(2);//push 2 into the stack
    st.push(5);
    st.push(3);
    cout<<st.top()<<endl;
    st.push(1);
    cout<<st.size()<<endl;
    st.push(5);
    st.push(3);
    cout<<st.top()<<endl;
    st.push(1);
    st.pop();
    cout<<st.size()<<endl;
    st.pop();
    st.top();
    cout<<st.top()<<endl;
    cout<<st.empty();

    st.pop();


}