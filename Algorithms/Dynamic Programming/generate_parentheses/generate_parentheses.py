def generate_parentheses(n):
    memo = {}
    return _generate_parentheses(n * 2, 0, memo)


def _generate_parentheses(n, l, memo):
    if (n, l) in memo: return memo[(n, l)]
    if n == 0: return ['']

    out = []
    if l > 0: out.extend(')' + p for p in _generate_parentheses(n - 1, l - 1, memo))
    if n > l: out.extend('(' + p for p in _generate_parentheses(n - 1, l + 1, memo))

    memo[(n, l)] = out
    return out


if __name__ == '__main__':
    n = 0
    expected = ['']
    actual = generate_parentheses(n)
    assert(expected == actual)

    n = 1
    expected = ['()']
    actual = generate_parentheses(n)
    assert(expected == actual)

    n = 2
    expected = ['()()', '(())']
    actual = generate_parentheses(n)
    assert(expected == actual)

    n = 3
    expected = ['()()()', '()(())', '(())()', '(()())', '((()))']
    actual = generate_parentheses(n)
    assert(expected == actual)
