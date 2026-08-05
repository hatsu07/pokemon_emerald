	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_2528FF
gText_Rom_2528FF: @ 0x082528FF
	.string "かんきゃく『ああ……\n{0xFD}{0x03}の　{0xFD}{0x04}！\l{0xFD}{0x03}の　{0xFD}{0x04}！\l{0xFD}{0x03}の　{0xFD}{0x04}！\lなんで　あんなに　ステキなんだー！"
	.byte EOS
	.if (. - gText_Rom_2528FF) > 0x35
	.error "gText_Rom_2528FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2528FF) < 0x35
	.space 0x35 - (. - gText_Rom_2528FF)
	.endif
