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

## Build system

You need to have [avrdude][avrdude] installed to build.

1.  Define avr model and programmed used by editing *avr-config* file.
2.  If needed, configure fuses by editing *fuses* script and running it. Fuse
    values can be determined by using e.g.
    [Engbedded fuse calculator][engbedded]. (Or, of course, simply by consulting
    the avr datasheet.)
3.  Compile and upload firmware from *src* directory by running *build* script.

[avrdude]: http://www.nongnu.org/avrdude/
[engbedded]: http://www.engbedded.com/fusecalc/