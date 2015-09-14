#!/usr/bin/env python

import time

t = 2147483641

while t < 2147483651:
    print time.ctime(t)
    t += 1
