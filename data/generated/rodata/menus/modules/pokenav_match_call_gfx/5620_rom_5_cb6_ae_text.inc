	@ src/pokenav_match_call_gfx.c:127 gText_NumberRegistered
	.globl gText_Rom_5CB6AE
gText_Rom_5CB6AE: @ 0x085CB6AE
	.string "とうろく にんずう$"
	.if (. - gText_Rom_5CB6AE) > 0xa
	.error "gText_Rom_5CB6AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB6AE) < 0xa
	.space 0xa - (. - gText_Rom_5CB6AE)
	.endif
