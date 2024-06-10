From ubuntu:latest

RUN apt update
RUN apt install python3 -y

RUN apt install wget -y

RUN apt-get update
RUN apt-get install -y dotnet-sdk-8.0
RUN apt-get install -y aspnetcore-runtime-8.0

RUN apt install -qy curl unzip
RUN curl -L https://github.com/dafny-lang/dafny/releases/download/v4.6.0/dafny-4.6.0-x64-ubuntu-20.04.zip -o /opt/dafny.zip \
&& (cd /opt && unzip dafny.zip && rm dafny.zip)

# libgompl is needed to run z3
RUN apt update && apt install -qy libgomp1 

# add pytest (optional, and used for CI only)
#RUN pip3 install --upgrade pip
#RUN pip3 install -U pytest

#RUN pip3 install pipenv

# Define paths to executables
ENV PATH /usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/opt/dafny:/opt/dafny/z3/bin