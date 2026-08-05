	@ src/pokemon_storage_system.c:1060 pokemon_storage_system_line_1060
	.globl gText_Rom_5CB245
gText_Rom_5CB245: @ 0x085CB245
	.string "ほんとうに にがしますか?$"
	.if (. - gText_Rom_5CB245) > 0xe
	.error "gText_Rom_5CB245 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB245) < 0xe
	.space 0xe - (. - gText_Rom_5CB245)
	.endif
	@ Decoded text from ROM range: offset=0x5CB253, size=0x19
	.string "{SE_M_HYPER_BEAM2}を　そとに　にがしてあげた$"
	.string "ばいばい　{SE_M_HYPER_BEAM2}！$"
