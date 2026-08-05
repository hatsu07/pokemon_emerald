	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_250321
gText_Rom_250321: @ 0x08250321
	.string "ああー！　なるほど！\pここには　わざと　グッズを　おかずに\nあけて　いるのですねー\pこれは　こうかてき　ですねー$"
	.if (. - gText_Rom_250321) > 0x39
	.error "gText_Rom_250321 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250321) < 0x39
	.space 0x39 - (. - gText_Rom_250321)
	.endif
