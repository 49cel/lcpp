void foo(int x = 0)
{
}

void foo(double d = 0.0)
{
}

int main()
{
    foo(); // ambiguous function call

    return 0;
}

// refer to lesson 11.5 on lcpp to learn more about default arguments and their caveats
