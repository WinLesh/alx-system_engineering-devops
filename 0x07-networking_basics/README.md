Requirements
General
Allowed editors: vi, vim, emacs
All your Bash script files will be interpreted on Ubuntu 20.04 LTS
All your files should end with a new line
A README.md file, at the root of the folder of the project, is mandatory
All your Bash script files must be executable
Your Bash script must pass shellcheck without any error
The first line of all your Bash scripts should be exactly #!/usr/bin/env bash
The second line of all your Bash scripts should be a comment explaining what is the script doing
More Info
The second line of all your Bash scripts should be a comment explaining what is the script doing

For multiple choice question type tasks, just type the number of the correct answer in your answer file, add a new line for every new answer, example:

What is the most important position in a software company?

Project manager
Backend developer
System administrator
sylvain@ubuntu$ cat foo_answer_file
3
sylvain@ubuntu$
Source for question 1 here



Tasks 📃
0. OSI model

0-OSI_model: Text file answering the following questions:
What is the OSI model?
Set of specifications that network hardware manufacturers must respect
The OSI model is a conceptual model that characterizes the communication functions of a telecommunication system without regard to their underlying internal structure and technology.
The OSI model is a model that characterizes the communication functions of a telecommunication system with a strong regard for their underlying internal structure and technology.
How is the OSI model organized?
Alphabetically
From the lowest to the highest level
Randomly
1. Types of network

1-types_of_network: Text file answering the following questions:
What type of network a computer in local is connected to?
Internet
WAN
LAN
What type of network could connect an office in one building to another office in a building a few streets away?
Internet
WAN
LAN
What network do you use when you browse www.google.com from your smartphone (not connected to the Wifi)?
Internet
WAN
LAN
2. MAC and IP address

2-MAC_and_IP_address: Text file answering the following questions:
What is a MAC address?
The name of a network interface
The unique identifier of a network interface
A network interface
What is an IP address?
Is to devices connected to a network what postal address is to houses
The unique identifier of a network interface
Is a number that network devices use to connect to networks
3. UDP and TCP

3-UDP_and_TCP: Text file answering the following questions:
Which statement is correct for the TCP box:
It is a protocol that is transferring data in a slow way but surely
It is a protocol that is transferring data in a fast way and might loss data along in the process
Which statement is correct for the UDP box:
It is a protocol that is transferring data in a slow way but surely
It is a protocol that is transferring data in a fast way and might loss data along in the process
Which statement is correct for the TCP worker:
Have you received boxes x, y, z?
May I increase the rate at which I am sending you boxes?
4. TCP and UDP ports

4-TCP_and_UDP_ports: Bash script that displays listening ports.
That only shows listening sockets.
That shows the PID and name of the program to which each socket belongs.
5. Is the host on the network

5-is_the_host_on_the_network: Bash script that pings an IP address received as an argument 5 times.
Usage: 5-is_the_host_on_the_network {IP_ADDRESS}.
