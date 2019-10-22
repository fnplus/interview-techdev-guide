def euclidean_gcd(a, b):
    while b:
        a, b = b, a % b
    return a


def main():
    print('GCD(1071, 462) = {}'.format(euclidean_gcd(1071, 462)));
    print('GCD(462, 1071) = {}'.format(euclidean_gcd(462, 1071)));
    print('GCD(60, 12) = {}'.format(euclidean_gcd(60, 12)));
    print('GCD(12, 60) = {}'.format(euclidean_gcd(12, 60)));
    print('GCD(50, 3) = {}'.format(euclidean_gcd(527, 23)));
    print('GCD(3, 50) = {}'.format(euclidean_gcd(23, 527)));
    print('GCD(100, 0) = {}'.format(euclidean_gcd(100, 0)));
    print('GCD(0, 100) = {}'.format(euclidean_gcd(0, 100)));
    print('GCD(8, 1) = {}'.format(euclidean_gcd(8, 1)));
    print('GCD(1, 8) = {}'.format(euclidean_gcd(1, 8)));
    print('GCD(1, 1) = {}'.format(euclidean_gcd(1, 1)));
    print('GCD(0, 0) = {}'.format(euclidean_gcd(0, 0)));


if __name__ == '__main__':
    main()
