FROM gcc:latest

RUN mkdir -p /usr/src/myapp

WORKDIR /myapp

COPY . /myapp

RUN gcc -o myapp myapp.c

CMD ["./myapp"]
