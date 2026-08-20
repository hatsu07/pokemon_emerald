	@ data/maps/GraniteCave_StevensRoom/scripts.inc:91 GraniteCave_StevensRoom_Text_RegisteredSteven
	.globl gText_Rom_214235
gText_Rom_214235: @ 0x08214235
	.string "ダイゴを\nポケナビに とうろく した!{EOS}"
	.if (. - gText_Rom_214235) > 0x14
	.error "gText_Rom_214235 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_214235) < 0x14
	.space 0x14 - (. - gText_Rom_214235)
	.endif
