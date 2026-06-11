// // this programm when we have two sorted array and we want to remove common element from it


// #include<iostream>
// using namespace std;



// void inserion(int a[],int b[],int m,int n){
//     int i=0,j=0;
//     while ( i<m &&  j<n)
// {
//     if (i>0 && a[i]==a[i-1]){
//         i++;
//         continue;
//     }
//     else if(a[i]<b[j]){
//         i++;
//     }
//     else if (b[j]<a[i]){
//         j++;
//     }
//     else if (a[i]==b[j]){
//         cout<<a[i]<<" ";
//         i++;
//         j++;
//     }

// };
// }




// int main()
// {
//     int a[]={2,20,20,40,60};
//     int b[]={10,20,20,30};

//     int m = sizeof a/sizeof a[0];
//     int n= sizeof b/ sizeof b[0];

//     inserion(a,b,m,n);
//     for (int i = 0; i < m+n; i++)
//     {
//         cout<<a[i]<<" ";
//     }
    
// return 0;
// }



#include<iostream>
using namespace std;

void removeCommon(int a[], int b[], int m, int n) {
    int i = 0, j = 0;

    while (i < m && j < n) {
        if (i > 0 && a[i] == a[i-1]) { i++; continue; }  // skip duplicate in a
        if (j > 0 && b[j] == b[j-1]) { j++; continue; }  // skip duplicate in b

        if (a[i] < b[j]) {
            cout << a[i] << " ";   // unique to a
            i++;
        }
        else if (b[j] < a[i]) {
            cout << b[j] << " ";   // unique to b
            j++;
        }
        else {
            i++;  // common — skip both
            j++;
        }
    }

    while (i < m) {  // leftover in a
        if (i == 0 || a[i] != a[i-1])
            cout << a[i] << " ";
        i++;
    }

    while (j < n) {  // leftover in b
        if (j == 0 || b[j] != b[j-1])
            cout << b[j] << " ";
        j++;
    }
}

int main() {
    int a[] = {2, 20, 20, 40, 60};
    int b[] = {10, 20, 20, 30};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);

    removeCommon(a, b, m, n);  // ✅ no extra loop here

    return 0;
}