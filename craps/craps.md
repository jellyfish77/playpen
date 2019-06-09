# Craps

## Code

```cpp
int rand_lim(int limit) {
/* return a random number between 0 and limit inclusive.
 */

    int divisor = RAND_MAX/(limit+1);
    int retval;

    do {
        retval = rand() / divisor;
    } while (retval > limit);

    return retval;
}
```

## UML

![Example UML](https://yuml.me/diagram/scruffy/class/[Customer]->[Billing Address])
