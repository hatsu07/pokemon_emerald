	@ data/text/trainers.inc:2291 Route121_Text_TammyPostBattle
	.globl gText_Rom_25F548
gText_Rom_25F548: @ 0x0825F548
	.string "おくりびやま……\nあそこに ふしぎな ちからが あるの……{EOS}"
	.if (. - gText_Rom_25F548) > 0x1e
	.error "gText_Rom_25F548 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F548) < 0x1e
	.space 0x1e - (. - gText_Rom_25F548)
	.endif
