#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

float calculateAverage(vector<int> nums) {
    // Write code here
    int suma = 0 ; 
    for (int i = 0; i < nums.size(); i++){
        suma += nums[i]; 
    }
    return (float)suma/(nums.size());
}
int main () {
    std::vector<int> v = {3, 7, 11, 5}; 
    float resultado = calculateAverage(v); 
    std::cout << resultado << std::endl;    
    return 0; 
}