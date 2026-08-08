	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:327 BattleFrontier_OutsideEast_Text_OddTreeHereSeemsToWiggle
	.globl gText_Rom_223389
gText_Rom_223389: @ 0x08223389
	.string "もしもし あんたさんは\nめは いいほう ですかい?\pあたしには このさきの きが ときどき\nぷるぷる してる ように みえるんですわ…$"
	.if (. - gText_Rom_223389) > 0x44
	.error "gText_Rom_223389 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_223389) < 0x44
	.space 0x44 - (. - gText_Rom_223389)
	.endif
