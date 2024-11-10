#include <stdio.h>

void main() {
    int n;

    scanf("%d", &n);
    
    int peaple_list[n];  
    int leader_list[n];  
    int leader_count = 0; 

    for (int i = 0; i < n; i++) {
        scanf("%d", &peaple_list[i]);
    }

    // Initialize the first leader as the last element
    int current_leader = peaple_list[n - 1];
    leader_list[leader_count] = current_leader; 
    leader_count++;

    for (int i = n - 2; i >= 0; i--) {
        // If the current element is greater than the current leader
        if (peaple_list[i] > current_leader) {
            current_leader = peaple_list[i]; // Update the current leader
            leader_list[leader_count] = current_leader; 
            leader_count++;
        }
    }

    for (int i = leader_count - 1; i >= 0; i--) {
        printf("%d\n", leader_list[i]);
    }
}
