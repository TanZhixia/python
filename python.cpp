#include <iostream>
using string = std::string;
template <typename T>
string input(T s) {
    std::cout << s;
    string a;
    std::cin >> a;
    return a;
}
string input() {
    string a;
    std::cin >> a;
    return a;
}
template <typename T>
void print(T s) {
    std::cout << s << std::endl;
}
template <typename T, typename U>
V print(T s, U end) {
    std::cout << s << end;
}