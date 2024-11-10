#include <string>
#include <vector>
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

class AI_chatbot: // Create chatbot instance
public:
    std::string input;
    std::string* tokens;
