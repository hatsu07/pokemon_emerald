	.globl gText_NumberRegistered

	@ src/pokenav_match_call_gfx.c:127 gText_NumberRegistered
	.globl gText_NumberRegistered
gText_NumberRegistered: @ 0x085CB6AE
	.string "とうろく にんずう{EOS}"
	.if (. - gText_NumberRegistered) > 0xa
	.error "gText_NumberRegistered may not grow beyond its original slot"
	.endif
	.if (. - gText_NumberRegistered) < 0xa
	.space 0xa - (. - gText_NumberRegistered)
	.endif

	@ src/pokenav_match_call_gfx.c:128 gText_NumberOfBattles
	.globl gText_NumberOfBattles
gText_NumberOfBattles: @ 0x085CB6B8
	.string "たいせん かいすう{EOS}"
	.if (. - gText_NumberOfBattles) > 0xa
	.error "gText_NumberOfBattles may not grow beyond its original slot"
	.endif
	.if (. - gText_NumberOfBattles) < 0xa
	.space 0xa - (. - gText_NumberOfBattles)
	.endif

	@ src/pokenav_match_call_gfx.c:208 pokenav_match_call_gfx_line_208
	.globl gText_Rom_5CB6C2
gText_Rom_5CB6C2: @ 0x085CB6C2
	.string "しょうさい{EOS}"
	.if (. - gText_Rom_5CB6C2) > 0x6
	.error "gText_Rom_5CB6C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB6C2) < 0x6
	.space 0x6 - (. - gText_Rom_5CB6C2)
	.endif
	@ Decoded text from ROM range: offset=0x5CB6C8, size=0x5
	.string "よびだす{EOS}"
