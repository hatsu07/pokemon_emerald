	@ asm/field_specials.s:6023 sub_0813AAAC (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_236701
gText_Rom_236701: @ 0x08236701
	.string "ムチュールが　プリント　されている\nおおきなポスター"
	.byte EOS
	.if (. - gText_Rom_236701) != 0x1b
	.error "gText_Rom_236701 must retain its original byte length"
	.endif
