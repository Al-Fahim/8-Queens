/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int q[8], c=0, i, j, x;
    q[0]=0;
nc: c++;
    if(c==8) goto print;
    q[c]=-1;
nr: q[c]++;
    if(q[c]==8) goto backtrack;
    for(i=0;i<c;i++){
        if((q[i]==q[c])||(c-i==abs(q[c]-q[i]))) goto nr;
    }
    goto nc;
backtrack: c--;
if(c==-1) return 0;
goto nr;
print: 
++x;
cout<<"Solution "<< x <<endl;
for(i=0;i<8;i++){
    for(j=0;j<8;j++){
        if(q[i]==j){
            cout<<"[Q]";
        } else {
            cout<<"[ ]";
        }
    }
    cout<<endl;
    }
    goto backtrack;
}