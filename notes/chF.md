# chF - constexpr functions

### F1 - constexpr functions
- - - 
- a **constexpr function** is a function that is allowed to be called in a constant expression
- to make a function a constexpr function, we simply use the constexpr keyword in front of the function's return type
- constexpr functions can be evaluated at compile time, if a required constant expression contains a constexpr function call, the constexpr function must evaluate at compile time
- to evaluate at compile time, these two things are required:
    1. the call to the constexpr function must have arguments that are known at compile time (they are constant expressions)
    2. all statements and expressions within the constexpr function must be evaluatable at compile time
- note that constexpr functions can also be evaluated at runtime, but doing so will result in them returning a non-constexpr value. 

### F2 - constexpr functions (part 2)
- - -
- you might expect that a constexpr function would evaluate at compile time whenever possible, but any constexpr function that is part of a non-required constant expression may be evaluated at either compile time or runtime
- the compile time evaluation of constexpr functions is only guaranteed when a constant expression is required 
- the core idea here is that a function being marked `constexpr` is a promise that it might be able to run at compile time, not a guarantee that it actually will. whether it actually gets compile time evaluation depends on context.
- note that the parameters of a constexpr function are not implicitly constexpr, and they cannot be declared as constexpr either
- when using the `consteval` keyword, you remove the flexibility of a function to be able to get evaluated at runtime, because it is now forced to evaluate at compile time

### F3 - constexpr functions (part 3) and consteval
- - -
- the `consteval` keyword is used to indicate that a function **must** evaluate at compile time, otherwise a compile error will result. such functions are called **immediate functions**

