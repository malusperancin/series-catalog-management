#include "MainController.h"
#include <memory>

using namespace std;

int main(){
    try {
        unique_ptr<MainController> controller = make_unique<MainController>();
        controller->start();
    }catch(const exception& e) {
        cerr << "Unexpected problem: " << e.what() << endl;
        exit(1);
    }
    return 0;
}