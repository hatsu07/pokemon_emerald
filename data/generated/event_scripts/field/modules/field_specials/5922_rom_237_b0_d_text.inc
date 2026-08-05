	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_237B0D
gText_Rom_237B0D: @ 0x08237B0D
	.string "ちょうど　いまは　よぉ\nバトルタワーの　ダブル　バトルルームに\lちょうせんする　トレーナーを\lさがしてん　だけどよ……\pピンとくる　トレーナーが　いなくてなぁ……\nなぁ……"
	.byte EOS
	.if (. - gText_Rom_237B0D) > 0x57
	.error "gText_Rom_237B0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237B0D) < 0x57
	.space 0x57 - (. - gText_Rom_237B0D)
	.endif
