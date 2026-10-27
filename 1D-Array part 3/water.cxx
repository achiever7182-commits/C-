    #include<iostream>
    #include<vector>
    using namespace std;
    int main(){
       int n ;
       cout<<"Enter size of your array : ";
       cin>>n;
       vector<int> height;
       for(int i = 0 ;i<n;i++){
        int x;
        cin>>x;
        height.push_back(x);
       }
       vector<int> arr;
       arr.push_back(-1);
       arr.push_back(height[0]);
       // taking input in arr
       for(int i = 2;i<n;i++){
            if(arr[i-1]>height[i]){
                arr.push_back(arr[i-1]);
            }
            else{
                arr.push_back(height[i]);
            }

       }
    //    for(int i = 0 ;i<n;i++){
    //     cout<<arr[i]<<" ";
    //    }
       // taking input in brr
       vector<int> brr(n,-1);
       brr[n-2] = height[n-1];
       for(int i = n-3 ;i>=0;i--){
         if(brr[i+1]>height[i]){
                brr[i] = brr[i+1];
            }
            else{
                brr[i] = height[i];
            }
       }
    //    for(int i = 0 ;i<n;i++){
    //   cout<<brr[i]<<" ";
    //     }
        vector<int> crr;
        for(int i = 1 ;i<n-1;i++){
            int x = brr[i]-arr[i];
            crr.push_back(x);
        }
        // for(int i = 0 ;i<crr.size();i++){
        //     cout<<crr[i]<<" ";
        // }
        int sum = 0 ;
        for(int i = 0 ;i<crr.size();i++){
            sum +=crr[i];
        }
        cout<<sum;
         
    }