#CREATED BY Ankur Pandey (Github : AnkDos)

def check_pallindrome(number_to_check):
    return str(number_to_check)[::-1] == str(number_to_check)       #AS This Solution will raise TypeError with int 

print(check_pallindrome(1991))     #returns true if pallindrome else false
