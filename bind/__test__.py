import os
import sys 
sys.path.append(os.path.dirname(__file__))

from pyxodr import xodr
ax = xodr()
ax.load(r"./Ex_Crosswalk.xodr")
ax.parse()
print (ax)
print ("Vendor : %s " %ax.OpenDRIVE.header.vendor);
m_road = ax.OpenDRIVE.road
print ("m_road .. ",m_road)
#print ("Vendor : %s"%(ax.OpenDRIVE.header.vendor))
