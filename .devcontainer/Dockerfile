FROM ubuntu:focal

# İndirilen paketlerde
ENV DEBIAN_FRONTEND=noninteractive

RUN apt update
RUN apt install -y  make \
                    cmake \
                    curl \
                    nano \
                    apt-transport-https \
                    build-essential \
                    gcc \
                    g++ \
                    git \
                    ca-certificates \
                    gnupg \
                    lsb-release \
                    wget \
                    unzip 

RUN curl -fsSL https://download.docker.com/linux/debian/gpg | gpg --dearmor -o /usr/share/keyrings/docker-archive-keyring.gpg
RUN echo "deb [arch=amd64 signed-by=/usr/share/keyrings/docker-archive-keyring.gpg] https://download.docker.com/linux/ubuntu $(lsb_release -cs) stable" | tee /etc/apt/sources.list.d/docker.list > /dev/null
RUN apt update
RUN apt-get install docker-ce docker-ce-cli containerd.io -y

RUN mkdir /app

ENTRYPOINT [ "/bin/bash" ]