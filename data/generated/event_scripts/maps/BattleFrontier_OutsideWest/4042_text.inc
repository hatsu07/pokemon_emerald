	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:390 BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo
	.globl gText_Rom_21F3AB
gText_Rom_21F3AB: @ 0x0821F3AB
	.string "ちょっと まえ までは\nなんも なかった とち なのに……\pすっげー ところに なっちゃったなあ!\nこんど かーちゃんも つれて きてやるか"
	.byte EOS
	.if (. - gText_Rom_21F3AB) > 0x47
	.error "gText_Rom_21F3AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F3AB) < 0x47
	.space 0x47 - (. - gText_Rom_21F3AB)
	.endif
