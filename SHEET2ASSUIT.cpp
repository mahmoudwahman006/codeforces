#include <iostream>
#include<stdio.h>
#include<cmath>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
                                                                      /* code c in sheet 2
    int x,z,c;
    int coun_neg = 0,coun_pos = 0,coun_even = 0 ,coun_ood = 0 ;
    cin>>x;
    int element[x];
    for(int i=0;i<x;i++){
        cin>>element[i];
        }

    for(int i=0;i<x;i++){

        if(element[i]<0){
            coun_neg+=1;
            z = element[i];
            c = abs(z);
            if(c%2==0){
                coun_even+=1;}
            else if (c%2!=0){
                coun_ood+=1;}}

        else if (element[i]>0){
            coun_pos+=1;
            if(element[i]%2!=0){
                coun_ood+=1;}
            else if (element[i]%2==0)
                coun_even+=1;
                }

        else if (element[i]==0)
            coun_even+=1;

    }
cout<<"Even: "<<coun_even<<endl;
cout<<"Odd: "<<coun_ood<<endl;
cout<<"Positive: "<<coun_pos<<endl;
cout<<"Negative: "<<coun_neg<<endl;
*/
/*                              code d sheet 2

int x=0;
while(x!=1999){
    cout<<"Wrong"<<endl;
    cin>>x;
}
cout<<"Correct"<<endl;
*/

                                                   /* code E sheet 2
int x,counter,m;
cin>>x;
int element[x];
for(int i=0;i<x;i++){
    cin>>element[i];}
m = element[0];
for(int i =0;i<x;i++ ){
    if(m>element[i]){
        counter++;}
    else
        m=element[i];}
cout<<m<<endl;*/
                                                      /*  code f sheet 2
int x;
cin>>x;
for(int i = 1;i<=12;i++){
    cout<<x<<" * "<<i<<" = "<<(x*i)<<endl;
}*/

                                                        /* code G sheet 2
int t;
cin>>t;
while(t>0)
{
long long n,s=1;
cin>>n;
for(int i=1;i<=n;i++)
{
   s*=i;
}
cout<<s<<endl;
t--;
}*/
/*                                                     code h  sheet 2
int i;
cin>>i;
int c=2;
int counter=0;
if((i>=2)&(i<=100000)){
for(int c=2;i>c;c++){
if(i%c==0){
    counter+=1;}
}
if(counter==0){
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}
}
*/
 /*                                  revision code j sheet 2
int x,z,c=0;
z=x;
for(int a=1;a<=z;a++){
for(int i=2;i<=x;i++){
        if(x%i==0){
            c++;
        }

}
cout<<x<<" ";

}*/
/*                                             code k sheet 2
int x;
cin>> x ;
for(int i=1;i<=x;i++){
    if(x%i==0){
        cout<<i<<endl;
    }
}*/
long long a,b,z;
cin>>a>>b;
if((a>=1)&(b>=1)){
for(int i=1;(i<=a/2)|(i<=b/2);i++){
    if((a%i==0)&(b%i==0)){
        z=i;
    }
}
cout<<z<<endl;
}
/*                                                                        code N sheet 2
string s=" ";
int a;
cin>>s;
cin>>a;
int b[a];
for(int i=0;i<a;i++){
    cin>>b[i];}

for(int i=0;i<a;i++){
for(int q=1;q<=b[i];q++){
    cout<<s;
}
cout<<"\n";
}*/
/*                                                   code O sheet 2
int a;
cin>>a;
for(int i=1;i<=a;i++){
for(int q=0;q<i;q++){
    cout<<"*";
}
cout<<"\n";
}*/
/*                                                 code p sheet 2
int a;
cin>>a;
for(int i=1;i<=a;i++){
for(int q=a;q>i;q--){
    cout<<"*";
}
cout<<"\n";
}*/
/*                                                   code q sheet 2
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
  int t;
  string x;
  cin>>t;
  while(t>=1&t<=10){
    cin>>x;
    for(int i=(x.length()-1);i>=0;i--){
    cout<< x[i]<<" ";
    }
    cout<<endl;
    t--;
  }
return 0;
}*/

