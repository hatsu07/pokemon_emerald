	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+32 aliases)
	.globl gText_Rom_2536D3
gText_Rom_2536D3: @ 0x082536D3
	.string "{0xFD}{0x01}さん　あいての　こうどうを\nよむのが　とても　うまいです！\pどうぐを　つかう　タイミング　なんか\nなかなかの　ものでしたよ！"
	.byte EOS
	.if (. - gText_Rom_2536D3) > 0x41
	.error "gText_Rom_2536D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2536D3) < 0x41
	.space 0x41 - (. - gText_Rom_2536D3)
	.endif
