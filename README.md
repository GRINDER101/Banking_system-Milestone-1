# Banking_system-Milestone-1
Requirement:
1. Provide a secure login process whereby the user will need to verify their iden ty to access
their account(s)
Specifica on:
As this project is in a development stage, you will need to set a userID and PIN yourself in order to test the login process. Therefore, your program should perform the following:
● You should create test variables that you will use for milestones 1-4. Declare and ini alise variables called testID and testPIN. testID should be an integer variable and should be six digits long. testPIN, that should be an integer variable and four digits long
The specifica ons for the login process are the following:
● Request the user to enter a userID. Complete a logical check to see if the inpu ed userID matches the stored testID you created in the previous step
o If the IDs do not match, provide the user a further 2 a empts using a For Loop sequence
▪ Each  me the userID does not match, display an informa ve message. A er 3 unsuccessful a empts you should display a message to say your account has been blocked and then proceed to exit the program
● A er a successful ID match, request the user to enter their PIN
o Perform a length check to make sure PIN entered meets the four digit requirement
o Perform a Do While Loop to provide the user a maximum of 3 a empts to enter their
PIN
▪ As before, display informa ve messages where appropriate. You should
countdown the number of tries le  a er each a empt
▪ If the PIN is not correct a er three tries, display a message to say your
account has been blocked and exit the program
o If the PIN number is correct, display a message to say you have successfully logged in
