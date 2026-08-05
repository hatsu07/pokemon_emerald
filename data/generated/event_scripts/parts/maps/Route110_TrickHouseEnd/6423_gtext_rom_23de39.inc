	@ data/maps/Route110_TrickHouseEnd/scripts.inc:295 Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou
	.globl gText_Rom_23DE39
gText_Rom_23DE39: @ 0x0823DE39
	.string "なんだ とくいそうな かお してからに\nわがはいに かった きに なるのは\lまだ はやいわ!\lこのあとも また しかけを つくるから\lそれが おわってから わがはいを わらえ!\pそれでは じかいを おたのしみに!"
	.byte EOS
	.if (. - gText_Rom_23DE39) > 0x6b
	.error "gText_Rom_23DE39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23DE39) < 0x6b
	.space 0x6b - (. - gText_Rom_23DE39)
	.endif
