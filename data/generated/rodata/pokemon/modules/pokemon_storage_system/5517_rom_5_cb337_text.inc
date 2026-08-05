	@ src/pokemon_storage_system.c:1078 pokemon_storage_system_line_1078
	.globl gText_Rom_5CB337
gText_Rom_5CB337: @ 0x085CB337
	.string "どうぐを バッグに いれますか?$"
	.if (. - gText_Rom_5CB337) > 0x11
	.error "gText_Rom_5CB337 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB337) < 0x11
	.space 0x11 - (. - gText_Rom_5CB337)
	.endif
	@ Decoded text from ROM range: offset=0x5CB348, size=0x15
	.string "{SE_M_HYPER_BEAM2}を　もたせた！$"
	.string "{SE_M_HYPER_BEAM2}と　とりかえた！$"
