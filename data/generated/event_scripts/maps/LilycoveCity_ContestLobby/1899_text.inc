	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:1013 LilycoveCity_ContestLobby_Text_ContestFeastForEyes
	.globl gText_Rom_2076BA
gText_Rom_2076BA: @ 0x082076BA
	.string "いやあ コンテストかいじょうに くると\nかきがいの ある ポケモンが\lいっぱい だね!{EOS}"
	.if (. - gText_Rom_2076BA) > 0x2c
	.error "gText_Rom_2076BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2076BA) < 0x2c
	.space 0x2c - (. - gText_Rom_2076BA)
	.endif
