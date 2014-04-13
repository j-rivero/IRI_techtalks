#
# Code to trigger an assert on some lines generating a tabletop game dice
#
# Jose Luis Rivero 
# jrivero@osrfoundation.org
#

import random

# Bug was introduced to produce a range between 1 and 10
n = random.randrange(1,10)
print n
assert(n < 7)
