	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_237BBB
gText_Rom_237BBB: @ 0x08237BBB
	.string "ちょうど　いまは　よぉ\nバトルドームで　やってる\lシングル　バトルトーナメントに\lちょうせんする　トレーナーを\lさがしてん　だけどよ……\pピンとくる　トレーナーが　いなくてなぁ……\nなぁ……"
	.byte EOS
	.if (. - gText_Rom_237BBB) > 0x60
	.error "gText_Rom_237BBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237BBB) < 0x60
	.space 0x60 - (. - gText_Rom_237BBB)
	.endif
