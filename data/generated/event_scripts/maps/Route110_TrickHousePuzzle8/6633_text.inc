	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:54 Route110_TrickHousePuzzle8_Text_LeroyDefeat (+1 aliases)
	.globl gText_Rom_2405C7
gText_Rom_2405C7: @ 0x082405C7
	.string "なるほど……\nすばらしい センスですね!{EOS}"
	.if (. - gText_Rom_2405C7) > 0x15
	.error "gText_Rom_2405C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2405C7) < 0x15
	.space 0x15 - (. - gText_Rom_2405C7)
	.endif
