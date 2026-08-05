	@ data/maps/TrainerHill_Entrance/scripts.inc:311 TrainerHill_Entrance_Text_TimeProgessGetSetGo
	.globl gText_Rom_23BB67
gText_Rom_23BB67: @ 0x0823BB67
	.string "それでは じかんを はかりますので\nがんばってくださいね!\pいちについて…………………\pようい……\pドン!!"
	.byte EOS
	.if (. - gText_Rom_23BB67) > 0x37
	.error "gText_Rom_23BB67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BB67) < 0x37
	.space 0x37 - (. - gText_Rom_23BB67)
	.endif
