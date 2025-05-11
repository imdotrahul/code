#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>

using namespace std;

double sigmoid(double x) {
    return 1.0 / (1.0 + exp(-x));
}

double sigmoid_derivative(double x) {
    double s = sigmoid(x);
    return s * (1 - s);
}

struct Neuron {
    vector<double> weights;
    double bias;

    Neuron(int input_size) {
        for (int i = 0; i < input_size; ++i) {
            weights.push_back(((double) rand() / RAND_MAX) - 0.5); // Random init
        }
        bias = ((double) rand() / RAND_MAX) - 0.5;
    }

    double feedforward(const vector<double>& inputs) {
        double sum = bias;
        for (int i = 0; i < inputs.size(); ++i) {
            sum += inputs[i] * weights[i];
        }
        return sigmoid(sum);
    }
};

struct Layer {
    vector<Neuron> neurons;

    Layer(int num_neurons, int input_size) {
        for (int i = 0; i < num_neurons; ++i) {
            neurons.push_back(Neuron(input_size));
        }
    }

    vector<double> feedforward(const vector<double>& inputs) {
        vector<double> outputs;
        for (auto& neuron : neurons) {
            outputs.push_back(neuron.feedforward(inputs));
        }
        return outputs;
    }
};

struct NeuralNetwork {
    vector<Layer> layers;

    NeuralNetwork(const vector<int>& layers_sizes) {
        for (int i = 1; i < layers_sizes.size(); ++i) {
            layers.push_back(Layer(layers_sizes[i], layers_sizes[i-1]));
        }
    }

    vector<double> predict(const vector<double>& inputs) {
        vector<double> output = inputs;
        for (auto& layer : layers) {
            output = layer.feedforward(output);
        }
        return output;
    }
};

int main() {
    NeuralNetwork nn(std::vector<int>{2, 3, 1});

    vector<double> input = {0.5, 0.8};
    vector<double> output = nn.predict(input);

    cout << "Output: " << output[0] << endl;

    return 0;
}
