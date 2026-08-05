	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_237DEA
gText_Rom_237DEA: @ 0x08237DEA
	.string "ちょうど　いまは　よぉ\nバトルアリーナで　やってる\lかちぬきチームバトルに\lちょうせんする　トレーナーを\lさがしてん　だけどよ……\pピンとくる　トレーナーが　いなくてなぁ……\nなぁ……"
	.byte EOS
	.if (. - gText_Rom_237DEA) > 0x5d
	.error "gText_Rom_237DEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237DEA) < 0x5d
	.space 0x5d - (. - gText_Rom_237DEA)
	.endif
