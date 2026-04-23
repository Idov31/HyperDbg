savedcmd_Hyperdbg.mod := printf '%s\n'   mock.o ../../include/platform/kernel/code/PlatformMem.o | awk '!x[$$0]++ { print("./"$$0) }' > Hyperdbg.mod
