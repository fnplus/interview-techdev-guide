'''in this problem we have to find the maximum number of activities 
a single person can perform that too one acivity at a time 
we are given with the start and finish times of each activity
let s[] denote start time for different activities and
f[] denote fininsh time for those activities
we can have two cases here: a) acitivities sorted according to the finish time
b) activities are not sorted
here we will consider the case (a) '''

def maxActivities(s , f ): 
    l = len(f) 
    print ("The activities selected are:")
  
    # i is initialised to first activity
    i = 0
    print (i) 
  
    # for the other activities
    for j in range(l): 
  
        '''If the activity has start time greater than 
        or equal to the finish time of previously 
        selected activity, then select it'''
        if s[j] >= f[i]: 
            print (j)
            i = j 
  
# Driver program
if __name__ == '__main__':
        s = [1 , 3 , 0 , 5 , 8 , 5] 
        f = [2 , 4 , 6 , 7 , 9 , 9] 
        maxActivities(s , f)
