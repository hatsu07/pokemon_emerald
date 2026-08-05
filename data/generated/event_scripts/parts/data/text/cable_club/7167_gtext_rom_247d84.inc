	@ data/text/cable_club.inc:57 Text_PlayersMadeDifferentSelections
	.globl gText_Rom_247D84
gText_Rom_247D84: @ 0x08247D84
	.string "おたがいが えらんだ ものが\nちがっている ようです$"
	.if (. - gText_Rom_247D84) > 0x1b
	.error "gText_Rom_247D84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_247D84) < 0x1b
	.space 0x1b - (. - gText_Rom_247D84)
	.endif
