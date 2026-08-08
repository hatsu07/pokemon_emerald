	@ data/maps/MtPyre_2F/scripts.inc:117 MtPyre_2F_Text_LeahPostBattle
	.globl gText_Rom_21656E
gText_Rom_21656E: @ 0x0821656E
	.string "ひい おばあさまの だい から\nここで トレーナーを やっているの……\lこの やまを まもっていくわ……$"
	.if (. - gText_Rom_21656E) > 0x35
	.error "gText_Rom_21656E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21656E) < 0x35
	.space 0x35 - (. - gText_Rom_21656E)
	.endif
