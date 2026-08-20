	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:87 RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion
	.globl gText_Rom_2039B9
gText_Rom_2039B9: @ 0x082039B9
	.string "そうか そうか\nじゃあ さっそく おしえて くれよ{EOS}"
	.if (. - gText_Rom_2039B9) > 0x1a
	.error "gText_Rom_2039B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2039B9) < 0x1a
	.space 0x1a - (. - gText_Rom_2039B9)
	.endif
