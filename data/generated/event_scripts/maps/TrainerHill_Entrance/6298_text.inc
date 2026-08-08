	@ data/maps/TrainerHill_Entrance/scripts.inc:351 TrainerHill_Roof_Text_ArriveZippierNextTime
	.globl gText_Rom_23BE69
gText_Rom_23BE69: @ 0x0823BE69
	.string "つぎは もっと はやく このわたくしに\nあいにきてくれると いいかもね!\pそしたら こんどこそ\nタッグを くもうなー!\pじゃあ またな! アミーゴ!"
	.byte EOS
	.if (. - gText_Rom_23BE69) > 0x4b
	.error "gText_Rom_23BE69 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BE69) < 0x4b
	.space 0x4b - (. - gText_Rom_23BE69)
	.endif
