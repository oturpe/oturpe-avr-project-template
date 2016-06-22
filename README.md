Template for oturpe style avr project.

## Usage

1. Copy *template* directory as root folder of the new project
2. Rename *.gitignore-template* as *.gitignore*. This step is necessary so that git source control for template itself does not interpret the file
3. Rename template strings with the project name (TODO: Which files?)
4. Configure avr model used by editing *avr-config* file


## Directory structure

1.  *hardware* contains schematic and printed circuit board layout of
    device hardware.
2.  *hardware*/*production-files* is the target for production files generated
    by KiCad. No files saved there are stored to source control.
3.  *src* contains firmware source code
4.  *target* contains compiled firmware and intermediate files. No files saved
    there are stored to source control.
