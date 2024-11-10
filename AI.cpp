#include <string>
#include <vector>
#include <iostream>
#define MAX_TOKEN 25

class Neron {
public:
    float value;
    float weight;
    float bias;
    float sum() {
       return (self->value * self->weight) + self->bias;
    }
};

class layer {
    std::vector<Neron>* nerons;
};

class NuralNetwork {
    layer input_layer;
    std::vector<layer>* hidden_layers;
    layer output_layer;
};

NuralNetwork create_network() {
    NuralNetwork* network;
    layer input;
}

class AI_chatbot { // Create chatbot instance
public:
    std::string input;
    std::string* tokens;
}

int main() {
    
}
