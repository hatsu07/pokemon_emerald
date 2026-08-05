	@ data/text/trainers.inc:1841 Route117_Text_AishaIntro (+1 aliases)
	.globl gText_Rom_25E2C3
gText_Rom_25E2C3: @ 0x0825E2C3
	.string "かつこと だけを かんがえて たたかうわ!$"
	.if (. - gText_Rom_25E2C3) > 0x16
	.error "gText_Rom_25E2C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E2C3) < 0x16
	.space 0x16 - (. - gText_Rom_25E2C3)
	.endif
