def encrypt(m):
    em = ""
    for c in m:
        if c.isalpha():
            s = 13
            if c.islower():
                em += chr((ord(c) - ord('a') + s) % 26 + ord('a'))
            else:
                em += chr((ord(c) - ord('A') + s) % 26 + ord('A'))
        else:
            em += c
    return em

def decrypt(m):
    dm = ""
    for c in m:
        if c.isalpha():
            s = 13
            if c.islower():
                dm += chr((ord(c) - ord('a') - s) % 26 + ord('a'))
            else:
                dm += chr((ord(c) - ord('A') - s) % 26 + ord('A'))
        else:
            dm += c
    return dm
plaintext = "Hello, this is a plaintext"
encrypted_text = encrypt(plaintext)
print(encrypted_text)
