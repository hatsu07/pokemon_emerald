	@ data/maps/SootopolisCity/scripts.inc:1513 SootopolisCity_Text_HaventYouScaledSkyPillar
	.globl gText_Rom_1E376F
gText_Rom_1E376F: @ 0x081E376F
	.string "ミクリ『おや? {PLAYER}{KUN}\pあれから そらのはしらを のぼって\nいかなかったのかい?\pきみなら きっと いけるさ\nそらのはしらの おくじょうへ……$"
	.if (. - gText_Rom_1E376F) > 0x49
	.error "gText_Rom_1E376F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E376F) < 0x49
	.space 0x49 - (. - gText_Rom_1E376F)
	.endif
