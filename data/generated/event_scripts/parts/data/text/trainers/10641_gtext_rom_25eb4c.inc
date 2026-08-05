	@ data/text/trainers.inc:2051 Route119_Text_YasuIntro (+1 aliases)
	.globl gText_Rom_25EB4C
gText_Rom_25EB4C: @ 0x0825EB4C
	.string "かげに ひそみ やみに いきる\nそれが オレの さだめ……!\lいざ ポケモンしょうぶ!$"
	.if (. - gText_Rom_25EB4C) > 0x2c
	.error "gText_Rom_25EB4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EB4C) < 0x2c
	.space 0x2c - (. - gText_Rom_25EB4C)
	.endif
