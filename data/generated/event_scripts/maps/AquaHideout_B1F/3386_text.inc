	@ data/maps/AquaHideout_B1F/scripts.inc:115 AquaHideout_B1F_Text_Grunt2PostBattle
	.globl gText_Rom_217E39
gText_Rom_217E39: @ 0x08217E39
	.string "アジトの ひみつ?\pそれはな…… いちばん おくに\nせんすいていが あるって ことよ!\pだが いまごろは いひひひ……!{EOS}"
	.if (. - gText_Rom_217E39) > 0x3d
	.error "gText_Rom_217E39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217E39) < 0x3d
	.space 0x3d - (. - gText_Rom_217E39)
	.endif
