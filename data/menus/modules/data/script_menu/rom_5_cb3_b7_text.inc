	@ src/data/script_menu.h:237 script_menu_line_237 (+1 aliases)
	.globl gPokemonStorageMenuText_Jump
gPokemonStorageMenuText_Jump: @ 0x085CB3B7
	.string "ジャンプ{EOS}"
	.if (. - gPokemonStorageMenuText_Jump) > 0x5
	.error "gPokemonStorageMenuText_Jump may not grow beyond its original slot"
	.endif
	.if (. - gPokemonStorageMenuText_Jump) < 0x5
	.space 0x5 - (. - gPokemonStorageMenuText_Jump)
	.endif
	@ Decoded text from ROM range: offset=0x5CB3BC, size=0x7
	.string "かべがみ　　{EOS}"
