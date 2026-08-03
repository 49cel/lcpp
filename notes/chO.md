# chO - bit manipulation

### O1 - bit flags and bit manipulation via std::bitset
- - -
- modifying individual bits within an object is called **bit manipulation**
- instead of viewing objects holding a single value, we can treat each bit in that object as an independent boolean value, when individual bits of an object are used as boolean values, the bits are called **bit flags**
- a bit holding `0` is said to be false, off or not set
- a bit holding `1` is said to be true, on or set
- when a bit is changed from `0` to `1` or `1` to `0`, we say that it has been flipped or inverted
- note: in computing, a **flag** is a value that signals when some condition is true in a program, with a bit flag, the value of true means the condition exists
- in bit manipulation, it is recommended to use unsigned integers or std::bitset unambiguously 
- when given a sequence of bits, they are typically numbered from right to left, where each number denotes a **bit position**
- `std::bitset` provides useful member functions other than printing values in binary, like:
    1. `test()` - this allows us to check whether a bit is 0 or 1
    2. `set()` - this allows us to turn a bit on (does nothing if already on)
    3. `reset()` - this allows us to turn a bit off (does nothing if already off)
    4. `flip()` - this allows us to flip a bit value from 0 to 1 or 1 to 0
    5. `size()` - this returns the number of bits in the bitset
    6. `count()` - counts number of bits that are set to `true`
    7. `all()` - returns a boolean indicating whether **all** bits are set to `true`
    8. `any()` - returns a boolean indication whether **any** bits are set to `true`
    9. `none()` - returns a boolean indicating whether no bits are set to `true`
- `std::bitset` will use either 4 or 8 bytes of memory, even though it only needs 1 byte to store 8 bits, thus it is mostly used for convenience rather than memory optimization

### O2 - bitwise operators
- - -
- in cpp we have six bit manipulation operators, called **bitwise** operators, they are non-modifying operators so they do not modify their operands unless explicitly stated

![img.png](img_19.png)

- 