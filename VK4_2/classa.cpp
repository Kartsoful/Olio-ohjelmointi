#include "classa.h"

ClassA::ClassA() {}

void ClassA::print1(ClassB B) {
    B.printAssosiation();
}
void ClassA::print2(ClassB & B) {
    B.printAggregation();
}
void ClassA::print3() {
    ClassB B;
    B.printComposition();
}
