	.globl gText_PressingSpeed

	@ src/strings.c:770 gText_PressingSpeed
	.globl gText_PressingSpeed
gText_PressingSpeed: @ 0x085CC9F4
	.string "おすはやさ{EOS}"
	.if (. - gText_PressingSpeed) > 0x6
	.error "gText_PressingSpeed may not grow beyond its original slot"
	.endif
	.if (. - gText_PressingSpeed) < 0x6
	.space 0x6 - (. - gText_PressingSpeed)
	.endif

	@ src/strings.c:771 gText_Silkiness
	@ Preserve exact byte length: internal label.
	.globl gText_Silkiness
gText_Silkiness: @ 0x085CC9FA
	.string "  サラサラぐあい{EOS}"
	.if (. - gText_Silkiness) != 0xa
	.error "gText_Silkiness must retain its original byte length"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085CCA04: berry_crush.s: sub_08021ABC
	.globl gBerryCrushData_085CCA04
gBerryCrushData_085CCA04: @ 0x085CCA04
	@ analyzed canonical ROM range 0x085CCA04-0x085CCA06
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x3 bytes=3
	.byte 0xFD, 0x02, 0xFF
	.globl gText_Rom_5CCA07
gText_Rom_5CCA07: @ 0x085CCA07
	.string " ふん{EOS}"
	.if (. - gText_Rom_5CCA07) != 0x4
	.error "gText_Rom_5CCA07 must retain its original byte length"
	.endif
