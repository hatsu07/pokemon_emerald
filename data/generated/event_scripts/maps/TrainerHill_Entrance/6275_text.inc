	@ data/maps/TrainerHill_Entrance/scripts.inc:317 TrainerHill_Entrance_Text_TooBadTremendousEffort
	.globl gText_Rom_23BBAB
gText_Rom_23BBAB: @ 0x0823BBAB
	.string "ざんねん でしたね!\pとっても いい しょうぶ\nだったと おもいます\pまた きてくださいね!"
	.byte EOS
	.if (. - gText_Rom_23BBAB) > 0x2f
	.error "gText_Rom_23BBAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BBAB) < 0x2f
	.space 0x2f - (. - gText_Rom_23BBAB)
	.endif
