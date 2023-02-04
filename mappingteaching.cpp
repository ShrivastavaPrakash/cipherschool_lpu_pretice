// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     map<int, int> mp;
//     while (true){
//         int x;
//         cin>>x;
//         if(x==-1)
//         break;

//         mp[x]++;


//     }
//     auto it = mp.begin();
//     while(it !=mp.end()){
//         cout<<it->first<<" : "<<it->second<<"\n";
//         ++it;
//     }
   
    

// }



#include<bits/stdc++.h>
using namespace std;


int main(){

    map<int, int> mp;
    while (true){
        int x;
        cin>>x;
        if(x==-1)
        break;

        mp[x]++;


    }
    int maxfrequency=0;
    for (auto it = mp.begin();it != mp.end();++it){
        maxfrequency=max(maxfrequency, it->second);
    }
    // auto it = mp.begin();
    
    // while(it !=mp.end()){
    //     cout<<it->first<<" : "<<it->second<<"\n";
    
    // }
    cout<< "maximum frequqcy : "<<maxfrequency<<endl;
    

    return 0;
   
    

}