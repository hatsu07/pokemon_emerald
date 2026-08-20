	@ data/maps/Route110_TrickHousePuzzle4/scripts.inc:42 Route110_TrickHousePuzzle4_Text_YujiIntro (+1 aliases)
	.globl gText_Rom_23EC55
gText_Rom_23EC55: @ 0x0823EC55
	.string "このくらいの いわは\nゆび いっぽんで らくしょう だぜ!{EOS}"
	.if (. - gText_Rom_23EC55) > 0x1e
	.error "gText_Rom_23EC55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23EC55) < 0x1e
	.space 0x1e - (. - gText_Rom_23EC55)
	.endif
