	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:650 LilycoveCity_PokemonTrainerFanClub_Text_YouChangedMyMind
	.globl gText_Rom_2092CA
gText_Rom_2092CA: @ 0x082092CA
	.string "みなおしたわ！\nあなたって ほんとうに つよいのね！\pどうしたら そんなに つよく なれるのか\nおしえて もらいたいわ{EOS}"
	.if (. - gText_Rom_2092CA) > 0x3c
	.error "gText_Rom_2092CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2092CA) < 0x3c
	.space 0x3c - (. - gText_Rom_2092CA)
	.endif
