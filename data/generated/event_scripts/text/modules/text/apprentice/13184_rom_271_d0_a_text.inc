	@ data/text/apprentice.inc:694 gText_ApprenticeMoveThanks3
	.globl gText_Rom_271D0A
gText_Rom_271D0A: @ 0x08271D0A
	.string "わかりました!\pあたし なんかの ために\n{STR_VAR_1}を おぼえて くれるか……\lいえ! がんばって みます\pありがとう ございます!$"
	.if (. - gText_Rom_271D0A) > 0x40
	.error "gText_Rom_271D0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271D0A) < 0x40
	.space 0x40 - (. - gText_Rom_271D0A)
	.endif
