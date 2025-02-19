
# miniEDE

A lightweight and efficient terminal-based code editor.

## What is miniEDE?

**miniEDE** is a powerful, highly customizable, and cross-platform terminal code editor and kernel, specifically designed to provide an efficient and streamlined experience for developers. It offers advanced features like snippets, shortcuts, and an extensible architecture, making it suitable for both beginner users and experienced programmers. 

Whether you're looking for a lightweight editor or a robust kernel to handle complex workflows, **miniEDE** is a fast, scalable solution tailored to meet your needs.

## Purpose and Vision

**miniEDE** was conceived as a simple yet powerful code editor tailored specifically for **C/C++ development**, inspired by the **MS-DOS command-line interface**. The original project name, **TurboDOS**, was a nod to DOS, but it was later renamed to **nanoEDE** to avoid confusion with the widely-used **nano** editor in Bash.

After further refinement, **miniEDE** emerged as the name that truly embodies the project’s essence: lightweight, efficient, and highly customizable. The focus of **miniEDE** is to provide developers with an editor that prioritizes performance and simplicity, ensuring a smooth coding experience without unnecessary distractions.

## Key Features

- **Lightweight & Fast**: Built for efficiency, **miniEDE** ensures that your coding workflow is never slowed down by unnecessary bloat or features.
  
- **Cross-Platform**: Designed to run on Windows, Linux, and macOS, making it accessible for a wide range of developers.

- **Manual Event System**: **miniEDE** uses a custom-built event handling system, allowing for precise control over keyboard and mouse input. This ensures that user interactions are fast and responsive.

- **Highly Customizable**: With support for snippets, customizable keyboard shortcuts, and an extensible architecture, **miniEDE** can be tailored to suit the needs of any developer.

- **Simple Menu System**: Easy-to-use and intuitive menu design, providing quick access to the most common functions while keeping the interface clean and simple.

- **Efficient Workflow**: Designed to help developers focus on their code by providing an efficient environment, free from distractions or performance hindrances.

## Technical Concepts

### Event System

**miniEDE** employs a **manual event system** built from the ground up. This means that rather than relying on pre-built event handling libraries, all user interactions—such as keyboard presses, mouse clicks, and window management—are processed in a custom framework. This allows for precise control over the editor’s responsiveness and behavior, especially in terminal environments.

### Customization and Extensibility

The editor offers extensive customization options, allowing developers to create **snippets** for rapid coding, define their own **keyboard shortcuts**, and adjust the **editor settings** as needed. This makes it suitable for a wide range of coding styles and personal preferences.

### Kernel Integration

At its core, **miniEDE** also functions as a **kernel**, giving developers more control over the environment in which their code runs. This feature is designed to be scalable and modular, enabling **miniEDE** to evolve into an even more powerful tool in the future.

## Getting Started

To get started with **miniEDE**, simply clone the repository and follow the setup instructions for your platform.

### Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/KiamMota/miniede.git
   ```

2. Build the project:
   ```bash
   cd miniEDE
   make
   ```

3. Run the editor:
   ```bash
   ./miniEDE
   ```

## Conclusion

**miniEDE** is designed to be an efficient, customizable, and responsive tool for developers who prioritize performance and simplicity. Whether you need a lightweight editor for quick edits or a robust kernel for complex workflows, **miniEDE** provides the tools you need to be more productive.

Stay tuned for future updates and new features!
