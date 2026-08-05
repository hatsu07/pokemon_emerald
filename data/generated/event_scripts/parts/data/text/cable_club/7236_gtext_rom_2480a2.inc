	@ data/text/cable_club.inc:169 CableClub_Text_ReturnsToPreviousStep
	.globl gText_Rom_2480A2
gText_Rom_2480A2: @ 0x082480A2
	.string "どちらの しょうぶに しますか?$"
	.if (. - gText_Rom_2480A2) > 0x11
	.error "gText_Rom_2480A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2480A2) < 0x11
	.space 0x11 - (. - gText_Rom_2480A2)
	.endif
