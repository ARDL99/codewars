def rot13(message):
    result = ""
    for char in message:
        #checks if string only contains alphabetical characters
        if char.isalpha():
            #checks for uppercase characters inside string
            if char.isupper():
                #changes character to Unicode code point representation
                ascii_offset = ord('A')
                #rotates a single character 13 positions to the right of the alphabet for uppercase letters
                rotated_char = chr((ord(char) - ascii_offset + 13) % 26 + ascii_offset)
            else:
                ascii_offset = ord('a')
                #rotates a single character 13 positions to the right of the alphabet for lowercase letters
                rotated_char = chr((ord(char) - ascii_offset + 13) % 26 + ascii_offset)
            result += rotated_char
        else:
            result += char
    return result