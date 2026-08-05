	@ data/text/cable_club.inc:134 CableClub_Text_ParticipantsStepUpToCounter
	.globl gText_Rom_247FE3
gText_Rom_247FE3: @ 0x08247FE3
	.string "さんか したい ひとは\nカウンターに おこしください$"
	.if (. - gText_Rom_247FE3) > 0x1b
	.error "gText_Rom_247FE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247FE3) < 0x1b
	.space 0x1b - (. - gText_Rom_247FE3)
	.endif
