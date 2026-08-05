	@ asm/pokenav_unk_4.s:1653 sub_081CB6AC (+1 aliases)
	.globl gText_Rom_5CB80C
gText_Rom_5CB80C: @ 0x085CB80C
	.string "よびだし$"
	.if (. - gText_Rom_5CB80C) > 0x5
	.error "gText_Rom_5CB80C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB80C) < 0x5
	.space 0x5 - (. - gText_Rom_5CB80C)
	.endif
