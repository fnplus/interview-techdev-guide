#Created By Ankur Pandey (Github : AnkDos)

def binary_search (target,ar)
    begins = 0 ; ends = ar.length-1
    not_found = true
    while begins <= ends
        mid = (begins + ends)/2
        if target > ar[mid]
            begins = mid + 1
        elsif target < ar[mid]
            ends = mid - 1  
        elsif target == ar[mid]
            not_found = false
            return "Found at index #{mid}"
            break
        end
    end
    return "Doesn't Exists" if not_found == true
end

ar = [1,2,3,8,31,32,68,78,213,224,564,3211,24453,78674]
print binary_search(564,ar)
