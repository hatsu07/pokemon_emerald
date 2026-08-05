	@ data/text/cable_club.inc:117 RecordCorner_Text_TakeSeatAndWait
	.globl gText_Rom_247FA2
gText_Rom_247FA2: @ 0x08247FA2
	.string "しょていの いちに ついて\nおまち ください$"
	.if (. - gText_Rom_247FA2) > 0x17
	.error "gText_Rom_247FA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247FA2) < 0x17
	.space 0x17 - (. - gText_Rom_247FA2)
	.endif
