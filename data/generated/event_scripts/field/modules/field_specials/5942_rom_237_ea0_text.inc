	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_237EA0
gText_Rom_237EA0: @ 0x08237EA0
	.string "ちょうど　いまは　よぉ\nバトルピラミッドで　やってる\lバトルアドベンチャーに\lちょうせんする　トレーナーを\lさがしてん　だけどよ……\pピンとくる　トレーナーが　いなくてなぁ……\nなぁ……"
	.byte EOS
	.if (. - gText_Rom_237EA0) > 0x5e
	.error "gText_Rom_237EA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237EA0) < 0x5e
	.space 0x5e - (. - gText_Rom_237EA0)
	.endif
