.PHONY: openocd
openocd: $(CWD)/hw/$(HW)/$(HW).openocd $(ELF)
	$@ -f $< -c "program $(ELF) verify reset"

.PHONY: gdb
gdb: $(CWD)/hw/$(HW)/$(HW).gdbinit $(ELF)
	$@-multiarch -q -se $(ELF) -x $<
