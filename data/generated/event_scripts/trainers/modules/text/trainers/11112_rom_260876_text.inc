	@ data/text/trainers.inc:2750 Route125_Text_ErnestPostBattle
	.globl gText_Rom_260876
gText_Rom_260876: @ 0x08260876
	.string "あさせのほらあな は じかんによって\nしおが みちたり ひいたり するんだ!\pちなみに みちしお から ひきしお まで\nおよそ 6じかんだぞ! しっていたか?$"
	.if (. - gText_Rom_260876) > 0x50
	.error "gText_Rom_260876 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260876) < 0x50
	.space 0x50 - (. - gText_Rom_260876)
	.endif
