	@ data/maps/RustboroCity_House1/scripts.inc:45 RustboroCity_House1_Text_AnyPokemonCanBeCute
	.globl gText_Rom_203D17
gText_Rom_203D17: @ 0x08203D17
	.string "だいじに そだてると\nどんな ポケモンも すごく かわいいよねー{EOS}"
	.if (. - gText_Rom_203D17) > 0x21
	.error "gText_Rom_203D17 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203D17) < 0x21
	.space 0x21 - (. - gText_Rom_203D17)
	.endif
