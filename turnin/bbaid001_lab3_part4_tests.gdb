# Test file for "Lab3_bitManip"


# commands.gdb provides the following functions for ease:
#   test "<message>"
#       Where <message> is the message to print. Must call this at the beginning of every test
#       Example: test "PINA: 0x00 => expect PORTC: 0x01"
#   checkResult
#       Verify if the test passed or failed. Prints "passed." or "failed." accordingly, 
#       Must call this at the end of every test.
#   expectPORTx <val>
#       With x as the port (A,B,C,D)
#       The value the port is epected to have. If not it will print the erroneous actual value
#   setPINx <val>
#       With x as the port or pin (A,B,C,D)
#       The value to set the pin to (can be decimal or hexidecimal
#       Example: setPINA 0x01
#   printPORTx f OR printPINx f 
#       With x as the port or pin (A,B,C,D)
#       With f as a format option which can be: [d] decimal, [x] hexadecmial (default), [t] binary 
#       Example: printPORTC d
#   printDDRx
#       With x as the DDR (A,B,C,D)
#       Example: printDDRB

echo ======================================================\n
echo Running all tests..."\n\n
# Add tests below
test "PINA: 0x00, PINB: 0x00, PINC: 0x00"
setPINA 0x00
setPINB 0x00
continue 2
expectPORTC 0x00
checkResult

test "PINA: 0x42, PINB: 0x04, PINC: 0x20"
setPINA 0x42
setPINB 0x04
continue 2
expectPORTC 0x20
checkResult

test "PINA: 0xA5, PINB: 0x0A, PINC: 0x50"
setPINA 0xA5
setPINB 0x0A
continue 2
expectPORTC 0x50
checkResult



# Report on how many tests passed/tests ran
set $passed=$tests-$failed
eval "shell echo Passed %d/%d tests.\n",$passed,$tests
echo ======================================================\n
