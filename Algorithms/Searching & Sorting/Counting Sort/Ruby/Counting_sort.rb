# Created by Ankur Pandey (Github - AnkDos)
def max(ar)
    i = 0
    max = ar[i]
    while i < ar.length
        if max < ar[i]
          max = ar[i]
        end
        i += 1
    end
    max
end

def count(element,ar)
    count = 0
    ar.each{
        |x|
        if element == x
            count+=1
        end
    }
    count
end

def counting_sort(ar, max = max(ar))
    new_arr = []
    sorted_array = []
    i = 0
    while i <= max
      new_arr << count(i,ar)  
      i+=1
    end
    i = 0
    while i < new_arr.length
        if i == 0
        else
            new_arr[i] = new_arr[i]+new_arr[i-1]
        end
        i+=1
    end
    i = 0
    while i < ar.length
       sorted_array[new_arr[ar[i]]] =  ar[i]
       new_arr[ar[i]] -= 1
       i+=1
    end   
    sorted_array[1...sorted_array.length]
end

ar = [231,11,2123,22121,12,2,13,23,21,2,43,2233,1,2,0]
print counting_sort(ar)
