	@ data/maps/TrainerHill_Entrance/scripts.inc:320 TrainerHill_Entrance_Text_HopeYouGiveItYourBest
	.globl gText_Rom_23BBDA
gText_Rom_23BBDA: @ 0x0823BBDA
	.string "がんばってくださいね!"
	.byte EOS
	.if (. - gText_Rom_23BBDA) > 0xc
	.error "gText_Rom_23BBDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BBDA) < 0xc
	.space 0xc - (. - gText_Rom_23BBDA)
	.endif
