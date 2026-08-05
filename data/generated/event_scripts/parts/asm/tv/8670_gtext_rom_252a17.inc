	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_252A17
gText_Rom_252A17: @ 0x08252A17
	.string "かいじょうが　もりあがっている　ときに\nふさわしい　アピールが　できません　でした\p{0xFD}{0x02}さんには　ながれを　よんで\nつぎこそ　かいじょうを　エキサイト　させて\lさいこうに　もりあげて　ほしいです"
	.byte EOS
	.if (. - gText_Rom_252A17) > 0x62
	.error "gText_Rom_252A17 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252A17) < 0x62
	.space 0x62 - (. - gText_Rom_252A17)
	.endif
