	@ src/pokedex_plus_hgss.c:6512 pokedex_plus_hgss_line_6512 (+2 aliases)
	.globl gText_Rom_5CB808
gText_Rom_5CB808: @ 0x085CB808
	.string "ふめい$"
	.if (. - gText_Rom_5CB808) > 0x4
	.error "gText_Rom_5CB808 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB808) < 0x4
	.space 0x4 - (. - gText_Rom_5CB808)
	.endif

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
	.globl gUnknown_85CB81B
gUnknown_85CB81B: @ 0x085CB81B

	@ src/pokenav_conditions_search_results.c:25 gText_NumberIndex
	.globl gText_Rom_5CB81B
gText_Rom_5CB81B: @ 0x085CB81B
	.string "{DYNAMIC 0}ばんめ$"
	.if (. - gText_Rom_5CB81B) > 0x6
	.error "gText_Rom_5CB81B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB81B) < 0x6
	.space 0x6 - (. - gText_Rom_5CB81B)
	.endif
	.globl gUnknown_85CB821
gUnknown_85CB821: @ 0x085CB821

