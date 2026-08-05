	@ src/pokemon_storage_system.c:1057 pokemon_storage_system_line_1057
	.globl gText_Rom_5CB21A
gText_Rom_5CB21A: @ 0x085CB21A
	.string "どの ボックスに あずけますか?$"
	.if (. - gText_Rom_5CB21A) > 0x11
	.error "gText_Rom_5CB21A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB21A) < 0x11
	.space 0x11 - (. - gText_Rom_5CB21A)
	.endif
	@ Decoded text from ROM range: offset=0x5CB22B, size=0xB
	.string "{SE_M_HYPER_BEAM2}を　あずけました$"
