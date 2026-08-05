	@ data/maps/OldaleTown/scripts.inc:376 OldaleTown_Text_FinishedSketchingFootprints
	.globl gText_Rom_1E4BBC
gText_Rom_1E4BBC: @ 0x081E4BBC
	.string "かんせい させた めずらしい\nポケモンの あしあとの スケッチ\lよくみたら じぶんの あしあと だったよ……$"
	.if (. - gText_Rom_1E4BBC) > 0x37
	.error "gText_Rom_1E4BBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E4BBC) < 0x37
	.space 0x37 - (. - gText_Rom_1E4BBC)
	.endif
