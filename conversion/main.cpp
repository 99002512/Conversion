
#include <conversion.h>
int main() {
        std::cout << "insert your number: "; int x; std::cin >> x;
        std::vector<int> v_result = Splitter(x);
        FlipVector(v_result);
        PrintVector(v_result);
        std::cout << Stringer(v_result) << std::endl;


}
