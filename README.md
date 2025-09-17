# Projects1-4 (cpp-boilerplate-v2)

## Student details

- Student name: Aakash Shetty Dammala
- UID: 122031807

## Build and run instructions

1. Clone the repository and enter the project directory:

`cd cpp-boilerplate-v2`

2. Configure the project and export compile commands (creates the `build/` directory):

`cmake -S ./ -B build/ -DCMAKE_EXPORT_COMPILE_COMMANDS=1`

3. (Optional) Create a symlink to `compile_commands.json` in the project root so tools like clangd can find it:

`ln -s build/compile_commands.json compile_commands.json`

4. Build the project:

`cmake --build build/`

5. Run the executables produced in `build/app/`:
	- Problem 9.4: `./build/app/problem9_4`
	- Problem 9.5: `./build/app/problem9_5 -16.127`
