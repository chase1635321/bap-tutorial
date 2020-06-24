# Introduction

Here are some introductory bap commands.

```
bap --version
bap --llvm-version
```

bap has a man page

```
man bap
```

List  various primus systems

```
chase@chase:~/github/bap-tutorial$ bap primus-systems | grep "\-"
- bap:legacy-main:
- bap:string-deobfuscator:
- bap:taint-analyzer:
- bap:binary-executor:
- bap:exact-taint-analyzer:
- bap:promiscuous-executor:
- bap:constant-tracker:
- bap:terminating-stubbed-executor:
- bap:reflective-taint-analyzer:
- bap:multi-analyzer:
- bap:symbolic-executor:
- bap:microexecutor-base:
- bap:stubbed-executor:
- bap:base-taint-analyzer:
- bap:base-lisp-machine:

```

List various primus observations

```
chase@chase:~/github/bap-tutorial$ bap primus-observation | grep "\-"
- leave-phi:
- machine-kill:
- leave-pos:
- incident-new-class:
- concat:
- stored:
- beagle-prey:
- pc-changed:
- enter-jmp:
- call:
- enter-def:
- lisp-call:
- pagefault:
- leave-jmp:
- enter-sub:
- call-return:
- enter-pos:
- extract:
- clock:
- binop:
- loaded:
- leave-def:
- lisp-primitive:
...
```

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
