	@ src/pokemon_storage_system.c:1054 pokemon_storage_system_line_1054
	.globl gText_Rom_5CB1ED
gText_Rom_5CB1ED: @ 0x085CB1ED
	.string "どの かべがみにしますか?$"
	.if (. - gText_Rom_5CB1ED) > 0xe
	.error "gText_Rom_5CB1ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB1ED) < 0xe
	.space 0xe - (. - gText_Rom_5CB1ED)
	.endif
	@ Decoded text from ROM range: offset=0x5CB1FB, size=0xC
	.string "{SE_M_HYPER_BEAM2}を　どうしますか？$"
