# Project Structure

``` sh
CinderProjectTemplate/
│
├── cmake/                     # Custom CMake modules
│   └── FindMyDependency.cmake # Example of custom CMake module
├── scripts/                   # Build, deploy, and utility scripts
│   ├── build.sh               # Shell script to build the project
│   └── deploy.sh              # Shell script to deploy the project
├── docs/                      # Documentation files
│   ├── index.md               # Main documentation file
│   └── api/                   # API documentation
├── assets/                    # Media assets (images, shaders, etc.)
│   ├── shaders/
│   └── images/
├── include/                   # Header files
│   └── MyProject.h            # Main project header
├── src/                       # Source files
│   └── MyProject.cpp          # Main project source
├── lib/                       # External libraries (if needed)
├── blocks/                    # Cinderblocks (modular components for Cinder)
├── tests/                     # Unit tests
│   ├── CMakeLists.txt         # CMake configuration for tests
│   └── test_MyProject.cpp     # Example unit test
├── third_party/               # Third-party libraries
│   └── README.md              # Documentation for third-party libraries
├── tools/                     # Developer tools (e.g., code formatters, linters)
│   └── clang-format           # Code formatting configuration
├── .vscode/                   # VSCode configuration (if using VSCode)
│   ├── launch.json            # Debug configurations
│   └── tasks.json             # Build tasks
├── .github/                   # GitHub configuration files
│   └── workflows/
│       └── ci.yml             # GitHub Actions CI configuration
├── .gitignore                 # Git ignore file
├── CMakeLists.txt             # CMake build configuration
├── README.md                  # Project documentation
├── LICENSE                    # License file
└── CONTRIBUTING.md            # Guidelines for contributing to the project
```