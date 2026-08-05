	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:402 BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet
	.globl gText_Rom_21F4C2
gText_Rom_21F4C2: @ 0x0821F4C2
	.string "はあっ!?\nあなた なに いって くれちゃってるの?\pわたし なんか\nこないだ おうえん してたら\lばーーーっちり めが あったんだからっ!"
	.byte EOS
	.if (. - gText_Rom_21F4C2) > 0x47
	.error "gText_Rom_21F4C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F4C2) < 0x47
	.space 0x47 - (. - gText_Rom_21F4C2)
	.endif
