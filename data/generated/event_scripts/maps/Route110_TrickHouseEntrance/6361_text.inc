	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:736 Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote
	.globl gText_Rom_23D4AB
gText_Rom_23D4AB: @ 0x0823D4AB
	.string "かけじくの うえに メモが はってある\p「たびに でます…… さがさないでね\nカラクリだいおう」"
	.byte EOS
	.if (. - gText_Rom_23D4AB) > 0x31
	.error "gText_Rom_23D4AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D4AB) < 0x31
	.space 0x31 - (. - gText_Rom_23D4AB)
	.endif
