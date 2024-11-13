#include <stdio.h>

void main(){
    int n, m;
    scanf("%d", &n);
    int A[n];
    for(int i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
    scanf("%d", &m);
    int B[m];
    for(int i=0; i<m; i++){
        scanf("%d", &B[i]);
    }
    int C[n+m];

    int k=0, i=0, j=0;
    for (i; i < n && j<m;){
        if (A[i] < B[j]){
            C[k] = A[i];
            i++;
        } else {
            C[k] = B[j];
            j++;
        }
        k++;
    }
    for (i; i < n; i++){
        C[k] = A[i];
        k++;
    }
    for (j; j < m; j++){
        C[k] = B[j];
        k++;
    }
    for (i=0; i<n+m; i++){
        printf("%d ", C[i]);
    }
}