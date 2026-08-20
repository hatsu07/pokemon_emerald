	@ data/maps/Route116/scripts.inc:433 Route116_Text_CantFindGlassesNotHere
	.globl gText_Rom_1EC2BC
gText_Rom_1EC2BC: @ 0x081EC2BC
	.string "うーむ……\nどうにも メガネが みつからないんだ\lここには ぼくの メガネ ないのかなあ{EOS}"
	.if (. - gText_Rom_1EC2BC) > 0x2d
	.error "gText_Rom_1EC2BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EC2BC) < 0x2d
	.space 0x2d - (. - gText_Rom_1EC2BC)
	.endif
