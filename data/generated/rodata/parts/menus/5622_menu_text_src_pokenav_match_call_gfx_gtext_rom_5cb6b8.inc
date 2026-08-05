	@ src/pokenav_match_call_gfx.c:128 gText_NumberOfBattles
	.globl gText_Rom_5CB6B8
gText_Rom_5CB6B8: @ 0x085CB6B8
	.string "たいせん かいすう$"
	.if (. - gText_Rom_5CB6B8) > 0xa
	.error "gText_Rom_5CB6B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB6B8) < 0xa
	.space 0xa - (. - gText_Rom_5CB6B8)
	.endif
