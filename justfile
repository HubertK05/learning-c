run TARGET:
    gcc -o target/app {{TARGET}}.c && \
    ./target/app
