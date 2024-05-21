#include "MainController.h"
#include <memory>

using namespace std;

int main(){
    unique_ptr<MainController> controller = make_unique<MainController>();
    controller->start();
    return 0;
}