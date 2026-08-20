	@ asm/pokenav_unk_4.s:1653 sub_081CB6AC (+1 aliases)
	.globl gText_Rom_5CB80C
gText_Rom_5CB80C: @ 0x085CB80C
	.string "よびだし{EOS}"
	.if (. - gText_Rom_5CB80C) > 0x5
	.error "gText_Rom_5CB80C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB80C) < 0x5
	.space 0x5 - (. - gText_Rom_5CB80C)
	.endif

	@ asm/pokenav_unk_4.s:1653 sub_081CB6AC (+1 aliases)
	.globl gText_Rom_5CB811
gText_Rom_5CB811: @ 0x085CB811
	.string "しょうさい{EOS}"
	.if (. - gText_Rom_5CB811) > 0x6
	.error "gText_Rom_5CB811 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB811) < 0x6
	.space 0x6 - (. - gText_Rom_5CB811)
	.endif

	@ asm/pokenav_unk_4.s:1653 sub_081CB6AC (+6 aliases)
	.globl gText_Rom_5CB817
gText_Rom_5CB817: @ 0x085CB817
	.string "もどる{EOS}"
	.if (. - gText_Rom_5CB817) > 0x4
	.error "gText_Rom_5CB817 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB817) < 0x4
	.space 0x4 - (. - gText_Rom_5CB817)
	.endif