/*                                                  code R sheet2

    int x,y,z,q,sum=0;
    cin>>x>>y;
    while(x>0&y>0){
    z=min(x,y);
    q=max(x,y);
    for(int i=z;i>=z&i<=q;i++){
        cout<<i<<" ";
        sum+=i;
    }
    cout<<"sum ="<<sum<<endl;
    sum=0;
    cin>>x>>y;
    }
    */
                                                 /* REVISSION CODE R
int x,a,b;
cin >>x;
vector<int>v;
vector<int>z;
while(a>0&b>0){
    cin>>a,b;
    v.push_back(a);
    v.push_back(b);
}
for(int i=0;i<(v.size());i+=2){
    for (int q=0;q<(i+2);q+=2){
        //sm = Maht.sum(v[i],v[i+1]);
        for(int counter=min(v[i],v[i+1]);counter<=max(v[i],v[i+1]);counter++){
            z.push_back(counter);
        }
        for(int s=0;s<=z.size();s++){
            cout<<z[s]<<" ";
        }
        cout<<" sum ="<<accumulate(z.begin(),z.end(),0);
    }
}*/

                                              /*code Q sheet2
  int t;
  string x;
  cin>>t;
  while(t>=1&t<=10){
    cin>>x;
    for(int i=(x.length()-1);i>=0;i--){
    cout<< x[i]<<" ";
    }
    cout<<endl;
    t--;
  }*/

/*                                                                  //code s sheet 2
int t,sum=0,a=0,b=0;
cin>>t;
while(t>0){
        int sum =0;
        cin>>a;
        cin>>b;
        int i=0;
        if(a>=b){
        for(int i =(b+1);i<a;i++){
            if(i%2!=0){
                sum=sum+i;
}}}
        else {
            for(int i =(1+a);i<b;i++){
            if(i%2!=0){
                sum=sum+i;
}}}
        cout<<sum<<endl;
    t--;
}*/
/*                                                      code T sheet 2
int a;
cin>>a;
for(int i=1;i<=a;i++){
for(int q=a;q>i;q--){
    cout<<" ";

}
for(int q=1;q<i*2;q++){
    cout<<"*";
}
cout<<"\n";
}*/
   /*                                                     // code v sheet 2
int n,t=0;
cin>>n;
for(int i =0;i<n;i++){
    cout<< t+1<<" "<<t+2<<" "<<t+3<<" PUM"<<endl;
    t+=4;
}*/
/*                                                       code w sheet 2
int a;
cin>>a;
for(int i=1;i<=a;i++){
for(int q=a;q>i;q--){
    cout<<" ";

}
for(int q=1;q<i*2;q++){
    cout<<"*";
}
cout<<"\n";
}
for(int i=a; i>0;i--){
for(int w=a;w>i;w--){
    cout<<" ";

}
for(int z =1; z<i*2 ;z++){
    cout<<"*";
}

cout<<"\n";
}*/                                                   /* code Y sheet 2
int n,n1=0,n2=1,sum=0;
cin>>n;
for(int i =1;i<=n;i++){
  if(i==1){
    cout<<n1<<" ";
  }
  else if(i==2){
    cout<<n2<<" ";
  }
  else {
  sum=n1+n2;
  cout<<sum<<" ";
  n1=n2;
  n2=sum;
  }
}*/
/*                                                 the first and second max
int siz,max1,max2;
cin>>siz;
int arr[siz];
for(int i=0;i<siz;i++){
    cin>>arr[i];}
if(arr[0]>arr[1]){
    max1=arr[0];
    max2=arr[1];}
    else {
        max1=arr[1];
        max2=arr[0];}
for(int i=2;i<siz;i++){
    if(max1<=arr[i]){
        max2=max1;
        max1=arr[i];}
        else if(max2<=arr[i]) {
            max2=arr[i];}}
cout<<max1<<" "<<max2<<endl;
*/
/*                                                             code P in sheet 1
int x;
cin>>x;
for(int i=0;i<3;i++){
    x=x/10;
}
if(x%2==0){
    cout<<"EVEN";}
else{
    cout<<"ODD";}
    */                /*                   code x two intervale (revision)
int n1,n2,n3,n4 ;
cin>>n1;
cin>>n2;
cin>>n3;
cin>>n4;
if((n2>=n3)&(n2<=n4)&(n1<=n3))
    cout<<min(n2,n3)<<" "<<max(n2,n3);
else if((n3>=n1)&(n2>=n4)){
    cout<<min(n3,n4)<<" "<<max(n3,n4);}
else if((n3<=n1)&(n2<=n4)){
    cout<<min(n1,n2)<<" "<<max(n1,n2);}
else if((n3<=n1)&(n4<=n2)&(n2>=n3)){
    cout<<min(n1,n4)<<" "<<max(n1,n4);}
else
    cout<<-1;
*/ /*                         problem z sheet 2
int k,s,counter=0;
cin>>k;
cin>>s;
for(int x=0;x<=k;x++){
    for(int y=0;y<=k;y++){
        if(s-x-y>=0&& s-x-y<=k){
                counter++;
        }
    }
}
cout<<counter<<endl; */

return 0;
}
