	@ data/maps/TrainerHill_Entrance/scripts.inc:323 TrainerHill_Entrance_Text_MovedReceptionHereForSwitch
	.globl gText_Rom_23BBE6
gText_Rom_23BBE6: @ 0x0823BBE6
	.string "トレーナーさんたちが いれかわって\nあぶないので\pこちらに いどう させて\nいただきました!\pごめんなさい!"
	.byte EOS
	.if (. - gText_Rom_23BBE6) > 0x37
	.error "gText_Rom_23BBE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BBE6) < 0x37
	.space 0x37 - (. - gText_Rom_23BBE6)
	.endif
