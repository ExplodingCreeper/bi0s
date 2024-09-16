LEVEL : 0 to 1
Used SSH to connect to the server with the credentials provided.
Found the password for the next level in a file called readme located in the home directory.
Password: ZjLjTmM6FvvyRnrb2rfNWOZOTa6ip5If

LEVEL : 1 to 2
Connected to the server using the password from Level 1.
Located a file named - in the home directory.
Used cat ./- to read the file and obtain the password.
Password: 263JGJPfgU6LtdEvgfWU1XP5yac29mFx

LEVEL : 2 to 3
Found a file named spaces in this filename in the home directory.
Used cat with quotes around the filename to read the file and obtain the password.
Password: MNk8KNH3Usiio41PRUEoDFPqfxLPlSmx

LEVEL : 3 to 4
Noted that the password was hidden inside a file named .hidden.
Used ls -a to reveal hidden files.
Used cat .hidden to read the file and obtain the password.
Password: 2WmrDFRmJIq3IPxneAaMGhap0pFhF3NJ

LEVEL : 4 to 5
Discovered the password hidden within a human-readable file in the inhere directory.
Used file ./* to identify the correct file.
Used cat to read the file and obtain the password.
Password: 4oQYVPkxZOOEOO5pTW81FB8j8lxXGUQw

LEVEL : 5 to 6
Found the password in a file that was exactly 1033 bytes in size.
Used find command with the -size option to locate the file.
Used cat to read the file and obtain the password.
Password: HWasnPhtq9AVKe0dmk45nxy20cvUa6EG

LEVEL : 6 to 7
Discovered a file containing the password within a directory tree.
Used find with the -size 33c option to locate the file.
Used cat to read the file and obtain the password.
Password: morbNTDkSW6jIlUc0ymOdMaLnOlFVAaj

LEVEL : 7 to 8
The password was stored in a file that was readable only by the bandit7 user.
Used grep to search for the password among the files in the data.txt.
Found the password with grep -E "millionth" data.txt.
Password: dfwvzFQi4mU0wfNbFOe9RoWskMLg7eEc

LEVEL : 8 to 9
The password was located in a file that contained several million lines.
Used sort data.txt | uniq -u to find the unique line with the password.
Password: 4CKMh1JI91bUIZZPXDqGanal4xvAg0JM

LEVEL : 9 to 10
The password was stored in a file having = character.
Used grep -a == data.txt and obtained the password.
Password: FGUW5ilLVJrxX9kMYMmlN4MgbpfMiqey

LEVEL : 10 to 11
The password was stored in a base64 encoded file.
Used base64 -d data.txt to decode the file and obtained the password.
Password: dtR173fZKb0RRsDFSGsg2RWnpNVj3qRr

LEVEL : 11 to 12
Found the password in a file encoded using ROT13.
Used cat data.txt | tr 'A-Za-z' 'N-ZA-Mn-za-m' to decode the text and reveal the password.
Password: 7x16WNeHIi5YkIhWsfFIqoognUTyj9Q4

LEVEL : 12 to 13
The password was stored in a compressed file that had been repeatedly compressed.
Used multiple cat, xxd, bzip2, gzip, tar, and zcat commands to decompress the file step-by-step.
Finally extracted the password from the file.
Password: FO5dwFsc0cbaIiH0h8J2eUks2vdTDwAn

LEVEL : 13 to 14
The password of this level was accessed from level 14.
used ls and got a private key and used that to connect to level 14. Obtained the password using cat.
Password: MU4VWeTyJk8ROof1qqmcBPaLh7lDCPvS

LEVEL : 14 to 15
The password was stored on a server listening on port 30000.
Used nc localhost 30000 to connect to the server.
The server returned the password for the next level.
Password: 8xCjnmgoKbGLhHFAZlGE5Tmu4M2tKJQo

LEVEL : 15 to 16
Connected to port 30001 and received the password for the next level after sending the current level's password.
Used openssl s_client to handle the SSL connection.
Password: kSkvUpMQ7lBYyCM4GBPvCvT1BfWRy0Dx

LEVEL : 16 to 17
The password was stored in an SSH key for the bandit17 user.
Used openssl s_client -connect localhost:31790 -quiet to obatin a private key.
Password: it is a private key

LEVEL : 17 to 18
Found the password in a file named passwords.new.
Used diff passwords.old passwords.new to identify the new password.
Password: x2gLTTjFwMOhQ8oWNbMN362QKxfRqGlO

LEVEL : 18 to 19
The password was stored in a directory that automatically deleted any files placed inside it.
Used nano /tmp/tempfile to create a script that would retrieve the password from a file and then executed it.
Password: cGWpMaKXVwDUNgPAVJbWYuGHVn9zl3j8

LEVEL : 19 to 20
Discovered the password in the file /etc/bandit_pass/bandit20.
Used ./bandit20-do cat /etc/bandit_pass/bandit20 to execute the command as bandit20 and read the password.
Password: 0qXahG8ZjOVMN9Ghs7iOWsCfZyXOUbYO

LEVEL : 20 to 21
used echo along with nc -l 1234 & in aonther terminal ./suconnect 1234
Password: EeoULMCra2q0dSkYj561DX7s1CpBuOBt

LEVEL : 21 to 22
used cat to find out a temp file and obtained the password.
Password: tRae0UfB9v0UzbCdn9cY0gQnds9GF58Q

LEVEL : 22 to 23
used cat to find out a temp file and from the temp file it gave the commands and obatined the password.
Password: 7db97df393f40ad1691b6e1fb03d53eb