	@ data/text/pc.inc:16 gText_AccessedPlayersPC
	.globl gText_Rom_243716
gText_Rom_243716: @ 0x08243716
	.string "{PLAYER}の パソコンに せつぞくした!$"
	.if (. - gText_Rom_243716) > 0x12
	.error "gText_Rom_243716 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243716) < 0x12
	.space 0x12 - (. - gText_Rom_243716)
	.endif
