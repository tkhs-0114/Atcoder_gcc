FROM gcc:12.2.0
COPY ./mycode /usr/src/myapp
WORKDIR /usr/src/myapp