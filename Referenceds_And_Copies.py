__author__ = 'DHAVAL'

# Local Import
import copy

#Main Script

############ Shallow Copy #################
a=[1,2,3,4]
b=a
a[2]=100

print a
print b
############################################

############## Deep Copy ###################
c=[1,2,3,4]
d=copy.deepcopy(c)
d[2]=100
print c
print d
###########################################
