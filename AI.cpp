#include <string>
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#define TRAINING_ITER 5
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
    layer end_layer;
    std::ifstream file("eng.txt");
    std::string line;

    if (file.is_open()) {
        // Read each line from the file and store it in the
        // 'line' variable.
        while (getline(file, line)) {
            Neron neron;
            srand(time(NULL));
            neron.value = rand();
            nuron.weight = 1;
            nuron.bias = 0;
            end_layer.nerons.push_back();
        }

        // Close the file stream once all lines have been
        // read.
        file.close();
    }
    
}

class AI_chatbot { // Create chatbot instance
public:
    std::string input;
    std::string* tokens;
}

int main() {
    NeralNetwork net = create_network();
    
    
}
