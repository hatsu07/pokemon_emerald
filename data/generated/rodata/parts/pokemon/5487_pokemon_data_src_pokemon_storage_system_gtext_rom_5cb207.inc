	@ src/pokemon_storage_system.c:1056 pokemon_storage_system_line_1056
	.globl gText_Rom_5CB207
gText_Rom_5CB207: @ 0x085CB207
	.string "どの ボックスに ジャンプしますか?$"
	.if (. - gText_Rom_5CB207) > 0x13
	.error "gText_Rom_5CB207 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB207) < 0x13
	.space 0x13 - (. - gText_Rom_5CB207)
	.endif
