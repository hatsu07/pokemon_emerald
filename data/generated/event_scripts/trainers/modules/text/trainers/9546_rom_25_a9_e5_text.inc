	@ data/text/trainers.inc:473 Route107_Text_LisaIntro (+1 aliases)
	.globl gText_Rom_25A9E5
gText_Rom_25A9E5: @ 0x0825A9E5
	.string "ユミ『あたしたち きょうだい ふたりで\nしょうぶを させてもらうわ!$"
	.if (. - gText_Rom_25A9E5) > 0x23
	.error "gText_Rom_25A9E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A9E5) < 0x23
	.space 0x23 - (. - gText_Rom_25A9E5)
	.endif
