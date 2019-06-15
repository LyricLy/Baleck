import copy
import random


activation = lambda x: x

class Node:
    def __init__(self):
        self.before = []

    def evaluate(self, inp):
        r = activation(sum(n.evaluate(inp) * w for n, w in self.before))
        return r

    def mutate(self):
        for i in range(len(self.before)):
            if random.random() < 0.1:
                n, w = self.before[i]
                self.before[i] = (n, w + random.uniform(-0.1, 0.1))


class ConstantNode:
    def __init__(self, num):
        self.num = num

    def evaluate(self, inp):
        return self.num

    def mutate(self):
        pass


class InputNode:
    def __init__(self, ident):
        self.ident = ident

    def evaluate(self, inp):
        return inp[self.ident]

    def mutate(self):
        pass


class Network:
    def __init__(self, input_size, layers):
        self.layers = [[InputNode(i) for i in range(input_size)]]
        for idx, size in enumerate(layers):
            new_layer = []
            for _ in range(size):
                node = Node()
                node.before.append((ConstantNode(1), random.uniform(-0.3, 0.3)))
                for last_node in self.layers[-1]:
                    node.before.append((last_node, random.uniform(-0.3, 0.3)))
                new_layer.append(node)
            self.layers.append(new_layer)

    def evaluate(self, inp):
        return [n.evaluate(inp) for n in self.layers[-1]]

    def mutated(self):
        new_net = Network(0, [])
        new_net.layers = copy.deepcopy(self.layers)
        for layer in new_net.layers:
            for node in layer:
                node.mutate()
        return new_net
