	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_237C1B
gText_Rom_237C1B: @ 0x08237C1B
	.string "ちょうど　いまは　よぉ\nバトルドームで　やってる\lダブル　バトルトーナメントに\lちょうせんする　トレーナーを\lさがしてん　だけどよ……\pピンとくる　トレーナーが　いなくてなぁ……\nなぁ……"
	.byte EOS
	.if (. - gText_Rom_237C1B) > 0x5f
	.error "gText_Rom_237C1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237C1B) < 0x5f
	.space 0x5f - (. - gText_Rom_237C1B)
	.endif
