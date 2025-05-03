# AutoComplete

A lightweight command-line interface (CLI) application that provides fast and efficient word prediction as you type in your terminal. It utilizes a customizable dictionary to enhance your typing workflow.



## 🚀 Getting Started with Autocomplete

This section will guide you on how to build and run the Autocomplete CLI application.

### Prerequisites

* **C++ Compiler:** You'll need a C++ compiler that supports C++11 or higher (like g++).
* **Bash (or a similar shell):** For running the compiled executable.

### 🛠️ Build Instructions

1.  **Compile the Source Code:**

    Open your terminal and navigate to the directory containing the `main.cpp` file. Then, use the following command to compile the program:

    ```bash
    g++ main.cpp -o autocomplete
    ```

    * `g++`: This is the GNU C++ compiler.
    * `main.cpp`: This is assumed to be your main source code file. **(Note: If your main file has a different name, replace `main.cpp` accordingly.)**
    * `-o autocomplete`: This tells the compiler to name the output executable file `autocomplete`.

### 🏃 Running the Application

Once the compilation is successful, you can run the Autocomplete application using the following command in your terminal:

```bash
./autocomplete
```

This will launch the command-line interface.

## ✨ Key Features

* ⚡ **Fast Word Prediction:** Experience rapid and accurate word suggestions as you type, significantly improving your typing speed and reducing errors in the terminal.
* ⚙️ **Customizable Dictionary:** Tailor the word predictions to your specific needs by providing your own dictionary file. This allows you to include specialized vocabulary relevant to your work or interests.
* <0xF0><0x9F><0x97><0x8A>️ **Lightweight CLI App:** Enjoy a fast and efficient command-line tool with minimal resource consumption, ensuring it runs smoothly without impacting your system's performance.

## 🛠️ Usage

To run the Autocomplete application:

```bash
./autocomplete
```

## 📷 Screenshot
![AutoComplete Instantiated](https://github.com/dikshant-mudgal/AutoComplete/blob/068b03941f67f53c053502dd6ea6f578ddd1b36c/RunTime.png)
## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

⚙️ Further Configuration
For example, if you have an option to load a custom dictionary, you might add:

Bash

./autocomplete --dictionary custom_words.txt

Refer to the help documentation (./autocomplete --help or -h) for a full list of available options.

❓ Troubleshooting
(Add this section if you anticipate common issues users might encounter.)

For example:

"Permission denied" error: If you get this error when trying to run ./autocomplete, you might need to make the file executable. Use the command: chmod +x autocomplete
Note: This application requires a C++11 compliant compiler or higher. Please ensure your development environment meets this requirement.
