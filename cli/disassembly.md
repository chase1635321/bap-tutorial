# Disassembly

bap can be used to disassemble binaries similar to objdump.

### Basic ir dump

```
bap -d binaries/input
```

### Print with address
```
bap binaries/input -d --print-bir-attr=address
```
