	@ data/maps/AquaHideout_B1F/scripts.inc:109 AquaHideout_B1F_Text_Grunt2Intro (+1 aliases)
	.globl gText_Rom_217E0C
gText_Rom_217E0C: @ 0x08217E0C
	.string "アジトの ひみつを しりたけりゃ\nおれを たおす ことだな!$"
	.if (. - gText_Rom_217E0C) > 0x1f
	.error "gText_Rom_217E0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217E0C) < 0x1f
	.space 0x1f - (. - gText_Rom_217E0C)
	.endif
