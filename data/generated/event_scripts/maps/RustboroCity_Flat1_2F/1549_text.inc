	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:90 RustboroCity_Flat1_2F_Text_OhIsThatRight
	.globl gText_Rom_2039D3
gText_Rom_2039D3: @ 0x082039D3
	.string "そうか そうか\nなにか おもしろそうな ことばを\lみつけたら おしえて くれよ{EOS}"
	.if (. - gText_Rom_2039D3) > 0x28
	.error "gText_Rom_2039D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2039D3) < 0x28
	.space 0x28 - (. - gText_Rom_2039D3)
	.endif
