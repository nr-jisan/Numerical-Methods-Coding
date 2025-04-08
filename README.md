# 🧮 Numerical Methods in C

Welcome to my **Numerical Methods** repository! This collection of C programs provides efficient implementations of several classical numerical methods used to solve mathematical problems involving equations, interpolation, differentiation, and integration.

These methods are essential for anyone studying numerical analysis or working with computational mathematics. Each method is written in **pure C** for maximum control and efficiency.

---

## 📚 Table of Contents

| **#** | **Method**                             | **Description**                                                       |
|-------|----------------------------------------|-----------------------------------------------------------------------|
| 1     | [Bisection Method](#1-bisection-method)       | A root-finding method that bisects an interval to approximate the root. |
| 2     | [False Position Method](#2-false-position-method) | Improves bisection with secant line interpolation.                      |
| 3     | [Newton-Raphson Method](#3-newton-raphson-method) | An iterative method using function values and derivatives.             |
| 4     | [Lagrange Interpolation](#4-lagrange-interpolation) | Polynomial interpolation for estimating values between known points.   |
| 5     | [Trapezoidal Rule](#5-trapezoidal-rule)     | Approximates definite integrals using trapezoids.                      |
| 6     | [Simpson's 1/3 Rule](#6-simpsons-13-rule)  | Uses quadratic polynomials for more accurate integration.              |
| 7     | [Simpson's 3/8 Rule](#7-simpsons-38-rule)   | A higher-order integration method using cubic polynomials.            |
| 8     | [Euler's Method](#8-eulers-method)       | A basic numerical method for solving ordinary differential equations.  |
| 9     | [Runge-Kutta 4th Order Method](#9-runge-kutta-4th-order-method) | A higher-accuracy method for solving ODEs.                            |

---

## 📌 Method Descriptions

### 1. Bisection Method
A simple, robust root-finding method that repeatedly bisects an interval and selects the subinterval in which a root lies.

### 2. False Position Method
A variation of the bisection method that uses the secant line to approximate the root more effectively than simple bisection.

### 3. Newton-Raphson Method
An iterative technique that uses the function value and its derivative to find roots of equations more efficiently.

### 4. Lagrange Interpolation
An interpolation technique for constructing a polynomial that passes through a set of data points, useful for estimating intermediate values.

### 5. Trapezoidal Rule
Approximates the area under a curve by dividing the region into trapezoids and summing their areas. A simple and effective method for numerical integration.

### 6. Simpson's 1/3 Rule
A more accurate integration method that approximates the integrand with quadratic polynomials.

### 7. Simpson's 3/8 Rule
An extension of Simpson's 1/3 rule, using cubic polynomials for even higher precision in integration.

### 8. Euler's Method
A simple and intuitive approach to solving ordinary differential equations by using step-by-step approximations.

### 9. Runge-Kutta 4th Order Method
A widely used and highly accurate method for solving ordinary differential equations, providing a much higher level of precision compared to Euler’s method.

---

## 💻 How to Run the Code

### 🔧 Prerequisites

- **C Compiler** (e.g., GCC)
- Basic knowledge of numerical methods
- A terminal/command prompt to execute the code

### ▶️ Compile and Run the Programs

1. Open your terminal or command prompt.
2. Navigate to the directory containing the `.c` file you want to run.
3. Compile the C file using:

    ```bash
    gcc method_name.c -o method_name
    ```

4. Run the compiled program:

    ```bash
    ./method_name
    ```

    Replace `method_name.c` with the actual file name of the method you want to run.

---

## 📁 Folder Structure

All methods are neatly organized into individual `.c` files. Below is the structure of the repository:

```
numerical-methods/
│
├── bisection.c
├── false_position.c
├── newton_raphson.c
├── lagrange.c
├── trapezoidal.c
├── simpson_one_third.c
├── simpson_three_eight.c
├── euler.c
├── runge_kutta_4.c
└── README.md
```

Each method is implemented in its own `.c` file for better modularity and easier testing.

---

## 🌟 Support the Project

If you find this repository useful, please consider giving it a ⭐ to show your support!

Your star helps others discover this repository and encourages me to keep improving it.

---

## ✍️ Author

**Naimur Rahman Jisan**  
- Passionate about computational mathematics and C programming.  
- Dedicated to learning, coding, and sharing knowledge.

Feel free to reach out to me if you have any questions or suggestions for improvement!

---

## 🔧 License

This project is licensed under the MIT License. See the LICENSE file for more details.

---

## ✨ Thank You!

I hope you find these numerical methods helpful for your studies or projects. Feel free to contribute, improve the code, or use it as a reference. Happy coding! 🚀

