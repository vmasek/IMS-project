// IMS project 2015 - 07 Menza
// authors: xmalin26 & xmasek15

#include <simlib.h>
#include "customer.h"
#include "generator.h"

Generator::Generator(ExperimentData *data) {
    Activate();
    data_ = data;
}

void Generator::Behavior() {
    auto c = new Customer();
    customers.push_back(c);
    c->Activate();
    this->Activate(Time + Exponential(data_->kCustomerArrivalTime));
}