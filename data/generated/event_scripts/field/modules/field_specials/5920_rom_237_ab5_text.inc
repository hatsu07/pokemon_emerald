	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_237AB5
gText_Rom_237AB5: @ 0x08237AB5
	.string "ちょうど　いまは　よぉ\nバトルタワーの　シングル　バトルルームに\lちょうせんする　トレーナーを\lさがしてん　だけどよ……\pピンとくる　トレーナーが　いなくてなぁ……\nなぁ……"
	.byte EOS
	.if (. - gText_Rom_237AB5) > 0x58
	.error "gText_Rom_237AB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237AB5) < 0x58
	.space 0x58 - (. - gText_Rom_237AB5)
	.endif
