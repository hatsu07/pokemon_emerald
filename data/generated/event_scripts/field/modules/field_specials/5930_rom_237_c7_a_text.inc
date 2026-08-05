	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_237C7A
gText_Rom_237C7A: @ 0x08237C7A
	.string "ちょうど　いまは　よぉ\nバトルファクトリーで　やってる\lバトルトレード　シングルに\lちょうせんする　トレーナーを\lさがしてん　だけどよ……\pピンとくる　トレーナーが　いなくてなぁ……\nなぁ……"
	.byte EOS
	.if (. - gText_Rom_237C7A) > 0x61
	.error "gText_Rom_237C7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237C7A) < 0x61
	.space 0x61 - (. - gText_Rom_237C7A)
	.endif
