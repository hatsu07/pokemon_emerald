	@ src/strings.c:770 gText_PressingSpeed
	.globl gText_Rom_5CC9F4
gText_Rom_5CC9F4: @ 0x085CC9F4
	.string "おすはやさ$"
	.if (. - gText_Rom_5CC9F4) > 0x6
	.error "gText_Rom_5CC9F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC9F4) < 0x6
	.space 0x6 - (. - gText_Rom_5CC9F4)
	.endif

	@ src/strings.c:771 gText_Silkiness
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_5CC9FA
gText_Rom_5CC9FA: @ 0x085CC9FA
	.string "  サラサラぐあい$"
	.if (. - gText_Rom_5CC9FA) != 0xa
	.error "gText_Rom_5CC9FA must retain its original byte length"
	.endif
	.globl gUnknown_85CC9FC
	.set gUnknown_85CC9FC, gText_Rom_5CC9FA + 0x2
	@ pret/pokeemerald-jp direct xref for 0x085CCA04: berry_crush.s: sub_08021ABC
	.globl gBerryCrushData_085CCA04
gBerryCrushData_085CCA04:
	.globl gUnknown_85CCA04
gUnknown_85CCA04: @ 0x085CCA04
	@ analyzed canonical ROM range 0x085CCA04-0x085CCA06
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x3
	.byte 0xFD, 0x02, 0xFF
	.globl gText_Rom_5CCA07
gText_Rom_5CCA07: @ 0x085CCA07
	.string " ふん$"
	.if (. - gText_Rom_5CCA07) != 0x4
	.error "gText_Rom_5CCA07 must retain its original byte length"
	.endif
