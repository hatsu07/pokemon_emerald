	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:393 MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou
	.globl gText_Rom_20DCFF
gText_Rom_20DCFF: @ 0x0820DCFF
	.string "ウヒョヒョ！ せっかく\nねんりょうを いただきに きたのに\lジャマが はいっちまった！\pおまえも オレたちの ジャマを するなら\nいっしょに かたづけて やろうか！{EOS}"
	.if (. - gText_Rom_20DCFF) > 0x53
	.error "gText_Rom_20DCFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DCFF) < 0x53
	.space 0x53 - (. - gText_Rom_20DCFF)
	.endif
