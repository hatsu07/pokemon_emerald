	@ data/maps/Route121/scripts.inc:175 Route121_Text_AheadLoomsMtPyre
	.globl gText_Rom_1EE34F
gText_Rom_1EE34F: @ 0x081EE34F
	.string "このさきに あるのは おくりびやま……\pじゅみょうを おえた ポケモンたちの\nたましいが まつられる ところ……$"
	.if (. - gText_Rom_1EE34F) > 0x39
	.error "gText_Rom_1EE34F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EE34F) < 0x39
	.space 0x39 - (. - gText_Rom_1EE34F)
	.endif
