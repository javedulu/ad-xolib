#!/usr/bin/env python3


import os,sys

sys.path.append(os.path.dirname(__file__))

import pyxodr

from pyxodr import xodr 

print ("Importing pyxodr %s"%str(pyxodr.__doc__))

__all__=['xodr']
