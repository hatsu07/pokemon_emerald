	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+32 aliases)
	.globl gText_Rom_253551
gText_Rom_253551: @ 0x08253551
	.string "{0xFD}{0x02}と　{0xFD}{0x04}の\nコンビが　さいこう　でしたね！\p{0xFD}{0x02}と　{0xFD}{0x04}が　おたがい\nたすけあって　たたかう　すがた……\pあぁ　なんて\nすばらしいんでしょう！\pわたしたちとの　しょうぶで\nさいごに　つかった　「{0xFD}{0x03}」も\p{0xFD}{0x02}と　{0xFD}{0x04}の　ゆうじょうの\n「{0xFD}{0x03}」なんですね！"
	.byte EOS
	.if (. - gText_Rom_253551) > 0x82
	.error "gText_Rom_253551 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_253551) < 0x82
	.space 0x82 - (. - gText_Rom_253551)
	.endif
