	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:733 Route110_TrickHouseEntrance_Text_GoInHoleBehindScroll
	.globl gText_Rom_23D47F
gText_Rom_23D47F: @ 0x0823D47F
	.string "かけじくの うらを のぞくと\nおおきい あなが あった!\pおくに すすんで みますか?"
	.byte EOS
	.if (. - gText_Rom_23D47F) > 0x2c
	.error "gText_Rom_23D47F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D47F) < 0x2c
	.space 0x2c - (. - gText_Rom_23D47F)
	.endif
