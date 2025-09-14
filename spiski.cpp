#include <iostream>
#include <vector>

int main() {
    std::vector<int> a;
    
    for (int i = 1; i < 1000; i++) {
        if (i % 100 == 15) {
            a.push_back(i);
        }
    }
    
    // Вывод результатов
    std::cout << "[";
    for (size_t i = 0; i < a.size(); i++) {
        std::cout << a[i];
        if (i < a.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
    
    return 0;
}
