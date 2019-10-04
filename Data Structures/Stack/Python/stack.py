from collections import deque

if __name__ == '__main__':
    my_stack_using_dq = deque() # List implementation using deque
    my_stack_using_list = []    # List implementation using stack

    # Using append method to insert elems on both of the ds used for stack implementation
    my_stack_using_dq.append('1')
    my_stack_using_dq.append('2')
    my_stack_using_dq.append('3')

    my_stack_using_list.append('1')
    my_stack_using_list.append('2')
    my_stack_using_list.append('3')

    print('stack formed in dq ->', my_stack_using_dq)
    print('stack formed in list ->', my_stack_using_list)
    # Using pop method to dlt elems on both of the ds used for stack implementation
    try:
        my_stack_using_list.pop()
        my_stack_using_dq.pop()

        print('stack formed after pop in dq ->', my_stack_using_dq)
        print('stack formed after pop in list ->', my_stack_using_list)
    except IndexError:
        print('pop from empty list')