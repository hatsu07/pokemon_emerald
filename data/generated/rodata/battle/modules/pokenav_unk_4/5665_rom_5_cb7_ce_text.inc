	@ asm/pokenav_unk_4.s:6801 sub_081CDE98
	.globl gText_Rom_5CB7CE
gText_Rom_5CB7CE: @ 0x085CB7CE
	.string "ばんめ$"
	.if (. - gText_Rom_5CB7CE) > 0x4
	.error "gText_Rom_5CB7CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB7CE) < 0x4
	.space 0x4 - (. - gText_Rom_5CB7CE)
	.endif
