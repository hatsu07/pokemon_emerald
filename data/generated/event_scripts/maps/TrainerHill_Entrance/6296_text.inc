	@ data/maps/TrainerHill_Entrance/scripts.inc:348 TrainerHill_Roof_Text_YouWerentVeryQuick
	.globl gText_Rom_23BE51
gText_Rom_23BE51: @ 0x0823BE51
	.string "オー……\nでも あんまり はやく なかったねー"
	.byte EOS
	.if (. - gText_Rom_23BE51) > 0x18
	.error "gText_Rom_23BE51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BE51) < 0x18
	.space 0x18 - (. - gText_Rom_23BE51)
	.endif
