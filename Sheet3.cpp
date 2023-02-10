#include <bits/stdc++.h>
using namespace std;
void swp (int&x,int&y){
    // pass by reference &
int temp =x;
x=y;
y=temp;
}
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
/*                                D. positions in array
int N ;
cin>>N;
int A[N];
for(int i=0;i<N;i++){cin>>A[i];}
for(int i=0;i<N;i++){
    if(A[i]<=10){cout<<"A["<<i<<"] = " << A[i] <<endl;}}
*/
/*                               E. lowest number
int N,low,pos=0;
cin>>N;
int A[N];
for(int i=0;i<N;i++){cin>>A[i];}
low = A[0];
for(int i=0;i<N;i++){
if(low>A[i]){
    low = A[i];
    pos=i;}}
cout<< low <<" "<<pos+1<<endl;
*/
/*                           F. reversing
int N ;
cin>>N;
int A[N];
for(int i=0;i<N;i++){cin>>A[i];}
for(int i=0;i<N;i++){cout<<A[N-i-1]<<" ";}
*/
/*                           G. palindrome array
long long N ;
string flag ="YES";
cin>>N;
long long A[N];
for(int i=0;i<N;i++){cin>>A[i];}
for(int i=0;i<N/2;i++){
if(A[i]!=A[N-i-1]){flag="NO";
break;}
else{flag="YES";}}
cout<<flag<<endl;
*/
/*                             H. Selection sorting
int N;
cin>>N;
int A[N];
for(int i=0;i<N;i++){cin>>A[i];}
for(int i=0;i<N;i++){
    for(int j=i+1;j<N;j++){
        if(A[i]>A[j]){swp(A[i],A[j]);}}}
for(int i=0;i<N;i++){cout<<A[i]<<" ";}
cout<<endl;
*/
/*                               I. smallest pair  REVIEW
int N,low,temp;
string flag ="yes";
cin>>N;
int A[N];
for(int i=1;i<=N;i++){cin>>A[i];}
for(int i=1;i<=N;i++){
    for(int j=i+1;j<N;j++){
        low = A[i] +A[j] + j -i;
        if(flag=="yes"){temp =low;
        flag="no";}
        if(low<temp){swap(low,temp);}}}
        cout<<temp;
*/
/*                           J. Lucky Array
int N,x=0;
cin>>N;
int A[N];
for(int i=0;i<N;i++){cin>>A[i];}
int low = A[0];
for(int i=0;i<N;i++){if(low>A[i]){low=A[i];}}
for(int i=0;i<N;i++){if(low==A[i]){x++;}}
if(x%2!=0){cout<<"Lucky"<<endl;}
else {cout<<"UnLucky"<<endl;}
*/
/*                                    K - Sum Digits
int N,sum=0;
string z;
cin>>N;
cin>>z;
for(int i=0;i<N;i++){sum +=z[i]-'0';}
cout<<sum<<endl;
*/

return 0;
}



















