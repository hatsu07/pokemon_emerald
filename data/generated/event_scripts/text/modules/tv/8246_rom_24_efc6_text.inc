	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+6 aliases)
	.globl gText_Rom_24EFC6
gText_Rom_24EFC6: @ 0x0824EFC6
	.string "それでは　てんいんさんに\nインタビュー　してみましょう\lどうですか　うれて　いますか？\pてんいん『はい　おかげさまで\pとくに　{0xFD}{0x03}が\nいま　うれて　いるんですよ\pこのまえも　{0xFD}{0x02}さん　という\nかたが　{0xFD}{0x04}こも　かって　いかれました$"
	.if (. - gText_Rom_24EFC6) > 0x74
	.error "gText_Rom_24EFC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24EFC6) < 0x74
	.space 0x74 - (. - gText_Rom_24EFC6)
	.endif
