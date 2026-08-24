	@ asm/field_specials.s:6023 sub_0813AAAC (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_236701
gText_Rom_236701: @ 0x08236701
	.string "ムチュールが　プリント　されている\nおおきなポスター"
	.byte EOS
	.if (. - gText_Rom_236701) != 0x1b
	.error "gText_Rom_236701 must retain its original byte length"
	.endif
	.globl gText_Rom_236717
	.set gText_Rom_236717, gText_Rom_236701 + 0x16
	@ asm/field_specials.s:6023 sub_0813AAAC (+1 aliases)
	.globl gText_Rom_23671C
gText_Rom_23671C: @ 0x0823671C
	.string "ムチュールの　クッション\nマットや　つくえの　うえに　おくもの"
	.byte EOS
	.if (. - gText_Rom_23671C) > 0x20
	.error "gText_Rom_23671C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23671C) < 0x20
	.space 0x20 - (. - gText_Rom_23671C)
	.endif
