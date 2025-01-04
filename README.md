# C11 threads and semaphores

Illustrating the use of C11 threads and semaphores by recursively searching a directory for filenames for educational purposes on Libera IRC channel #c.

## Compile

```
make
```

## Run

```
./build/xfs search-string my-path [my-path-two] [my-path-three] ...
```

## Test

```
./build/xfs hello test
```
or
```
./build/xfs hello test/a test/b
```

should yield

```
test/a/hello
test/b/hello
```
