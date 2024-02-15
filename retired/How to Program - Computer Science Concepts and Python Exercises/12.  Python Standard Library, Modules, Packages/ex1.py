# Part a
import zipfile

# To read contents of a zip file
with zipfile.ZipFile("example.zip", "r") as zip_ref:
    zip_ref.extractall("target_directory")

# To create a new zip file and add files to it
with zipfile.ZipFile("new_archive.zip", "w") as zip_ref:
    zip_ref.write("file_to_compress.txt")

# To add files to an existing zip file
with zipfile.ZipFile("existing_archive.zip", "a") as zip_ref:
    zip_ref.write("another_file_to_compress.txt")

# Part b
import fractions

f1 = fractions.Fraction(3, 4)
f2 = fractions.Fraction(5, 6)

result = f1 + f2
print(f"\n{result}\n")

# Part c
import smtplib
from email.message import EmailMessage

# Create the email message
msg = EmailMessage()
msg["Subject"] = "The subject of your email"
msg["From"] = "Minh.BN232585@sis.hust.edu.vn"
msg["To"] = "Minh.BN232585@sis.hust.edu.vn"
msg.set_content("This is the body of your email.")

# Send the email via an SMTP server
with smtplib.SMTP("smtp.freesmtpservers.com", 25) as smtp:
    smtp.send_message(msg)

# Part d

import urllib.request

url = "https://www.google.com/"
response = urllib.request.urlopen(url)
html = response.read()

print(html)
