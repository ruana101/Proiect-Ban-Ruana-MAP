FROM gcc:latest

WORKDIR /myapp

COPY . /myapp

RUN gcc -o myapp myapp.c

CMD ["./myapp"]