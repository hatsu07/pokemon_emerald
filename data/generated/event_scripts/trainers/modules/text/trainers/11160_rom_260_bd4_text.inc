	@ data/text/trainers.inc:2822 Route126_Text_DeanPostBattle
	.globl gText_Rom_260BD4
gText_Rom_260BD4: @ 0x08260BD4
	.string "ルネシティの いりぐちが みつからん!\nどこに あるんだ?$"
	.if (. - gText_Rom_260BD4) > 0x1e
	.error "gText_Rom_260BD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260BD4) < 0x1e
	.space 0x1e - (. - gText_Rom_260BD4)
	.endif
