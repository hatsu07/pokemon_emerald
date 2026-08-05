	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:697 Route110_TrickHouseEntrance_Text_YoureBeingWatched
	.globl gText_Rom_23D245
gText_Rom_23D245: @ 0x0823D245
	.string "だれかの しせんを かんじる…"
	.byte EOS
	.if (. - gText_Rom_23D245) > 0x10
	.error "gText_Rom_23D245 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D245) < 0x10
	.space 0x10 - (. - gText_Rom_23D245)
	.endif
