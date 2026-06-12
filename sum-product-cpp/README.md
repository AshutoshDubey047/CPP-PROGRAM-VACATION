# Sum and Product Calculator

This project is a simple C++ application that calculates the sum and product of an array of integers. It demonstrates basic array manipulation and serves as an example of how to structure a C++ project with separate source, include, and test directories.

## Project Structure

```
sum-product-cpp
├── src
│   ├── sum&product.cpp      # Contains the logic for calculating sum and product
│   └── main.cpp             # Entry point for the application
├── include
│   └── array_utils.h        # Header file for array utility functions
├── tests
│   └── test_sum_product.cpp  # Unit tests for the sum and product calculations
├── CMakeLists.txt           # CMake configuration file
├── Makefile                 # Build instructions for the project
├── .gitignore               # Files and directories to ignore by Git
└── README.md                # Project documentation
```

## Setup Instructions

1. **Clone the repository:**
   ```
   git clone <repository-url>
   cd sum-product-cpp
   ```

2. **Build the project:**
   You can build the project using either CMake or Make.

   - Using CMake:
     ```
     mkdir build
     cd build
     cmake ..
     make
     ```

   - Using Make:
     ```
     make
     ```

3. **Run the application:**
   After building, you can run the application:
   ```
   ./sum-product-cpp
   ```

## Usage

The application initializes an array of integers and calculates both the sum and product of its elements. You can modify the array in `src/sum&product.cpp` to test with different values.

## Testing

Unit tests are provided in the `tests/test_sum_product.cpp` file. You can run the tests after building the project to ensure that the sum and product calculations are correct.

## Contributing

Feel free to submit issues or pull requests if you have suggestions for improvements or additional features.