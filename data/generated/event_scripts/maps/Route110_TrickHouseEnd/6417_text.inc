	@ data/maps/Route110_TrickHouseEnd/scripts.inc:286 Route110_TrickHouseEnd_Text_LeavingOnJourney
	.globl gText_Rom_23DD87
gText_Rom_23DD87: @ 0x0823DD87
	.string "…… …… ……\pわがはいは これから\nあらたな しかけを もとめて\lたびに でる ことに する……\lあんたも いつか ここにきて\lまた あそんで いってくれ!\pそれでは さらば…!"
	.byte EOS
	.if (. - gText_Rom_23DD87) > 0x5c
	.error "gText_Rom_23DD87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23DD87) < 0x5c
	.space 0x5c - (. - gText_Rom_23DD87)
	.endif
