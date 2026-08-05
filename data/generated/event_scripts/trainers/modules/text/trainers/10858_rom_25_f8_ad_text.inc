	@ data/text/trainers.inc:2369 Route121_Text_MylesIntro (+1 aliases)
	.globl gText_Rom_25F8AD
gText_Rom_25F8AD: @ 0x0825F8AD
	.string "みんなの そだてた ポケモンが\nみてみたーーい!$"
	.if (. - gText_Rom_25F8AD) > 0x19
	.error "gText_Rom_25F8AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F8AD) < 0x19
	.space 0x19 - (. - gText_Rom_25F8AD)
	.endif
