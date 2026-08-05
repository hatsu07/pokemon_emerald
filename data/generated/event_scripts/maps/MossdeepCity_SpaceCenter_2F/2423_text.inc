	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:348 MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut
	.globl gText_Rom_20DB39
gText_Rom_20DB39: @ 0x0820DB39
	.string "わしも もうすこし わかければ\nうちゅう ひこうしに なりたかった……\pいや いまからでも おそくない！\nよーし がんばるぞー！！$"
	.if (. - gText_Rom_20DB39) > 0x42
	.error "gText_Rom_20DB39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DB39) < 0x42
	.space 0x42 - (. - gText_Rom_20DB39)
	.endif
