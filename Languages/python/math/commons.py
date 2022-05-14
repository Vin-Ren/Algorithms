import math


def estimate_root(x, iterations=6):
    """Estimates square root"""
    estimation = 2
    for _ in range(iterations):
        estimation = (x/estimation + estimation)/2
    return estimation


def is_prime(x):
    for i in range(2, int(math.sqrt(x))+1):
        if x%i==0:
            return False
    return True


def get_factors(x):
    lower_factors = []
    higher_factors = []
    for i in range(1, int(math.ceil(math.sqrt(x))+1)):
        if x%i == 0 and not i in higher_factors:
            lower_factors.append(i)
            higher_factors.append(x/i) if x/i != i else None
    return lower_factors+list(reversed(higher_factors))


# Utility for naming
class ObjectifiedDict(dict):
    def __getattribute__(self, name):
        try:
            return super().__getattribute__(name)
        except AttributeError:
            return super().__getitem__(name)

def name(**kwargs_for_names):
    """Functions as a 'decorator' for naming only, in a human sense, decorating stuff."""
    def decor(func):
        func.names = ObjectifiedDict(kwargs_for_names)
        return func
    return decor
