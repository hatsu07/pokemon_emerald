	@ data/maps/RustboroCity_House1/scripts.inc:36 RustboroCity_House1_Text_PleaseBeGoodToMyPokemon
	.globl gText_Rom_203CCC
gText_Rom_203CCC: @ 0x08203CCC
	.string "えへへ……\nちゃんと かわいがってね{EOS}"
	.if (. - gText_Rom_203CCC) > 0x13
	.error "gText_Rom_203CCC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203CCC) < 0x13
	.space 0x13 - (. - gText_Rom_203CCC)
	.endif
