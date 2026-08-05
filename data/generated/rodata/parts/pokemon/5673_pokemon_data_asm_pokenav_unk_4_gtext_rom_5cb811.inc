	@ asm/pokenav_unk_4.s:1653 sub_081CB6AC (+1 aliases)
	.globl gText_Rom_5CB811
gText_Rom_5CB811: @ 0x085CB811
	.string "しょうさい$"
	.if (. - gText_Rom_5CB811) > 0x6
	.error "gText_Rom_5CB811 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB811) < 0x6
	.space 0x6 - (. - gText_Rom_5CB811)
	.endif
