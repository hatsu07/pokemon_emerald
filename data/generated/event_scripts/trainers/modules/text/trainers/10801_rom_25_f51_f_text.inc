	@ data/text/trainers.inc:2285 Route121_Text_TammyIntro (+1 aliases)
	.globl gText_Rom_25F51F
gText_Rom_25F51F: @ 0x0825F51F
	.string "よの なかには ふしぎな ちからが\nいっぱい あるの……{EOS}"
	.if (. - gText_Rom_25F51F) > 0x1d
	.error "gText_Rom_25F51F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F51F) < 0x1d
	.space 0x1d - (. - gText_Rom_25F51F)
	.endif
