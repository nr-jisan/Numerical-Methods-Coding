# 🧮 Numerical Methods in C

![Numerical Methods](https://readme-typing-svg.demolab.com?font=Fira+Code&size=22&pause=1000&color=00F7FF&center=true&vCenter=true&multiline=true&width=700&height=70&lines=🔢+Implemented+Numerical+Methods+in+C!;🎯+By+Md.+Naimur+Rahman+Jisan!)

Welcome to my **Numerical Methods** repository! This collection of C programs provides efficient implementations of several classical numerical methods used to solve mathematical problems involving equations, interpolation, differentiation, and integration.

These methods are essential for anyone studying numerical analysis or working with computational mathematics. Each method is written in **pure C** for maximum control and efficiency.

---

## 📚 Table of Contents

| **#** | **🧠 Method**                             | **🎯 Purpose**                                                    | **🧮 Category**         |
|-------|----------------------------------------|----------------------------------------------------------------|----------------------|
| 1     | [Bisection Method](https://github.com/nr-jisan/Numerical-Methods-Coding/blob/ab39f71b214bc08cd95e47819dbbc4a9855ae758/Bisection.c)       | Root approximation via interval bisection                     | Root Finding         |
| 2     | [False Position Method](https://github.com/nr-jisan/Numerical-Methods-Coding/blob/ab39f71b214bc08cd95e47819dbbc4a9855ae758/falsePosition.c) | Root finding using secant-line interpolation                  | Root Finding         |
| 3     | [Newton-Raphson Method](https://github.com/nr-jisan/Numerical-Methods-Coding/blob/ab39f71b214bc08cd95e47819dbbc4a9855ae758/newtonRaphson.c) | Root approximation using derivatives                         | Root Finding         |
| 4     | [Lagrange Interpolation](https://github.com/nr-jisan/Numerical-Methods-Coding/blob/6073e0582ce7706606d4854ff21ca7a5d85f26ce/Lagrange.c) | Polynomial interpolation using data points                    | Interpolation        |
| 5     | [Trapezoidal Rule](https://github.com/nr-jisan/Numerical-Methods-Coding/blob/7bea88036bd73973f2384ee4ce912d87f61efbb4/Trapezoidal.c)     | Estimate area under a curve using trapezoids                  | Numerical Integration|
| 6     | [Simpson's 1/3 Rule](https://github.com/nr-jisan/Numerical-Methods-Coding/blob/7bea88036bd73973f2384ee4ce912d87f61efbb4/Simpson_1_3.c)  | Quadratic polynomial-based integration                        | Numerical Integration|
| 7     | [Simpson's 3/8 Rule](https://github.com/nr-jisan/Numerical-Methods-Coding/blob/7bea88036bd73973f2384ee4ce912d87f61efbb4/Simpspn_3_8.c)   | Cubic polynomial-based integration                            | Numerical Integration|
| 8     | Euler's Method       | Solving ODEs using step-by-step approximation                 | Differential Equations|
| 9     | Runge-Kutta 4th Order Method | High-accuracy ODE solver                           | Differential Equations|

---

## 📌 Method Descriptions

### 1️⃣ Bisection Method 🎯
A simple, robust root-finding method that repeatedly bisects an interval and selects the subinterval in which a root lies.

### 2️⃣ False Position Method 🔍
A variation of the bisection method that uses the secant line to approximate the root more effectively than simple bisection.

### 3️⃣ Newton-Raphson Method 🚀
An iterative technique that uses the function value and its derivative to find roots of equations more efficiently.

### 4️⃣ Lagrange Interpolation 📊
An interpolation technique for constructing a polynomial that passes through a set of data points, useful for estimating intermediate values.

### 5️⃣ Trapezoidal Rule 📐
Approximates the area under a curve by dividing the region into trapezoids and summing their areas. A simple and effective method for numerical integration.

### 6️⃣ Simpson's 1/3 Rule 🧠
A more accurate integration method that approximates the integrand with quadratic polynomials.

### 7️⃣ Simpson's 3/8 Rule 🔢
An extension of Simpson's 1/3 rule, using cubic polynomials for even higher precision in integration.

### 8️⃣ Euler's Method ⚖️
A simple and intuitive approach to solving ordinary differential equations by using step-by-step approximations.

### 9️⃣ Runge-Kutta 4th Order Method 👀
A widely used and highly accurate method for solving ordinary differential equations, providing a much higher level of precision compared to Euler’s method.

---

## 💻 How to Run the Code

### 🔧 Prerequisites

- ✅ **C Compiler** (e.g., GCC)
- 📘 Basic knowledge of numerical methods
- 🖥️ A terminal/command prompt to execute the code

### ▶️ Compile and Run the Programs

1. 📂 Open your terminal or command prompt.
2. 📂 Navigate to the directory containing the `.c` file you want to run.
3. 🛠️ Compile the C file using:

    ```bash
    gcc method_name.c -o method_name
    ```

4. 🏃 Run the compiled program:

    ```bash
    ./method_name
    ```

    🔁 Replace `method_name.c` with the actual file name of the method you want to run.

---


## 🌟 Support the Project

If you find this repository useful, please consider giving it a ⭐ to show your support!

Your star helps others discover this repository and encourages me to keep improving it.

---

## ✍️ Author

**👨‍💻 Md. Naimur Rahman Jisan**  

> _"Code is like humor. When you have to explain it, it’s bad." – Cory House_

---



## ✨ Thank You!

I hope you find these numerical methods helpful for your studies or projects. Feel free to contribute, improve the code, or use it as a reference. Happy coding! 🚀💡📊

