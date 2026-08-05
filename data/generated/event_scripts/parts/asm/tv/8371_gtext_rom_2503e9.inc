	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_2503E9
gText_Rom_2503E9: @ 0x082503E9
	.string "あっ！\n{0xFD}{0x02}さんが　いらっしゃいます！\lさっそく　たいせん　してみましょう！\p……　……　……　……\n……　……　……　……$"
	.if (. - gText_Rom_2503E9) > 0x3f
	.error "gText_Rom_2503E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2503E9) < 0x3f
	.space 0x3f - (. - gText_Rom_2503E9)
	.endif
