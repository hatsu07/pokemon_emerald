	@ src/strings.c:1095 gText_DataWillBeSaved
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_Rom_2C2AEA
gText_Rom_2C2AEA: @ 0x082C2AEA
	.string "  レポートを かいています\nしばらく おまちください$"
	.if (. - gText_Rom_2C2AEA) != 0x1c
	.error "gText_Rom_2C2AEA must retain its original byte length"
	.endif
