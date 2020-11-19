#include <vector>
#include <thread>
#include <algorithm>
#include <functional>

void do_work(unsigned id) {
    double s{0.0};
    for (int i = 0; i < 10000000; ++i)
        s += i;
}

void f() {
    std::vector<std::thread> threads;
    for (unsigned i = 0; i < 10000; ++i) {
        threads.push_back(std::thread(do_work, i));
    }
    std::for_each(threads.begin(), threads.end(),
                  std::mem_fn(&std::thread::join));
}

int main() {
    f();
}
