	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_237B64
gText_Rom_237B64: @ 0x08237B64
	.string "ちょうど　いまは　よぉ\nバトルタワーの　マルチ　バトルルームに\lちょうせんする　トレーナーを\lさがしてん　だけどよ……\pピンとくる　トレーナーが　いなくてなぁ……\nなぁ……"
	.byte EOS
	.if (. - gText_Rom_237B64) > 0x57
	.error "gText_Rom_237B64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237B64) < 0x57
	.space 0x57 - (. - gText_Rom_237B64)
	.endif
