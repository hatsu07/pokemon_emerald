	@ src/pokenav_match_call_gfx.c:208 pokenav_match_call_gfx_line_208
	.globl gText_Rom_5CB6C2
gText_Rom_5CB6C2: @ 0x085CB6C2
	.string "しょうさい$"
	.if (. - gText_Rom_5CB6C2) > 0x6
	.error "gText_Rom_5CB6C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB6C2) < 0x6
	.space 0x6 - (. - gText_Rom_5CB6C2)
	.endif
	@ Decoded text from ROM range: offset=0x5CB6C8, size=0x5
	.string "よびだす$"

