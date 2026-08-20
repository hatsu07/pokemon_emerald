	@ data/maps/Route109/scripts.inc:515 Route109_Text_ZigzagoonPicksUpLitter
	.globl gText_Rom_1E8D34
gText_Rom_1E8D34: @ 0x081E8D34
	.string "この あたりの うみは きれいだがな\pそれでも たまに こうして すてられた\nゴミを ジグザグマに あつめてもらうよ\pよごれた みずは あめと なって\nかわに ながれこみ のみみずと なる……\pうみを よごすと\nけっきょく じぶんらが こまるからの{EOS}"
	.if (. - gText_Rom_1E8D34) > 0x7d
	.error "gText_Rom_1E8D34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E8D34) < 0x7d
	.space 0x7d - (. - gText_Rom_1E8D34)
	.endif
