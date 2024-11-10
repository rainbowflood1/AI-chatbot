import numpy as np

class Neuron:
    def __init__(self, weight, bias, inputs):
        self.weight = weight
        self.bias = bias
        self.inputs = inputs
        self.value = 0
        
