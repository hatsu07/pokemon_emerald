	@ src/strings.c:648 gText_NoSaveFileCantSetTime
	.globl gText_Rom_5CBF69
gText_Rom_5CBF69: @ 0x085CBF69
	.string "レポートが ないので\nじかんの せっていは できません!$"
	.if (. - gText_Rom_5CBF69) > 0x1d
	.error "gText_Rom_5CBF69 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBF69) < 0x1d
	.space 0x1d - (. - gText_Rom_5CBF69)
	.endif
