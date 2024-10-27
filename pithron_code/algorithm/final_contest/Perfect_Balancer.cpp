#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> A(n);
    
    // Input the energy levels
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    
    // Calculate the total sum of all modules
    int total_sum = 0;
    for (int i = 0; i < n; ++i) {
        total_sum += A[i];
    }
    
    int prefix_sum = 0; // To maintain the sum of elements to the left of index i
    
    // Iterate through the array to find the balance module
    for (int i = 0; i < n; ++i) {
        int right_sum = total_sum - prefix_sum - A[i]; // Sum of elements to the right of index i
        
        // Check if the left sum equals the right sum
        if (prefix_sum == right_sum) {
            cout << A[i] +prefix_sum<< " " << i + 1 << endl; // Print the balancer and its 1-based index
            return 0;
        }
        
        // Update the prefix sum (left sum) to include the current element
        prefix_sum += A[i];
    }
    
    // If no such module exists, output "UNSTABLE"
    cout << "UNSTABLE" << endl;
    
    return 0;
}
