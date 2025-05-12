FROM ubuntu:latest

RUN apt-get update

WORKDIR /tmp
COPY devops devops

RUN dpkg-deb --build devops && apt-get install -y ./devops.deb

WORKDIR /usr/devops

RUN mkdir build && \
    make
    
ENTRYPOINT ["build/Test"]