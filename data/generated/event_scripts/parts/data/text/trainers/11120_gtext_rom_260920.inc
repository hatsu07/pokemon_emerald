	@ data/text/trainers.inc:2762 Route125_Text_ErnestRematchPostBattle
	.globl gText_Rom_260920
gText_Rom_260920: @ 0x08260920
	.string "あさせのほらあな……\pしおの みちひきに よって\nいけたり いけなかったり する\lばしょが あるんだよな\pちなみに みちしお から ひきしお まで\nおよそ 6じかんだぞ! おぼえておけよ!$"
	.if (. - gText_Rom_260920) > 0x5f
	.error "gText_Rom_260920 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260920) < 0x5f
	.space 0x5f - (. - gText_Rom_260920)
	.endif
