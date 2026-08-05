	@ data/maps/MtPyre_Summit/scripts.inc:449 MtPyre_Summit_Text_Grunt2PostBattle
	.globl gText_Rom_2170D8
gText_Rom_2170D8: @ 0x082170D8
	.string "なにも しらないくせに\nオレたちの じゃまを するんじゃないぜ!$"
	.if (. - gText_Rom_2170D8) > 0x21
	.error "gText_Rom_2170D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2170D8) < 0x21
	.space 0x21 - (. - gText_Rom_2170D8)
	.endif
