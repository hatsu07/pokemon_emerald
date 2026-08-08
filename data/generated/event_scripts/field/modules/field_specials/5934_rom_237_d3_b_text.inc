	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_237D3B
gText_Rom_237D3B: @ 0x08237D3B
	.string "ちょうど　いまは　よぉ\nバトルパレスの\lシングル　バトルホールに\lちょうせんする　トレーナーを\lさがしてん　だけどよ……\pピンとくる　トレーナーが　いなくてなぁ……\nなぁ……"
	.byte EOS
	.if (. - gText_Rom_237D3B) > 0x58
	.error "gText_Rom_237D3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237D3B) < 0x58
	.space 0x58 - (. - gText_Rom_237D3B)
	.endif
