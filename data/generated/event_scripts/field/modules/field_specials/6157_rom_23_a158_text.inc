	@ asm/field_specials.s:6373 sub_0813AD6C (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23A10D
gText_Rom_23A10D: @ 0x0823A10D
	.string "たたかいの　おどりで\nこうげきを　グーンと\nあげる"
	.byte EOS
	.if (. - gText_Rom_23A10D) != 0x1a
	.error "gText_Rom_23A10D must retain its original byte length"
	.endif
	.globl gText_Rom_23A123
	.set gText_Rom_23A123, gText_Rom_23A10D + 0x16
	@ asm/field_specials.s:6373 sub_0813AD6C (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23A127
gText_Rom_23A127: @ 0x0823A127
	.string "からだを　まるめて\nぼうぎょを　あげる"
	.byte EOS
	.if (. - gText_Rom_23A127) != 0x14
	.error "gText_Rom_23A127 must retain its original byte length"
	.endif
	.globl gText_Rom_23A137
	.set gText_Rom_23A137, gText_Rom_23A127 + 0x10
	@ asm/field_specials.s:6373 sub_0813AD6C (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_23A13B
gText_Rom_23A13B: @ 0x0823A13B
	.string "ねている　とき　だけ\nつかえる　わざ\nいびきで　こうげき"
	.byte EOS
	.if (. - gText_Rom_23A13B) != 0x1d
	.error "gText_Rom_23A13B must retain its original byte length"
	.endif
	.globl gText_Rom_23A153
	.set gText_Rom_23A153, gText_Rom_23A13B + 0x18
	@ asm/field_specials.s:6373 sub_0813AD6C (+2 aliases)
	.globl gText_Rom_23A158
gText_Rom_23A158: @ 0x0823A158
	.string "ドロを　かけて\nめいちゅうりつを\nさげる"
	.byte EOS
	.if (. - gText_Rom_23A158) > 0x15
	.error "gText_Rom_23A158 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A158) < 0x15
	.space 0x15 - (. - gText_Rom_23A158)
	.endif
