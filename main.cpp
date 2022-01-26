#include <iostream>
#include <vector>

int main() {
    int n = 0;
    std::vector<int> vec (n);
    for (int i = 0; ; i++) {
        std::cout << "Enter the array elements: \n";
        std::cin >> n;
                if(n == - 1) {
            break;
            }
        else {
            vec.resize(vec.size() + 1);
            vec[i] = n;
            }
        if (vec.size() == 20) {
            break;
        }

    }

    for (int t = 0; t < vec.size(); t++){
        std::cout << vec[t] << " ";
    }
}