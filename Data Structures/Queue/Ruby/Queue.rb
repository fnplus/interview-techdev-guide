#CREATED BY Ankur Pandey (Github : AnkDos)


def enqueue(val,queue)
    queue << val
end

def dequeue(queue)
    if queue.empty? == true
        "underflow"
    else
        queue.pop
    end
end

queue = Queue.new

while true
    puts "Select Operation(1 or 2)"
    puts "1.Enqueue"
    puts "2.Dequeue"
    inp = Integer(gets)
    if inp == 1
        puts "Enter value"
        val = Integer(gets)
        enqueue(val,queue)
    elsif inp == 2
        val = dequeue(queue)
        puts val
        break if val == "underflow"
    end
end
