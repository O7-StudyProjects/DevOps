FROM ubuntu:latest

COPY devops /tmp/

WORKDIR /tmp

RUN dpkg-deb --build devops

RUN apt-get install -y devops.deb

WORKDIR /usr/devops

RUN mkdir build
RUN make
RUN chmod +x ./build/Test
    
ENTRYPOINT ["/usr/devops/build/Test"]