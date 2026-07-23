/* How to convert decimal numbers to scientific notation

Use the following procedure:

    Your exponent starts at zero.
    If the number has no explicit decimal point (e.g. 123), it is implicitly on the right end (e.g. 123.)
    Slide the decimal point left or right so there is only one non-zero digit to the left of the decimal.
        Each place you slide the decimal point to the left increases the exponent by 1.
        Each place you slide the decimal point to the right decreases the exponent by 1.
    Trim off any leading zeros (on the left end of the significand)
    Trim off any trailing zeros (on the right end of the significand) only if the original number had no decimal point. We’re assuming they’re not significant. If you have additional information to suggest they are significant, you can keep them.

Here’s some examples:

Start with: 600.410
Slide decimal point left 2 spaces: 6.00410e2
No leading zeros to trim: 6.00410e2
Don't trim trailing zeros: 6.00410e2 (6 significant digits)

Start with: 0.0078900
Slide decimal point right 3 spaces: 0007.8900e-3
Trim leading zeros: 7.8900e-3
Don't trim trailing zeros: 7.8900e-3 (5 significant digits)

Start with: 42030 (no information to suggest the trailing zero is significant)
Slide decimal point left 4 spaces: 4.2030e4
No leading zeros to trim: 4.2030e4
Trim trailing zeros: 4.203e4 (4 significant digits)

Start with: 42030 (assuming you have been told that the trailing 0 is explicitly significant)
Slide decimal point left 4 spaces: 4.2030e4
No leading zeros to trim: 4.2030e4
Keep trailing zeros: 4.2030e4 (5 significant digits)
 */