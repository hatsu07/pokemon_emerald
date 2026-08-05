	@ asm/pokenav_unk_4.s:1653 sub_081CB6AC (+6 aliases)
	.globl gText_Rom_5CB817
gText_Rom_5CB817: @ 0x085CB817
	.string "もどる$"
	.if (. - gText_Rom_5CB817) > 0x4
	.error "gText_Rom_5CB817 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB817) < 0x4
	.space 0x4 - (. - gText_Rom_5CB817)
	.endif
