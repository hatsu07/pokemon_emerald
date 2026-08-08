	@ data/text/trainers.inc:2354 Route121_Text_CristinRematchDefeat (+1 aliases)
	.globl gText_Rom_25F805
gText_Rom_25F805: @ 0x0825F805
	.string "ちょっ……\nひどい やりなおしてよ!$"
	.if (. - gText_Rom_25F805) > 0x13
	.error "gText_Rom_25F805 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F805) < 0x13
	.space 0x13 - (. - gText_Rom_25F805)
	.endif
