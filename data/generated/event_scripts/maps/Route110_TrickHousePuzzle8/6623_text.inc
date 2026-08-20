	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:39 Route110_TrickHousePuzzle8_Text_VincentPostBattle
	.globl gText_Rom_240533
gText_Rom_240533: @ 0x08240533
	.string "えっ ポケモンリーグの チャンピオンに\nかったって? す すごい……!{EOS}"
	.if (. - gText_Rom_240533) > 0x24
	.error "gText_Rom_240533 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240533) < 0x24
	.space 0x24 - (. - gText_Rom_240533)
	.endif
