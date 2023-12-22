    .section .note.GNU-stack,""
    .global my_strlen             
    .text                         

my_strlen:

    mov $0, %r10               # Initialize r10 as the length accumulator
    mov $0, %r11               # Initialize r11 as the index counter
    
    jmp check_end              # Jump to check_end to handle empty strings

loop:

    mov %rdi, %r8              # Copy the string address in rdi to r8 to preserve the string index
    mov %r11, %rax             # Copy the index to rax
    add %r8, %rax              # Add the current index and string address to get the current byte

    movb (%rax), %r9b          # Move the lower 8 bits to r9b to test the byte
    and $0b11000000, %r9b      # Bitwise AND to check if the first 2 bits are 10xxxxxx
    cmp $0b10000000, %r9b
    je skip                    # If equal, it is a continuation byte, jump to skip

    add $1, %r10               # Else, add 1 to the byte accumulator as well

skip:

    add $1, %r11               # Add 1 to the index, but not to the byte accumulator, to skip continuation bytes

check_end:

    mov %rdi, %r8              # Preserve the string address in r8
    mov %r11, %rax             # Copy the index to rax
    add %r8, %rax              # Add the current index and string address to get the current byte

    cmpb $0, (%rax)            # Check if the current byte is the null terminator byte
    jne loop                   # If not null, continue the loop

    mov %r10, %rax             # If null, move the accumulated byte count to the return register
    ret
    



