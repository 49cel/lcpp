/* a c++ joke: what's the best naming prefix for a global variable?
 * answer: //
 * we genuinely got the whole squad laughing */

int g_x{ initX() };   // runs first
int g_y{ initY() };   // runs second

int initX() { return g_y; }   // tries to use g_y, but g_y hasn't been set yet!
int initY() { return 5; }