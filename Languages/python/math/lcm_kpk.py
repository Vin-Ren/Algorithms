from commons import is_prime, name


@name(EN="LCM FACTOR TREE", ID="KPK POHON FAKTOR")
def factor_tree(x, initial_cached_primes_generator_limit=10):
    """
    
    EN: Searchs for factor tree with prime factorization of given x.
    ID: Mencari pohon faktor dengan faktorisasi prima dari x yang diberikan."""
    
    # Creates a set of primes in between 2 and (given initial_cached_primes_generator_limit), inclusive.
    cached_primes = [i for i in range(2, initial_cached_primes_generator_limit+1) if is_prime(i)]
    # Last number checked for prime is useful to not check for primes on the same number repeatedly.
    last_number_checked_for_prime = initial_cached_primes_generator_limit
    # Current tree
    tree = []
    # Current remainder
    remainder = x
    # Continue loop until remainder is prime
    while not is_prime(remainder):
        # If remainder is dividable by any number in cached prime, then divide remainder with it and append it to the tree.
        for i in cached_primes:
            if remainder % i == 0:
                remainder /=i
                tree.append(i)
                break
        # Else, search for prime from last number checked, then if found, append to cached_primes.
        # If the remainder is divisible by the prime, then divide the remainder with it and append it to the tree.
        else:
            while last_number_checked_for_prime<x:
                if not is_prime(last_number_checked_for_prime):
                    last_number_checked_for_prime+=1
                    continue
                cached_primes.append(last_number_checked_for_prime)
                if remainder % last_number_checked_for_prime == 0:
                    remainder /= last_number_checked_for_prime
                    tree.append(last_number_checked_for_prime)
                    break
                last_number_checked_for_prime+=1
    # Returns tree, added with the last factor which is the last factor prime.
    return tree+[int(remainder)]
