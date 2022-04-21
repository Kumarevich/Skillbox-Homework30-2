#include <iostream>
#include <cpr/cpr.h>

int main() {
    cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/html"));
    for (int i = r.text.find("<h1>") + 4; i < r.text.find("</h1>"); ++i) {
        std::cout << r.text[i];
    }
    return 0;
}
