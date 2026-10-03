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
