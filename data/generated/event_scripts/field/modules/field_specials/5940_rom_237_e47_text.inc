	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_237E47
gText_Rom_237E47: @ 0x08237E47
	.string "ちょうど　いまは　よぉ\nバトルチューブで　やってる\lバトルゲームに\lちょうせんする　トレーナーを\lさがしてん　だけどよ……\pピンとくる　トレーナーが　いなくてなぁ……\nなぁ……"
	.byte EOS
	.if (. - gText_Rom_237E47) > 0x59
	.error "gText_Rom_237E47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237E47) < 0x59
	.space 0x59 - (. - gText_Rom_237E47)
	.endif
