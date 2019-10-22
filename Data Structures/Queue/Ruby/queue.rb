#CREATED BY Ankur Pandey (Github : AnkDos)

def enqueue(val,queue)
    queue << val                     #enqueue operation, '<<' represents 'push' in ruby .
end

def dequeue(queue)
    if queue.empty? == true          #if queue is empty , its underflow
        "underflow"
    else
        queue.pop                    #dequeue operation , to pop out an element out of the queue
    end
end

queue = Queue.new                    # queue object

while true
    puts "Select Operation(1 or 2)"
    puts "1.Enqueue"
    puts "2.Dequeue"
    inp = Integer(gets)
    if inp == 1
        puts "Enter value"
        val = Integer(gets)
        enqueue(val,queue)                  #First In
    elsif inp == 2
        val = dequeue(queue)                #First Out   
        puts val
        break if val == "underflow"
    end
end
