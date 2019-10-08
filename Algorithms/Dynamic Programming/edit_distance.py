def edit_distance(s1, s2):
    t = [[0 for _ in range(len(s2) + 1)] for _ in range(len(s1) + 1)]

    for i in range(len(s1) + 1):
        t[i][0] = i
    for i in range(len(s2) + 1):
        t[0][i] = i

    for i in range(1, len(s1) + 1):
        for j in range(1, len(s2) + 1):
            if s1[i - 1] == s2[j - 1]:
                t[i][j] = t[i - 1][j - 1]
            else:
                t[i][j] = min(t[i - 1][j], t[i][j - 1], t[i - 1][j - 1]) + 1
    return t[len(s1)][len(s2)]


def main():
    test_cases = [
        ("ab", "ab", 0),
        ("short", "ports", 3),
        ("editing", "distance", 5),
        ("a" * 10, "a" * 10, 0),
        ("ab" * 10, "ba" * 10, 2),
    ]
    for test in test_cases:
        string1, string2 = test[0], test[1]
        answer = test[2]
        result = edit_distance(string1, string2)
        print(f'Test case: {string1}, {string2}')
        print(f'Result is {result} and it is correct - {result == answer}')


if __name__ == "__main__":
    main()