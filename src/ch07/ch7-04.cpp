// assume this consists of all the header inclusion, still in the global namespace

// Non-constant global variables
int g_x;                 // defines non-initialized global variable (zero initialized by default)
int g_x {};              // defines explicitly value-initialized global variable
int g_x { 1 };           // defines explicitly initialized global variable

// Const global variables
const int g_y;           // error: const variables must be initialized
const int g_y { 2 };     // defines initialized global const

// Constexpr global variables
constexpr int g_y;       // error: constexpr variables must be initialized
constexpr int g_y { 3 }; // defines initialized global constexpr

// this is all in the global namespace

// main() can start from here, unless you have functions you want to add