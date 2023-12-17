'''
This assignment grabs a user input and turns it into a file to be written to and read.
'''
import re


# Function that determines a proper file name from user
def userFileName():
    fname = input('Please enter a filename: ')

    # Check for proper naming, loop if incorrect
    while True:
        if re.match('[^a-zA-Z_]', fname):
            print('File name only can start with Alphabets or "_".')
        elif re.fullmatch('.*\..*\W.*', fname):  # pylint: disable = anomalous-backslash-in-string
            print('File name can contain only Alphabets, digits and "_".')
        elif re.fullmatch('.*\W.*\..*', fname):  # pylint: disable = anomalous-backslash-in-string
            print('File name can contain only Alphabets, digits and "_".')
        elif not re.fullmatch('.*\..*', fname):  # pylint: disable = anomalous-backslash-in-string
            print('File name needs to have an extension.')
        else:
            break
        fname = input('Please enter a proper filename: ')

    return fname


# Function that adds lines to the file
def addLines(fname):
    with open(fname, 'w') as file:
        # Loop until user does not want to add more lines
        while True:
            sentence = input('Please enter a sentence: ')
            file.write(f'{sentence}\n')

            add = input('Do you want to add more lines? (Y/N) ').lower()
            if add == 'n':
                break


# Function that displays what was written to the file
def readLines(fname):
    print()
    print(f"This is what's entered into file {fname}.")
    print('=============================')
    with open(fname, 'r') as file:
        content = file.readlines()
        for _ in content:
            print(_, end='\r')
    print('=============================')


# Main function to put it all together
def main():
    # Loop to ask for more created files
    while True:
        fname = userFileName()
        addLines(fname)
        readLines(fname)

        play = input('Do you want to create another file? (Y/N) ').lower()

        if play == 'y':
            print("Let's create another file.")
        else:
            break

    print('Thank you for playing!')


# Run the program
main()
