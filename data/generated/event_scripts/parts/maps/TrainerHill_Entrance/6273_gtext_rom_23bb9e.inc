	@ data/maps/TrainerHill_Entrance/scripts.inc:314 TrainerHill_Entrance_Text_PleaseVisitUsAgain
	.globl gText_Rom_23BB9E
gText_Rom_23BB9E: @ 0x0823BB9E
	.string "また おこしくださいね!"
	.byte EOS
	.if (. - gText_Rom_23BB9E) > 0xd
	.error "gText_Rom_23BB9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BB9E) < 0xd
	.space 0xd - (. - gText_Rom_23BB9E)
	.endif
