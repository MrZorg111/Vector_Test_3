#include <iostream>
#include <vector>

std::vector<int> add(std::vector<int> a, int b) {
    std::vector<int> tempo(a.size());
    for(int i = 0, j = 1; i < a.size() - 1; i++, j++) {
        tempo[i] = a[j];
        tempo[a.size() - 1] = b;
    }
    return tempo;
}

int main() {
    int n, element = 0;
    std::vector<int> vec(5);
    for (int i = 0; ; i++) {
        std::cout << "Enter the array elements: \n";
        std::cin >> n;
        if(n == - 1) {
            break;
            }
        if (element >= 5) {
            vec = add(vec, n);
            }
        else {
            vec[i] = n;
            element++;
            }
    }

    for (int t = 0; t < vec.size(); t++){
        std::cout << vec[t] << " ";
    }
}