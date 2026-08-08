	@ data/maps/TrainerHill_Entrance/scripts.inc:308 TrainerHill_Entrance_Text_LikeToChallengeTrainers
	.globl gText_Rom_23BB51
gText_Rom_23BB51: @ 0x0823BB51
	.string "トレーナーさんたちと\nしょうぶ しますか?"
	.byte EOS
	.if (. - gText_Rom_23BB51) > 0x16
	.error "gText_Rom_23BB51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BB51) < 0x16
	.space 0x16 - (. - gText_Rom_23BB51)
	.endif
