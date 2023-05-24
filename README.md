# About

`oracle` is a Discord helper written in C using the `Concord` Discord API library.

## Installing dependencies
The main dependency is `Concord`. You can install it by following the instructions [here](https://github.com/Cogmasters/concord#installing-concord). 

## Building and running
From the root of the project, type the following to build and run `oracle`
```shell
$ make
$ ./oracle
```

If you make changes to anything in `src/`, then run `make clean` before building.

## TODO:

- Set up bot to join channel
- Reacts for roles (e.g., pronouns)
- When new user joins, get them to agree to "Rules" before giving them access to the rest of the server.
- Tests