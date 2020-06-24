# Introduction

Here are some introductory bap commands.

 - Explain how bap works
 - Show various ways of getting bap help

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

```
chase@chase:~/github/bap-tutorial$ bap primus-components | grep "\-"
- bap:division-by-zero-handler:
- bap:round-robin-scheduler:
- bap:mem-randomizer:
- bap:load-binary:
- bap:x86-registers-initializer:
- bap:var-randomizer:
- bap:mark-visited:
- bap:symbolic-computer:
- bap:report-visited:
- bap:propagate-taint-exact:
- bap:symbolic-path-constraints:
- bap:load-lisp-library:
- bap:constant-tracker:
- bap:lisp-ieee754:
- bap:greedy-scheduler:
- bap:symbolic-lisp-primitives:
- bap:lisp-core:
- bap:lisp-basic-io:
- bap:taint-marker:
- bap:promiscuous-path-explorer:
- bap:powerpc-init:
- bap:lisp-incidents:
- bap:lisp-type-checker:
- bap:lisp-type-error-printer:
- bap:taint-mapper:
- bap:arg-randomizer:
- bap:program-loader:
- bap:taint-primitives:
- bap:taint-intro:
- bap:taint-signals:
- bap:conservative-garbage-collector:
- bap:wondering-scheduler:
- bap:propagate-taint-by-computation:
- bap:x86-setup-plt:
- bap:constant-tracker-primitives:
- bap:beagle-hunter:
- bap:exploring-scheduler:
- bap:lisp-dictionary:
- bap:lisp-primitives:
- bap:symbolic-path-explorer:
- bap:lisp-regions:
- bap:incident-location-recorder:
- bap:observation-printer:
- bap:limit:
```
