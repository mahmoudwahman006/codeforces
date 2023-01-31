#include <bits/stdc++.h>
using namespace std;
int main()
{
/*                                 A. Summation
long long x,sum=0;
cin>>x;
if(x>=1&x<=10^5){
long long arr[x];
for(int i=0;i<x;i++){
    cin>>arr[i];}
for(int i=0;i<x;i++){
    sum+=arr[i];}
cout<<abs(sum)<<endl;
}
*/
/*                                B. Searching
long long x,a,z;
string flag ="false";
cin>>x;
if(x>=1&x<=10^5){
long long arr[x];
for(int i=0;i<x;i++){cin>>arr[i];}
cin>>a;
for(int i=0;i<x;i++){
    if(arr[i]==a){flag="true";
    z=i;
    break;}}
}
if(flag=="true"){cout<<z<<endl;}
else if(flag=="false"){cout<<-1<<endl;}
*/
/*                                C. Replacement
long long x;
cin>>x;
long long arr[x];
for(int i=0;i<x;i++){
    cin>>arr[i];
    if(arr[i]==abs(arr[i])&arr[i]>0){arr[i]=1;}
    else if(arr[i]==0){arr[i]=0;}
    else {arr[i]=2;}
    }
for(int i=0;i<x;i++){
    cout<<arr[i]<<" ";}
*/

return 0;
}
