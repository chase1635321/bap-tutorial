# Execution

bap can be used to run the binary.

```
chase@chase:~/github/bap-tutorial$ bap --run binaries/input
Running main
Set local variable
```

While the binary is running, various attributes can be printed as shown below.

```
bap binaries/input --run --run-system=bap:binary-executor --primus-print-obs=call,call-return
(call (_start))
(call-return (_start 0))
```

The binary can also be run at an arbitrary start point, this example starts at the main function

```
bap binaries/input --run --run-entry-point=main --run-system=bap:binary-executor --primus-print-obs=call,call-return
```

And this example starts at an arbitrary address

```

```

