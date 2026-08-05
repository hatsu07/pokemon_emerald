	@ data/text/shoal_cave.inc:1 ShoalCave_LowTideEntranceRoom_Text_AreYouPlanningOnGoingInThere
	.globl gText_Rom_26406F
gText_Rom_26406F: @ 0x0826406F
	.string "このさきに すすむのかね?\pもし よかったら\nあさせのしおと あさせのかいがらを\lあつめてきて くれないか\pざいりょうが あつまったら\nわたしが いいもの つくるんだがね$"
	.if (. - gText_Rom_26406F) > 0x56
	.error "gText_Rom_26406F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26406F) < 0x56
	.space 0x56 - (. - gText_Rom_26406F)
	.endif
