Template for oturpe style avr project.

## Usage

1. Copy *template* directory as root folder of the new project
2. Rename *.gitignore-template* as *.gitignore*. This step is necessary so that git source control for template itself does not interpret the file
3. Rename template strings _oturpe-avr-project-template_ with the project name in the following places:
    1. Name of source file *src/oturpe-avr-project-template.cpp*
    2. Name of KiCad project file *hardware/oturpe-avr-project-template.pro*
    2. Field _projectName_ in build system configuration file *avr-config*
4. Configure avr model used by editing *avr-config* file

## Project structure

The project structure is explained in *README.md* in template directory.
