	@ data/maps/Route110_TrickHousePuzzle4/scripts.inc:48 Route110_TrickHousePuzzle4_Text_YujiPostBattle
	.globl gText_Rom_23EC88
gText_Rom_23EC88: @ 0x0823EC88
	.string "ちからが つよいだけじゃ ダメだね……\nアタマ つかわないと{EOS}"
	.if (. - gText_Rom_23EC88) > 0x1f
	.error "gText_Rom_23EC88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EC88) < 0x1f
	.space 0x1f - (. - gText_Rom_23EC88)
	.endif
