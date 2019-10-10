#include <iostream>
#include <stack>
#include <string>

struct Bracket {
    Bracket(char type, int position):
        type(type),
        position(position)
    {}

    bool Matchc(char c) {
        if (type == '[' && c == ']')
            return true;
        if (type == '{' && c == '}')
            return true;
        if (type == '(' && c == ')')
            return true;
        return false;
    }

    char type;
    int position;
};

int main() {
    std::string text;
    getline(std::cin, text);
    bool flag = false;

    std::stack <Bracket> opening_brackets_stack;
    for (int position = 0; position < text.length(); ++position) {
        char next = text[position];

        if (next == '(' || next == '[' || next == '{') {
            opening_brackets_stack.push(Bracket(next, position));
        }

        if (next == ')' || next == ']' || next == '}') {
            if(!opening_brackets_stack.empty()) {
                auto L = opening_brackets_stack.top();
                if(!L.Matchc(next)) {
                    std::cout << "False" << std::endl;
                    flag = true;
                    break;
                }
                else opening_brackets_stack.pop();
            }
        else {
            std::cout << position+1 << std::endl;
            flag = true;
            break;
        }

        }
    }
    if(opening_brackets_stack.empty() && !flag) {
        std::cout << "True\n";
    }
    else if(!flag) {
        auto L = opening_brackets_stack.top();
        std::cout << "False\n" << std::endl;
    }

    return 0;
}