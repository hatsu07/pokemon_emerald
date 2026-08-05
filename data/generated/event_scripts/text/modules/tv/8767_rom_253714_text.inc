	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+32 aliases)
	.globl gText_Rom_253714
gText_Rom_253714: @ 0x08253714
	.string "しょうじき　わたしも　なかなか\nつよいかも　と　おもっちゃい　ましたー！\pさいごは　けっきょく　まけちゃった　けど\nいい　しあい　だったなー\pでも　わたしに　くせん　してるようじゃ\nまだまだ　ですよ　{0xFD}{0x01}さん！"
	.byte EOS
	.if (. - gText_Rom_253714) > 0x6a
	.error "gText_Rom_253714 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_253714) < 0x6a
	.space 0x6a - (. - gText_Rom_253714)
	.endif
