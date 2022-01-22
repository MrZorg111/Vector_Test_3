#include <iostream>
#include <vector>

std::vector<int> add(std::vector<int> a, int b) {

}

int main() {
    int n;
    std::vector<int> vec(5);
    for (int i = 0; i < 20; i++) {
        std::cout << "Enter the array elements: \n";
        std::cin >> n;
        vec[i] = n;
    }

    for (int t = 0; t < vec.size(); t++){
        std::cout << vec[t] << " ";
    }
}