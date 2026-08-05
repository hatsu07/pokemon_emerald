	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_252875
gText_Rom_252875: @ 0x08252875
	.string "かんきゃく『{0xFD}{0x03}が　とちゅうで\nアピールを　やすんだ　ときも……\lずーっと　{0xFD}{0x03}だけ　みてました！\pもう　{0xFD}{0x03}の　とりこ　です……"
	.byte EOS
	.if (. - gText_Rom_252875) > 0x42
	.error "gText_Rom_252875 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252875) < 0x42
	.space 0x42 - (. - gText_Rom_252875)
	.endif
