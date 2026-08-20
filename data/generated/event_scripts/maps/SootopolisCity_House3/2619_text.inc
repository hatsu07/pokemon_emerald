	@ data/maps/SootopolisCity_House3/scripts.inc:25 SootopolisCity_House3_Text_YouMustBePrettyStrong
	.globl gText_Rom_20F502
gText_Rom_20F502: @ 0x0820F502
	.string "へえー\nじゃあ けっこう つよいのね!{EOS}"
	.if (. - gText_Rom_20F502) > 0x14
	.error "gText_Rom_20F502 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F502) < 0x14
	.space 0x14 - (. - gText_Rom_20F502)
	.endif
