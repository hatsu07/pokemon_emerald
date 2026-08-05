	@ data/maps/LilycoveCity/scripts.inc:520 LilycoveCity_Text_BrendanYouGoingToPokemonLeague
	.globl gText_Rom_1E0B58
gText_Rom_1E0B58: @ 0x081E0B58
	.string "{PLAYER}は どうする?\pそんなに つよいんだから\nポケモンリーグに ちょうせん するのか?\pオレだって もうちょっと\nポケモン そだてれば {PLAYER}よりも\lつよくなれる はずだからな\pまあ いいや\nとにかく がんばれよ!$"
	.if (. - gText_Rom_1E0B58) > 0x6b
	.error "gText_Rom_1E0B58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0B58) < 0x6b
	.space 0x6b - (. - gText_Rom_1E0B58)
	.endif
