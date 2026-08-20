	@ data/text/trainers.inc:2360 Route121_Text_CaleIntro (+1 aliases)
	.globl gText_Rom_25F83B
gText_Rom_25F83B: @ 0x0825F83B
	.string "いま にもつが いっぱい なんですけど!\nこんな じょうたいで たたかえと?{EOS}"
	.if (. - gText_Rom_25F83B) > 0x27
	.error "gText_Rom_25F83B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F83B) < 0x27
	.space 0x27 - (. - gText_Rom_25F83B)
	.endif
