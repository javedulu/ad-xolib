import os
import sys 
sys.path.append(os.path.dirname(__file__))

import pyxodr
from pyxodr import xodr
print("pyxodr methods %s"%dir(pyxodr))
print("xodr methods %s"%dir(xodr))
ax = xodr()
ax.load(r"../../samples/Town10.xodr")
ax.parse()
print (ax)
print ("Vendor : %s " %ax.OpenDRIVE.header.vendor);
m_road = ax.OpenDRIVE.road
print ("m_road .. ",m_road)
#print ("Vendor : %s"%(ax.OpenDRIVE.header.vendor))
