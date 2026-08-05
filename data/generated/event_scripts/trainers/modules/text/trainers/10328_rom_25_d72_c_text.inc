	@ data/text/trainers.inc:1592 Route116_Text_JanicePostBattle
	.globl gText_Rom_25D72C
gText_Rom_25D72C: @ 0x0825D72C
	.string "かわいさと つよさを かねそなえた ポケモン\nそれが わたしの りそうなの!$"
	.if (. - gText_Rom_25D72C) > 0x27
	.error "gText_Rom_25D72C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D72C) < 0x27
	.space 0x27 - (. - gText_Rom_25D72C)
	.endif
