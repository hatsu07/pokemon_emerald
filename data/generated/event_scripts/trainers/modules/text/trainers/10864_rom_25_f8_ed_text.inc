	@ data/text/trainers.inc:2378 Route121_Text_PatIntro (+1 aliases)
	.globl gText_Rom_25F8ED
gText_Rom_25F8ED: @ 0x0825F8ED
	.string "わたしの そだてた ポケモンたち\nみんなに みてほしいの!{EOS}"
	.if (. - gText_Rom_25F8ED) > 0x1e
	.error "gText_Rom_25F8ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F8ED) < 0x1e
	.space 0x1e - (. - gText_Rom_25F8ED)
	.endif
