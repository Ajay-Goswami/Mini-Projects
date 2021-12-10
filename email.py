# Python code to illustrate Sending mail from 
# your Gmail account 
import smtplib
  
# creates SMTP session
s = smtplib.SMTP('smtp.gmail.com', 587)
  
# start TLS for security
s.starttls()
  
# Authentication
#Enter Your Email in place of email and password in place of password.
#And make sure you have enabled permission from google to login from unknown sources
s.login("your_email", "your_password")
  
# message to be sent
#write your message to send in between ""
message = ""
while True:
    # sending the mail
    s.sendmail("your_email", "victim_email", message)
 
  
# terminating the session
s.quit()