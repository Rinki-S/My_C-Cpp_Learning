do {
        a = 1.0 / i;
        sum = sum + n * a;
        i = i + 3;
        n = -n;
    } while (a > eps);