	@ data/text/apprentice.inc:739 gText_ApprenticeWhichMove11
	.globl gText_Rom_2722C0
gText_Rom_2722C0: @ 0x082722C0
	.string "こ・ん・に・ち・は!\nはーい こんにちは!\lノリノリ ふなのりの わしだぜー!\pよーし きょうの わしの そうだん\nいってみようぜー!\lわざに かんする そうだんだよ!\p{STR_VAR_2}と {STR_VAR_3}\n{STR_VAR_1}が おぼえるなら どっちだ?$"
	.if (. - gText_Rom_2722C0) > 0x6d
	.error "gText_Rom_2722C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2722C0) < 0x6d
	.space 0x6d - (. - gText_Rom_2722C0)
	.endif
